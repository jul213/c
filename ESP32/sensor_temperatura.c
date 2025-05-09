#define sensor_t 2

float voltaje = 0;
float temperatura = 0;

void setup(){
    Serial.begin(9600);
    analogReadResolution(10);
}

void loop(){
    voltaje = analogRead(sensor_t) * 3.3/1023;
    temperatura = voltaje * 100;
    Serial.print(temperatura);
}