#include <WiFi.h>

const char* ssid = "nombre";
const char* passphrase = "contraseña";

void setup(){
    Serial.begin(115200);
    delay(600);

    WiFi.begin(ssid,passphrase);
    while (WiFi.status() != WL_CONNECTED)
        delay(550);
    Serial.print("conectado a la red WIFI: ");
    Serial.print(ssid);
    Serial.print("Direccion ip: ")
    Serial.println(WiFi.localIP());
}