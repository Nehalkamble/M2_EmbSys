#include "doorLock.h"
#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>
#include <string.h>

void LCD_String(char *str);
void LCD_Init(void);
extern int ro1(void);
extern int ro2(void);
extern int ro3(void);
void unlock(void);
void lock(void);
int main()
{
     DDRB = 0x12;
    DDRC = 0x48;     
    PORTB &= 0xf3;
    PORTC &= 0xef;
    lock();
A1:
    count = 0;
    int password[] = {1, 2, 3, 4};
    LCD_Clear();
    LCD_Init();
    int flag = 0;
    LCD_String("H");
    _delay_ms(200);
    LCD_String("e");
    _delay_ms(200);
    LCD_String("l");
    _delay_ms(200);
    LCD_String("l");
    _delay_ms(200);
    LCD_String("o");
    _delay_ms(200);
    LCD_String(".");
    _delay_ms(200);
    LCD_String(".");
    _delay_ms(200);
    LCD_String(".");
    _delay_ms(1000);
A2:
    LCD_Clear();
    LCD_String("E");
    _delay_ms(200);
    LCD_String("n");
    _delay_ms(200);
    LCD_String("t");
    _delay_ms(200);
    LCD_String("e");
    _delay_ms(200);
    LCD_String("r");
    _delay_ms(200);
    LCD_String(" ");
    _delay_ms(200);
    LCD_String("P");
    _delay_ms(200);
    LCD_String("a");
    _delay_ms(200);
    LCD_String("s");
    _delay_ms(200);
    LCD_String("s");
    _delay_ms(200);
    LCD_String("w");
    _delay_ms(200);
    LCD_String("o");
    _delay_ms(200);
    LCD_String("r");
    _delay_ms(200);
    LCD_String("d");
    _delay_ms(2000);
    LCD_Clear();
    DDRC = 0x00;
    DDRD = 0xff;
    
    while (1)
    {
        if (count == 4)
        {
            if (memcmp(pass, password, sizeof(pass)) == 0)
            {
                LCD_Clear();
                LCD_String("WELCOME");
                unlock();
                count = 0;
                _delay_ms(3000);
                LCD_Clear();
                goto A1;
            }
            else
            {
                LCD_Clear();
                LCD_String("wrong password");
                lock();
                count = 0;
                _delay_ms(3000);
                goto A2;
            }
        }
        ro1();
        _delay_ms(10);
        ro2();
        _delay_ms(10);
        ro3();
        _delay_ms(10);
    }
}

void lock(){
    PORTB = BLUE;    
    _delay_ms(DELAY);
    PORTB &= 0xfb;
    _delay_ms(DELAY);
}
void unlock(){
    PORTC = RED;    
    _delay_ms(DELAY); 
    PORTC &= 0xEF;  
    _delay_ms(DELAY); 

}