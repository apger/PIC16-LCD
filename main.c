
#define RS RC0
#define EN RC1
#define D4 RC2
#define D5 RC3
#define D6 RC4
#define D7 RC5

#include "mcc_generated_files/mcc.h"
#include "lcd.h";
#include<stdio.h>

void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    Lcd_Init();
     while (1)
    {
        unsigned int a;
        char buffer[20];
        int j=ADC_GetConversion(POT);  //values between 438-835 0-1024=0-5v
        float v=j*1.94/396-.035;   //voltage seen at pot and at lcd
        //printf("\n\rADC Value is:  %i",ADC_GetConversion(POT));
        Lcd_Clear();
        Lcd_Set_Cursor(1,1);
        Lcd_Write_String("Hello Sydney");
        Lcd_Set_Cursor(2,1);
        Lcd_Write_String("You Are The Best");
        __delay_ms(2000);
        Lcd_Clear();
        Lcd_Set_Cursor(1,1);
        Lcd_Write_String("Developed By");
        Lcd_Set_Cursor(2,1);
        Lcd_Write_String("Jim Apger");
        __delay_ms(2000);
        Lcd_Clear();
        Lcd_Set_Cursor(1,3);
        Lcd_Write_String("MayhemBadges");
         __delay_ms(1000);

        for(a=0;a<15;a++)
        {
            __delay_ms(200);
            Lcd_Shift_Left();
        }

        for(a=0;a<15;a++)
        {
            __delay_ms(200);
            Lcd_Shift_Right();
        }
         __delay_ms(2000);

        Lcd_Clear();
        Lcd_Set_Cursor(2,1);
        sprintf(buffer, "V0: %2.5f", v);
        Lcd_Write_String(buffer);
        //Lcd_Set_Cursor(2,1);
        //Lcd_Write_Char('e');
        //Lcd_Write_Char('S');
        __delay_ms(5000);
    }  
}
/**
 End of File
*/