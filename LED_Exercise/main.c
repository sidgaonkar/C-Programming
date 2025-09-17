#include <stdio.h>
#include <stdint.h>

int main(void) {
    
    uint32_t *ptrCLKctrlreg = (uint32_t *)0x40023830; // RCC AHB1 peripheral clock enable register
    uint32_t *ptrPortDModeReg = (uint32_t *)0x40020C00; // GPIO port mode register
    uint32_t *ptrPortDOutReg = (uint32_t *)0x40020C14;  // GPIO port output data register

    //1. Enable clock access to GPIOD
    *ptrCLKctrlreg |= (1 << 3); // Set the 3rd bit to enable clock for GPIOD
    //clear the 24th and 25th bits
    *ptrPortDModeReg &= 0xFCFFFFFF;
    //make 24th bit position as 1
    *ptrPortDModeReg |= 0x01000000;
    //set 12th bit position to 1
    *ptrPortDOutReg |= 0x00001000;

    //modifying using shift operator
    *ptrCLKctrlreg |=(1<<3);
    *ptrPortDModeReg &=~(3<<24);
    *ptrPortDModeReg |=(1<<24);
    *ptrPortDOutReg |=(1<<12);




    return 0;
}