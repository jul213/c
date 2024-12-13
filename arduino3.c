
#include <LiquidCrystal.h>

int pinPulsador = 3;



const rs=13, en=12, d4=11, d3=10, d2=9, d1=8;
LiquidCrystal lcd(rs, en, d4, d3, d2, d1);

void setup(){

    pinmode(pinPulsador, INPUT);

    lcd.begin(15,3);
}

void loop(){

    int state = digitalRead(pinPulsador);

    lcd.setCursor(0,0);
    
    if (state == HIGH){
        lcd.print("boton pulsado");
    } 
    else {
        lcd.print("no pulsado");
    }

    delay(10);
}

