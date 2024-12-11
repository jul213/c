

int led1 = 1;

int led2 = 2;

int pulsador = 3;

void setup(){

    pinmode(led1, OUTPUT);
    pinmode(led2, OUTPUT);
    pinmode(pulsador, INPUT);
}

void loop(){

    int state = digitalread(pulsador);

    if (state ==HIGH){
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
    }
}