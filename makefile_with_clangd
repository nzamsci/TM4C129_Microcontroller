PROJ_NAME := rtos-cortex-m4

CC := arm-none-eabi-gcc
LD := arm-none-eabi-gcc
OBJCOPY := arm-none-eabi-objcopy
OBJDUMP := arm-none-eabi-objdump
LD_SCRIPT := tm4c129.ld

# flags
CC_FLAGS := -mcpu=cortex-m4 -mthumb 
LD_FLAGS := -T $(LD_SCRIPT) --specs=nosys.specs -nostartfiles

# directories and files
OUT_DIR := $(CURDIR)/out
BIN_DIR := $(OUT_DIR)/bin
DEBUG_DIR := $(OUT_DIR)/debug
OUT_ELF_FILE := $(DEBUG_DIR)/$(PROJ_NAME).elf
OUT_BIN_FILE := $(BIN_DIR)/$(PROJ_NAME).bin

# function to find all file extensions in each subdirectory 
rwildcard=$(wildcard $1$2) $(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2))

# gather source and include files
SRC_FILES := $(call rwildcard,boot/,*.c)
SRC_FILES += $(call rwildcard,drivers/,*.c)
SRC_FILES += $(call rwildcard,kernel/,*.c)
INC_FILES := $(call rwildcard,boot/,*.h)
INC_FILES += $(call rwildcard,drivers/,*.h)
INC_FILES += $(call rwildcard,kernel/,*.h)
INC_FLAGS := $(addprefix -I,$(dir $(INC_FILES)))
OBJ_FILES := $(patsubst %.c,%.o,$(SRC_FILES))
CLANGD_FLAGS := $(INC_FLAGS:/=)

# kernel target recipes
all: $(OUT_BIN_FILE) debug clean
	# make clangd include file
	> compile_flags.txt
	$(MAKE)	clangd-flags

$(OUT_BIN_FILE): $(OUT_ELF_FILE)
	$(OBJCOPY) -O binary $< $@

$(OUT_ELF_FILE): $(OBJ_FILES)
	$(LD) $(LD_FLAGS) $(OBJ_FILES) -o $@

$(OBJ_FILES): %.o: %.c
	$(CC) -c $(CC_FLAGS) $(INC_FLAGS) $< -o $@

debug:
	$(OBJDUMP) --disassemble-all $(OUT_ELF_FILE) > "$(DEBUG_DIR)/disassembly.txt"
	$(OBJDUMP) --section-headers $(OUT_ELF_FILE) > "$(DEBUG_DIR)/headers.txt"

clangd-flags:
	$(foreach flag,$(CLANGD_FLAGS),$(file >>compile_flags.txt,$(flag)))
	
clean:
	rm -rf $(OBJ_FILES)

.PHONY: all debug clangd-flags clean 
