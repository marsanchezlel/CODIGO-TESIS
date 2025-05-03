#include <WiFi.h>

const char* ssid = "iPhone";         // Red WiFi correcta
const char* password = "12569San";         // Contraseña WiFi correcta

void setup() {
  Serial.begin(115200);
  delay(100);

  WiFi.begin(ssid, password);
  Serial.println("Conectando al WiFi...");

  int attempts = 0;
  while (WiFi.status() != WL_CONNECTED && attempts < 10) {
    delay(500);
    Serial.print(".");
    attempts++;
  }

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("");
    Serial.println("¡Conectado al WiFi!");
    Serial.print("Dirección IP local: ");
    Serial.println(WiFi.localIP());
  } else {
    Serial.println("No se pudo conectar al WiFi.");
  }
}

void loop() {
  // No se necesita hacer nada en el loop
}
