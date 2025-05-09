#define pot 29
#define led 30

int valorPot = 0;

void setup(){
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop(){
    valorPot = analogRead(pot);
    Serial.print("valor del potenciometro");
    Serial.println(valorPot);
    digitalWrite(led, HIGH);
    delay(valorPot);
}