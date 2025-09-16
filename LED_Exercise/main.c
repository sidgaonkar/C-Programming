#include <stdio.h>
#include <stdint.h>

int main(void) {
    
    uint32_t *ptrCLKctrlreg = (uint32_t *)0x40023830; // RCC AHB1 peripheral clock enable register
    uint32_t *ptrPortDModeReg = (uint32_t *)0x40020C00; // GPIO port mode register
    uint32_t *ptrPortDOutReg = (uint32_t *)0x40020C14;  // GPIO port output data register

    //1. Enable clock access to GPIOD
    

    return 0;
}