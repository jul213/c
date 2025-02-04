

void setup(){
    Serial.begin(115200);
}

void loop(){
    float tempe = 0;
    tempe = temperatureRead();
    Serial.print("Temperatura: ");
    Serial.print(temperatura);
}