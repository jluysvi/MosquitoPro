#ifndef UTILS_H
#define UTILS_H
//This library is a simple utility libary for the STM8S003F3 microcontroller
//Some useful definitions for the program
#define PA 0
#define PB 1
#define PC 2
#define PD 3
//PORT A
volatile int* PA_ODR = 0x5000;
volatile int* PA_IDR = 0x5001;
volatile int* PA_DDR = 0x5002;
volatile int* PA_CR1 = 0x5003;
volatile int* PA_CR2 = 0x5004;
//PORT B
volatile int* PB_ODR = 0x5005;
volatile int* PB_IDR = 0x5006;
volatile int* PB_DDR = 0x5007;
volatile int* PB_CR1 = 0x5008;
volatile int* PB_CR2 = 0x5009;
//PORT C
volatile int* PC_ODR = 0x500A;
volatile int* PC_IDR = 0x500B;
volatile int* PC_DDR = 0x500C;
volatile int* PC_CR1 = 0x500D;
volatile int* PC_CR2 = 0x500E;
//PORT D
volatile int* PD_ODR = 0x500F;
volatile int* PD_IDR = 0x5010;
volatile int* PD_DDR = 0x5011;
volatile int* PD_CR1 = 0x5012;
volatile int* PD_CR2 = 0x5013;
//ADC
volatile int* ADC_CSR = 0x5400;
volatile int* ADC_CR1 = 0x5401;
volatile int* ADC_CR2 = 0x5402;
volatile int* ADC_CR3 = 0x5403;
volatile int* ADC_DRH = 0x5404;
volatile int* ADC_DRL = 0x5405;
volatile int* ADC_TDRH = 0x5406;
volatile int* ADC_TDRL = 0x5407;
volatile int* ADC_HTRH = 0x5408;
volatile int* ADC_HTRL = 0x5409;
volatile int* ADC_LTRH = 0x540A;
volatile int* ADC_LTRL = 0x540B;
volatile int* ADC_AWSRH = 0x540C;
volatile int* ADC_AWSRL = 0x540D;
volatile int* ADC_AWCRH = 0x540E;
volatile int* ADC_AWCRL = 0x540F;
//TIM1
volatile int* TIM1_CR1 = 0x5250;
volatile int* TIM1_CR2 = 0x5251;
volatile int* TIM1_SMCR = 0x5252;
volatile int* TIM1_ETR = 0x5253;
volatile int* TIM1_IER = 0x5254;
volatile int* TIM1_SR1 = 0x5255;
volatile int* TIM1_SR2 = 0x5256;
volatile int* TIM1_EGR = 0x5257;
volatile int* TIM1_CCMR1 = 0x5258;
volatile int* TIM1_CCMR2 = 0x5259;
volatile int* TIM1_CCMR3 = 0x525A;
volatile int* TIM1_CCMR4 = 0x525B;
volatile int* TIM1_CCER1 = 0x525C;
volatile int* TIM1_CCER2 = 0x525D;
volatile int* TIM1_CNTRH = 0x525E;
volatile int* TIM1_CNTRL = 0x525F;
volatile int* TIM1_PSCRH = 0x5260;
volatile int* TIM1_PSCRL = 0x5261;
volatile int* TIM1_ARRH = 0x5262;
volatile int* TIM1_ARRL = 0x5263;
volatile int* TIM1_RCR = 0x5264;
volatile int* TIM1_CCR1H = 0x5265;
volatile int* TIM1_CCR1L = 0x5266;
volatile int* TIM1_CCR2H = 0x5267;
volatile int* TIM1_CCR2L = 0x5268;
volatile int* TIM1_CCR3H = 0x5269;
volatile int* TIM1_CCR3L = 0x526A;
volatile int* TIM1_CCR4H = 0x526B;
volatile int* TIM1_CCR4L = 0x526C;
volatile int* TIM1_BKR = 0x526D;
volatile int* TIM1_DTR = 0x526E;
volatile int* TIM1_OISR = 0x526F;

void pinsConfig();

#endif