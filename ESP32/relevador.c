#define LDR 29
#define RLY 30

int valorLDR = 0;

void setup(){
    Serial.begin(9600);
    pinMode(RLY, OUTPUT);
}

void loop(){
    valorLDR = analogRead(LDR);
    Serial.println(valorLDR);
    if (valorLDR < 95){
        digitalWrite(RLY, HIGH);
    } else {
        digitalWrite(RLY, LOW);
        delay(500);
    }
}

