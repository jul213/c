#include <U8g2lib.h>
#include <Wire.h>

#define SCL 12
#define SDA 14

U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, SCL, SDA, U8X8_PIN_NONE);

int x;
int a;
const char* mensaje = "julio cesar gomez";
const char* mensaje2 = "cesar augusto gomez";

unsigned long previousMillis = 0;
const unsigned long interval = 1;  // Intervalo en milisegundos para mover el texto

void setup() {
  u8g2.begin();
  u8g2.setFont(u8g2_font_ncenB08_tr); 
  x = 128;
  a = -u8g2.getStrWidth(mensaje2);
}

void loop() {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    // Actualizar posiciones
    x -= 1;
    a += 1;
    if (x < -u8g2.getStrWidth(mensaje)){
      x = 128;
    }
    if (a > 128){
      a = -u8g2.getStrWidth(mensaje2);
    }

    // Dibujar
    u8g2.clearBuffer();                  // Limpia el buffer interno
    u8g2.setFont(u8g2_font_ncenB08_tr);
    int y = u8g2.getAscent();
    u8g2.drawStr(x, y, mensaje);
    u8g2.drawStr(a, 35, mensaje2);
    u8g2.sendBuffer();                  // Enviar buffer a la pantalla
  }
  // Aquí no hay delay para maximizar velocidad de loop
}