#include <stdint.h>

// main function
extern int main();

// address of top of stack
#define	STACK_TOP 0x2003FFFF	// todo for some reason cannot

// linker-defined symbols
extern uint32_t _etext;		// address of the end of .text section
extern uint32_t _sdata;		// address of the start of .data section
extern uint32_t _edata;		// address of the end of .data section
extern uint32_t _sbss;		// address of the start of .bss section
extern uint32_t _ebss;		// address of the end of .bss section

// processor exception handlers
void reset_handler();
void default_handler();
void nmi_handler() __attribute__ ((weak, alias("default_handler")));
void hardfault_handler() __attribute__ ((weak, alias("default_handler")));
void mpufault_handler() __attribute__ ((weak, alias("default_handler")));
void busfault_handler() __attribute__ ((weak, alias("default_handler")));
void usagefault_handler() __attribute__ ((weak, alias("default_handler")));
void svcall_handler() __attribute__ ((weak, alias("default_handler")));
void debugmonitor_handler() __attribute__ ((weak, alias("default_handler")));
void pendsv_handler() __attribute__ ((weak, alias("default_handler")));
void systick_handler() __attribute__ ((weak, alias("default_handler")));

// interrupt service routines
void gpio_portA_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portB_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portC_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portD_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portE_isr() __attribute__ ((weak, alias("default_handler")));
void uart0_isr() __attribute__ ((weak, alias("default_handler")));
void uart1_isr() __attribute__ ((weak, alias("default_handler")));
void ssi0_isr() __attribute__ ((weak, alias("default_handler")));
void i2c0_isr() __attribute__ ((weak, alias("default_handler")));
void pwmfault_isr() __attribute__ ((weak, alias("default_handler")));
void pwm_gen0_isr() __attribute__ ((weak, alias("default_handler")));
void pwm_gen1_isr() __attribute__ ((weak, alias("default_handler")));
void pwm_gen2_isr() __attribute__ ((weak, alias("default_handler")));
void quadenc0_isr() __attribute__ ((weak, alias("default_handler")));
void adc0_seq0_isr() __attribute__ ((weak, alias("default_handler")));
void adc0_seq1_isr() __attribute__ ((weak, alias("default_handler")));
void adc0_seq2_isr() __attribute__ ((weak, alias("default_handler")));
void adc0_seq3_isr() __attribute__ ((weak, alias("default_handler")));
void watchdog_isr() __attribute__ ((weak, alias("default_handler")));
void tim0_subA_isr() __attribute__ ((weak, alias("default_handler")));
void tim0_subB_isr() __attribute__ ((weak, alias("default_handler")));
void tim1_subA_isr() __attribute__ ((weak, alias("default_handler")));
void tim1_subB_isr() __attribute__ ((weak, alias("default_handler")));
void tim2_subA_isr() __attribute__ ((weak, alias("default_handler")));
void tim2_subB_isr() __attribute__ ((weak, alias("default_handler")));
void acomp0_isr() __attribute__ ((weak, alias("default_handler")));
void acomp1_isr() __attribute__ ((weak, alias("default_handler")));
void acomp2_isr() __attribute__ ((weak, alias("default_handler")));
void sysctl_isr() __attribute__ ((weak, alias("default_handler")));
void flash_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portF_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portG_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portH_isr() __attribute__ ((weak, alias("default_handler")));
void uart2_isr() __attribute__ ((weak, alias("default_handler")));
void ssi1_isr() __attribute__ ((weak, alias("default_handler")));
void tim3_subA_isr() __attribute__ ((weak, alias("default_handler")));
void tim3_subB_isr() __attribute__ ((weak, alias("default_handler")));
void i2c1_isr() __attribute__ ((weak, alias("default_handler")));
void can0_isr() __attribute__ ((weak, alias("default_handler")));
void can1_isr() __attribute__ ((weak, alias("default_handler")));
void ethernet_isr() __attribute__ ((weak, alias("default_handler")));
void hibernate_isr() __attribute__ ((weak, alias("default_handler")));
void usb0_isr() __attribute__ ((weak, alias("default_handler")));
void pwm_gen3_isr() __attribute__ ((weak, alias("default_handler")));
void dma_sfw_isr() __attribute__ ((weak, alias("default_handler")));
void dma_err_isr() __attribute__ ((weak, alias("default_handler")));
void adc1_seq0_isr() __attribute__ ((weak, alias("default_handler")));
void adc1_seq1_isr() __attribute__ ((weak, alias("default_handler")));
void adc1_seq2_isr() __attribute__ ((weak, alias("default_handler")));
void adc1_seq3_isr() __attribute__ ((weak, alias("default_handler")));
void extbus0_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portJ_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portK_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portL_isr() __attribute__ ((weak, alias("default_handler")));
void ssi2_isr() __attribute__ ((weak, alias("default_handler")));
void ssi3_isr() __attribute__ ((weak, alias("default_handler")));
void uart3_isr() __attribute__ ((weak, alias("default_handler")));
void uart4_isr() __attribute__ ((weak, alias("default_handler")));
void uart5_isr() __attribute__ ((weak, alias("default_handler")));
void uart6_isr() __attribute__ ((weak, alias("default_handler")));
void uart7_isr() __attribute__ ((weak, alias("default_handler")));
void i2c2_isr() __attribute__ ((weak, alias("default_handler")));
void i2c3_isr() __attribute__ ((weak, alias("default_handler")));
void tim4_subA_isr() __attribute__ ((weak, alias("default_handler")));
void tim4_subB_isr() __attribute__ ((weak, alias("default_handler")));
void tim5_subA_isr() __attribute__ ((weak, alias("default_handler")));
void tim5_subB_isr() __attribute__ ((weak, alias("default_handler")));
void fpu_isr() __attribute__ ((weak, alias("default_handler")));
void i2c4_isr() __attribute__ ((weak, alias("default_handler")));
void i2c5_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portM_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portN_isr() __attribute__ ((weak, alias("default_handler")));
void tamper_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portP_P0_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portP_P1_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portP_P2_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portP_P3_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portP_P4_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portP_P5_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portP_P6_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portP_P7_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portQ_Q0_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portQ_Q1_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portQ_Q2_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portQ_Q3_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portQ_Q4_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portQ_Q5_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portQ_Q6_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portQ_Q7_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portR_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portS_isr() __attribute__ ((weak, alias("default_handler")));
void sha_md5_isr() __attribute__ ((weak, alias("default_handler")));
void aes0_isr() __attribute__ ((weak, alias("default_handler")));
void des3des0_isr() __attribute__ ((weak, alias("default_handler")));
void lcd0_isr() __attribute__ ((weak, alias("default_handler")));
void tim6_subA_isr() __attribute__ ((weak, alias("default_handler")));
void tim6_subB_isr() __attribute__ ((weak, alias("default_handler")));
void tim7_subA_isr() __attribute__ ((weak, alias("default_handler")));
void tim7_subB_isr() __attribute__ ((weak, alias("default_handler")));
void i2c6_isr() __attribute__ ((weak, alias("default_handler")));
void i2c7_isr() __attribute__ ((weak, alias("default_handler")));
void himkb0_isr() __attribute__ ((weak, alias("default_handler")));
void onewire0_isr() __attribute__ ((weak, alias("default_handler")));
void himps0_isr() __attribute__ ((weak, alias("default_handler")));
void himled0_isr() __attribute__ ((weak, alias("default_handler")));
void himir0_isr() __attribute__ ((weak, alias("default_handler")));
void i2c8_isr() __attribute__ ((weak, alias("default_handler")));
void i2c9_isr() __attribute__ ((weak, alias("default_handler")));
void gpio_portT_isr() __attribute__ ((weak, alias("default_handler")));


