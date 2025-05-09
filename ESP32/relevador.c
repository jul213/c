#define LDR 29
#define RLY 30

int valorLDR = 0;

void setup(){
    Serial.begin(9600);
    pinMode(RLY, OUTPUT);
}

