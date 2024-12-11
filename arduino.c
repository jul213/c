
int led1 = 1;

int led2 = 2;

void setup(){

    pinmode(led1, OUTPUT);

    pinmode(led2, OUTPUT);

}

void loop(){

    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
}