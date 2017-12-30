# PIC16-LCD
interfacing PIC16F15325 to an LCD

LCD - C1602A - v1.2
https://www.openhacks.com/uploadsproductos/eone-1602a1.pdf

PINOUTS Match PIC example (https://electrosome.com/lcd-pic-mplab-xc8/#LCD_Library)

Good high-level walkthrough:  https://tutorial.cytron.io/2012/02/04/lcd-interfacing-with-pic-microcontrollers-part-1/amp/

PIC	LCD
-----------
1	
2
3
4
5	9
6	8
7	7
8	6
9	5
10	4
11
12
13
14

100 Ohm Resistor to +LED pin on LED
V0 = .69V on LCD (Too High originally and could net see letters/contrast)
