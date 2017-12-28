
//#define _XTAL_FREQ 8000000

#define RS RC0
#define EN RC1
#define D4 RC2
#define D5 RC3
#define D6 RC4
#define D7 RC5

#include "mcc_generated_files/mcc.h"
#include "lcd.h";

// BEGIN CONFIG
//#pragma config FOSC = HS // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF // Power-up Timer Enable bit (PWRT disabled)
//#pragma config BOREN = ON // Brown-out Reset Enable bit (BOR enabled)
//#pragma config LVP = OFF // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
//#pragma config CPD = OFF // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
//#pragma config WRT = OFF // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
//#pragma config CP = OFF // Flash Program Memory Code Protection bit (Code protection off)
//END CONFIG

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    Lcd_Init();
     while (1)
    {
        int j=ADC_GetConversion(POT);  //values between 438-835 0-1024=0-5v
        float v=j*1.94/396-.035;   //voltage seen at pot and at lcd
        //printf("\n\rADC Value is:  %i",ADC_GetConversion(POT));
        Lcd_Clear();
        Lcd_Set_Cursor(1,1);
        Lcd_Write_String("LCD Library for");
    }  
}
/**
 End of File
*/