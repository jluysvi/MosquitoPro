#include "utils.h"

/*
===============
DIGITAL OUTPUTS
===============
PC7	OIL PRESSURE
PC6	VOLTAGE
PC5 WATER LEVEL
PC4	ETL3
PC3 ETL2
PB4 ETL1
PB5 BUZZER
PA1 CUTOUT
=============
ANALOG INPUTS
=============
PD3 AIN4 OIL PRESSURE
PD2 AIN3 VOLTAGE
===
PWM
===
TIM2_CH1 PD4 WATER LEVEL PULSE
==============
DIGITAL INPUTS
==============
PD5 WATER LEVEL
PA2 SWITCH2
PA3 SWITCH1
*/

void pinSetup()
{
    setOutput(PC, 7);
    setOutput(PC, 6);
    setOutput(PC, 5);
    setOutput(PC, 4);
    setOutput(PC, 3);
    setOutput(PB, 4);
    setOutput(PB, 5);
    setOutput(PA, 1);
}


void setOutput(int port, int pin)
{
    switch(port)
    {
        case PA:
            *PA_DDR |= (1 << pin);
            *PA_CR1 |= (1 << pin);
            *PA_CR2 &= ~(1 << pin);
            break;
        case PB:
            *PB_DDR |= (1 << pin);
            *PB_CR1 |= (1 << pin);
            *PB_CR2 &= ~(1 << pin);
            break;
        case PC:
            *PC_DDR |= (1 << pin);
            *PC_CR1 |= (1 << pin);
            *PC_CR2 &= ~(1 << pin);
            break;
        case PD:
            *PD_DDR |= (1 << pin);
            *PD_CR1 |= (1 << pin);
            *PD_CR2 &= ~(1 << pin);
            break;
    }
}

void setPWM(int port, int pin)
{
    switch(port)
    {
        case PA:
            *PA_DDR |= (1 << pin);
            *PA_CR1 |= (1 << pin);
            *PA_CR2 |= (1 << pin);
            break;
        case PB:
            *PB_DDR |= (1 << pin);
            *PB_CR1 |= (1 << pin);
            *PB_CR2 |= (1 << pin);
            break;
        case PC:
            *PC_DDR |= (1 << pin);
            *PC_CR1 |= (1 << pin);
            *PC_CR2 |= (1 << pin);
            break;
        case PD:
            *PD_DDR |= (1 << pin);
            *PD_CR1 |= (1 << pin);
            *PD_CR2 |= (1 << pin);
            break;
    }
}

void setInput(int port, int pin)
{
    switch(port)
    {
        case PA:
            *PA_DDR &= ~(1 << pin);
            *PA_CR1 &= ~(1 << pin);
            *PA_CR2 &= ~(1 << pin);
            break;
        case PB:
            *PB_DDR &= ~(1 << pin);
            *PB_CR1 &= ~(1 << pin);
            *PB_CR2 &= ~(1 << pin);
            break;
        case PC:
            *PC_DDR &= ~(1 << pin);
            *PC_CR1 &= ~(1 << pin);
            *PC_CR2 &= ~(1 << pin);
            break;
        case PD:
            *PD_DDR &= ~(1 << pin);
            *PD_CR1 &= ~(1 << pin);
            *PD_CR2 &= ~(1 << pin);
            break;
    }
}   