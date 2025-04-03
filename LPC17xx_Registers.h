#ifndef LPC17XX_REGISTERS_H
#define LPC17XX_REGISTERS_H

#include <stdint.h>

#define UART0_BASE    0x4000C000
#define UART1_BASE    0x40010000
#define UART2_BASE    0x40098000
#define UART3_BASE    0x4009C000

#define PCLKSEL0      (*((volatile uint32_t*) 0x400FC1A8))
#define PCONP         (*((volatile uint32_t*) 0x400FC0C4))

typedef struct {
    volatile uint32_t RBR;
    volatile uint32_t THR;
    volatile uint32_t DLL;
    volatile uint32_t DLM;
    volatile uint32_t IER;
    volatile uint32_t IIR;
    volatile uint32_t FCR;
    volatile uint32_t LCR;
    volatile uint32_t MCR;
    volatile uint32_t LSR;
} UART_TypeDef;

#define UART0   ((UART_TypeDef*) UART0_BASE)
#define UART1   ((UART_TypeDef*) UART1_BASE)
#define UART2   ((UART_TypeDef*) UART2_BASE)
#define UART3   ((UART_TypeDef*) UART3_BASE)

#endif // LPC17XX_REGISTERS_H
