#include <U8g2lib.h>
#include <Wire.h>
#include <Servo.h>

#define SCL 12
#define SDA 14
#define SERVO_PIN 5

U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, 12, 14, U8X8_PIN_NONE);
Servo myServo;

void setup()
{
  u8g2.begin();
  u8g2.enableUTF8Print();
  myServo.attach(SERVO_PIN);
}

void loop() {
  u8g2.clearBuffer();                    // Clear the internal memory
  u8g2.setFont(u8g2_font_ncenB08_tr);   // Choose a font
  u8g2.drawStr(0, 10, "Hola julio cesar gomez!");   // Write the string to the internal memory
  u8g2.sendBuffer();                     // Transfer internal memory to the display

  for (int i=0; i <= 180; i++){
    myServo.write(i);
    delay(15);
  }
  delay(1000);                          // Pause for a second

  for (int i = 180; i>= 0; i--){
    myServo.write(i);
    delay(15);
  }
  delay(1000);
}