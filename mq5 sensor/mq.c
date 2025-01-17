int VALOR;
int BUZZER = 2;
void setup () {
    Serial.begin(9600);
    // entrada analogica no requiere inicializacion
}

void loop () {
    VALOR = analogRead(A0);
    if (VALOR > 400)
    digitalWrite(BUZZER, HIGH);
    else
    digitalWrite(BUZZER, LOW);
    Serial.println(VALOR);
    delay(500);
}