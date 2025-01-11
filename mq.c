int valor;

void setup () {
    Serial.begin(9600);
    // entrada analogica no requiere inicializacion
}

void loop () {
    VALOR = analogRead(A0);
    Serial.println(VALOR);
    delay(500);
}