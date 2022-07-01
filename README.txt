DESCRIPTION:
This repo consists of a real-time kernel designed for an ARM Cortex-M4 device. All testing is done on a Texas Instruments EK-TM4C1294EXL development board.  

DIRECTORIES:
boot/:		device startup files and main().
drivers/:	hardware device abstractions.
kernel/: 	all modules that form the kernel.
test/: 		local unit testing suite.
out/:		all output from build.
out/bin:	binary rtos file.
out/debug:	rtos ELF file, disassembly, headers.
