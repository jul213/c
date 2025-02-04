#include <esp_sleep.h>

//sueño ligero

void setup(){
    Serial.begin(115200);
    delay(650);
}

int conta = 0;
void loop(){
Serial.println(conta);
conta++
esp_sleep_enable_timer_wakeup(100000);
esp_light_sleep_start();
}