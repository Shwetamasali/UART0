#include "uart.h"

int main() {
    UART_Config_t uartConfig = {9600, 8, 1, 'N'};
    char receivedChar;
    int i;  // Declare loop variable outside

    // Initialize UART1
    UART_Init(1, &uartConfig);

    while (1) {
        // Send a test message repeatedly
        UART_SendString(1, "Hello Uart!\n");

        // Delay loop
        for (i = 0; i < 40; i++);  

        // Optional: Receive and echo any incoming character
        if (UART_IsReceiveReady(1)) {  
            receivedChar = UART_ReceiveChar(1);  
            UART_SendChar(1, receivedChar);  
        }
    }
}