uint32_t _vectors[] __attribute__ ((section(".vectors"))) = {
	
	// processor exceptions
	(uint32_t)STACK_TOP,		                     // stack top
	(uint32_t)&reset_handler,                        // The reset handler
	(uint32_t)&nmi_handler,                          // The NMI handler
	(uint32_t)&hardfault_handler,                    // The hard fault handler
	(uint32_t)&mpufault_handler,                     // The MPU fault handler
	(uint32_t)&busfault_handler,                     // The bus fault handler
	(uint32_t)&usagefault_handler,                   // The usage fault handler
	0,                                               // Reserved
	0,                                               // Reserved
	0,                                               // Reserved
	0,                                               // Reserved
	(uint32_t)&svcall_handler,                       // SVCall handler
	(uint32_t)&debugmonitor_handler,                 // Debug monitor handler
	0,                                               // Reserved
	(uint32_t)&pendsv_handler,                       // The PendSV handler
	(uint32_t)&systick_handler,                      // The SysTick handler
	
	// interrupts
	(uint32_t)&gpio_portA_isr,                       // GPIO Port A
	(uint32_t)&gpio_portB_isr,                       // GPIO Port B
	(uint32_t)&gpio_portC_isr,                       // GPIO Port C
	(uint32_t)&gpio_portD_isr,                       // GPIO Port D
	(uint32_t)&gpio_portE_isr,                       // GPIO Port E
	(uint32_t)&uart0_isr,                            // UART0 Rx and Tx
	(uint32_t)&uart1_isr,                            // UART1 Rx and Tx
	(uint32_t)&ssi0_isr,                             // SSI0 Rx and Tx
	(uint32_t)&i2c0_isr,                             // I2C0 Master and Slave
	(uint32_t)&pwmfault_isr,                         // PWM Fault
	(uint32_t)&pwm_gen0_isr,                         // PWM Generator 0
	(uint32_t)&pwm_gen1_isr,                         // PWM Generator 1
	(uint32_t)&pwm_gen2_isr,                         // PWM Generator 2
	(uint32_t)&quadenc0_isr,                         // Quadrature Encoder 0
	(uint32_t)&adc0_seq0_isr,                        // ADC Sequence 0
	(uint32_t)&adc0_seq1_isr,                        // ADC Sequence 1
	(uint32_t)&adc0_seq2_isr,                        // ADC Sequence 2
	(uint32_t)&adc0_seq3_isr,                        // ADC Sequence 3
	(uint32_t)&watchdog_isr,                         // Watchdog timer
	(uint32_t)&tim0_subA_isr,                        // Timer 0 subtimer A
	(uint32_t)&tim0_subB_isr,                        // Timer 0 subtimer B
	(uint32_t)&tim1_subA_isr,                        // Timer 1 subtimer A
	(uint32_t)&tim1_subB_isr,                        // Timer 1 subtimer B
	(uint32_t)&tim2_subA_isr,                        // Timer 2 subtimer A
	(uint32_t)&tim2_subB_isr,                        // Timer 2 subtimer B
	(uint32_t)&acomp0_isr,                           // Analog Comparator 0
	(uint32_t)&acomp1_isr,                           // Analog Comparator 1
	(uint32_t)&acomp2_isr,                           // Analog Comparator 2
	(uint32_t)&sysctl_isr,                           // System Control (PLL, OSC, BO)
	(uint32_t)&flash_isr,                            // FLASH Control
	(uint32_t)&gpio_portF_isr,                       // GPIO Port F
	(uint32_t)&gpio_portG_isr,                       // GPIO Port G
	(uint32_t)&gpio_portH_isr,                       // GPIO Port H
	(uint32_t)&uart2_isr,                            // UART2 Rx and Tx
	(uint32_t)&ssi1_isr,                             // SSI1 Rx and Tx
	(uint32_t)&tim3_subA_isr,                        // Timer 3 subtimer A
	(uint32_t)&tim3_subB_isr,                        // Timer 3 subtimer B
	(uint32_t)&i2c1_isr,                             // I2C1 Master and Slave
	(uint32_t)&can0_isr,                             // CAN0
	(uint32_t)&can1_isr,                             // CAN1
	(uint32_t)&ethernet_isr,                         // Ethernet
	(uint32_t)&hibernate_isr,                        // Hibernate
	(uint32_t)&usb0_isr,                             // USB0
	(uint32_t)&pwm_gen3_isr,                         // PWM Generator 3
	(uint32_t)&dma_sfw_isr,                          // uDMA Software Transfer
	(uint32_t)&dma_err_isr,                          // uDMA Error
	(uint32_t)&adc1_seq0_isr,                        // ADC1 Sequence 0
	(uint32_t)&adc1_seq1_isr,                        // ADC1 Sequence 1
	(uint32_t)&adc1_seq2_isr,                        // ADC1 Sequence 2
	(uint32_t)&adc1_seq3_isr,                        // ADC1 Sequence 3
	(uint32_t)&extbus0_isr,                          // External Bus Interface 0
	(uint32_t)&gpio_portJ_isr,                       // GPIO Port J
	(uint32_t)&gpio_portK_isr,                       // GPIO Port K
	(uint32_t)&gpio_portL_isr,                       // GPIO Port L
	(uint32_t)&ssi2_isr,                             // SSI2 Rx and Tx
	(uint32_t)&ssi3_isr,                             // SSI3 Rx and Tx
	(uint32_t)&uart3_isr,                            // UART3 Rx and Tx
	(uint32_t)&uart4_isr,                            // UART4 Rx and Tx
	(uint32_t)&uart5_isr,                            // UART5 Rx and Tx
	(uint32_t)&uart6_isr,                            // UART6 Rx and Tx
	(uint32_t)&uart7_isr,                            // UART7 Rx and Tx
	(uint32_t)&i2c2_isr,                             // I2C2 Master and Slave
	(uint32_t)&i2c3_isr,                             // I2C3 Master and Slave
	(uint32_t)&tim4_subA_isr,                        // Timer 4 subtimer A
	(uint32_t)&tim4_subB_isr,                        // Timer 4 subtimer B
	(uint32_t)&tim5_subA_isr,                        // Timer 5 subtimer A
	(uint32_t)&tim5_subB_isr,                        // Timer 5 subtimer B
	(uint32_t)&fpu_isr,                              // FPU
	0,                                               // Reserved
	0,                                               // Reserved
	(uint32_t)&i2c4_isr,                             // I2C4 Master and Slave
	(uint32_t)&i2c5_isr,                             // I2C5 Master and Slave
	(uint32_t)&gpio_portM_isr,                       // GPIO Port M
	(uint32_t)&gpio_portN_isr,                       // GPIO Port N
	0,                                               // Reserved
	(uint32_t)&tamper_isr,                           // Tamper
	(uint32_t)&gpio_portP_P0_isr,                    // GPIO Port P (Summary or P0)
	(uint32_t)&gpio_portP_P1_isr,                    // GPIO Port P1
	(uint32_t)&gpio_portP_P2_isr,                    // GPIO Port P2
	(uint32_t)&gpio_portP_P3_isr,                    // GPIO Port P3
	(uint32_t)&gpio_portP_P4_isr,                    // GPIO Port P4
	(uint32_t)&gpio_portP_P5_isr,                    // GPIO Port P5
	(uint32_t)&gpio_portP_P6_isr,                    // GPIO Port P6
	(uint32_t)&gpio_portP_P7_isr,                    // GPIO Port P7
	(uint32_t)&gpio_portQ_Q0_isr,                    // GPIO Port Q (Summary or Q0)
	(uint32_t)&gpio_portQ_Q1_isr,                    // GPIO Port Q1
	(uint32_t)&gpio_portQ_Q2_isr,                    // GPIO Port Q2
	(uint32_t)&gpio_portQ_Q3_isr,                    // GPIO Port Q3
	(uint32_t)&gpio_portQ_Q4_isr,                    // GPIO Port Q4
	(uint32_t)&gpio_portQ_Q5_isr,                    // GPIO Port Q5
	(uint32_t)&gpio_portQ_Q6_isr,                    // GPIO Port Q6
	(uint32_t)&gpio_portQ_Q7_isr,                    // GPIO Port Q7
	(uint32_t)&gpio_portR_isr,                       // GPIO Port R
	(uint32_t)&gpio_portS_isr,                       // GPIO Port S
	(uint32_t)&sha_md5_isr,                          // SHA/MD5 0
	(uint32_t)&aes0_isr,                             // AES 0
	(uint32_t)&des3des0_isr,                         // DES3DES 0
	(uint32_t)&lcd0_isr,                             // LCD Controller 0
	(uint32_t)&tim6_subA_isr,                        // Timer 6 subtimer A
	(uint32_t)&tim6_subB_isr,                        // Timer 6 subtimer B
	(uint32_t)&tim7_subA_isr,                        // Timer 7 subtimer A
	(uint32_t)&tim7_subB_isr,                        // Timer 7 subtimer B
	(uint32_t)&i2c6_isr,                             // I2C6 Master and Slave
	(uint32_t)&i2c7_isr,                             // I2C7 Master and Slave
	(uint32_t)&himkb0_isr,                         	 // HIM Scan Matrix Keyboard 0
	(uint32_t)&onewire0_isr,                         // One Wire 0
	(uint32_t)&himps0_isr,                           // HIM PS/2 0
	(uint32_t)&himled0_isr,                          // HIM LED Sequencer 0
	(uint32_t)&himir0_isr,                           // HIM Consumer IR 0
	(uint32_t)&i2c8_isr,                             // I2C8 Master and Slave
	(uint32_t)&i2c9_isr,                             // I2C9 Master and Slave
	(uint32_t)&gpio_portT_isr                        // GPIO Port T
};

void reset_handler()
{
	uint32_t* psrc = &_etext;	
	uint32_t* pdest = &_sdata;	
	
	while (pdest < &_edata) {
		*pdest = *psrc;
		++psrc; 
		++pdest;
	}
	
	
	pdest = &_sbss;		
	while (pdest < &_ebss)
	{
		*pdest = 0x0;
		++pdest;
	}

	// TODO initialize UART0 for IO	
	
	main();
}


void default_handler()
{
	while(1) {
		;
	}
}




