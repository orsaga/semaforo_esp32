// Semáforo con ESP32
// Rojo: 5 segundos
// Verde: 3 segundos
// Amarillo: 2 segundos

int ledRojo = 25;
int ledAmarillo = 26;
int ledVerde = 27;

void setup() {
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  // Rojo encendido
  digitalWrite(ledRojo, HIGH);
  digitalWrite(ledAmarillo, LOW);
  digitalWrite(ledVerde, LOW);
  delay(5000); // 5 segundos

  // Verde encendido
  digitalWrite(ledRojo, LOW);
  digitalWrite(ledAmarillo, LOW);
  digitalWrite(ledVerde, HIGH);
  delay(3000); // 3 segundos

  // Amarillo encendido
  digitalWrite(ledRojo, LOW);
  digitalWrite(ledAmarillo, HIGH);
  digitalWrite(ledVerde, LOW);
  delay(2000); // 2 segundos
}