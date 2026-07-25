// MCP9701A Temperature Measurement

const int sensorPin = A0;   // Аналоговият пин, към който е свързан сензорът

void setup() {
  Serial.begin(115200);
  Serial.println("MCP9701A Temperature Measurement");
}

void loop() {
  // Прочитане на аналоговата стойност
  int sensorValue = analogRead(sensorPin);

  // Преобразуване в напрежение (за Arduino Uno - 5V)
  float voltage = sensorValue * (5.0 / 1023.0);

  // Изчисляване на температурата
  // MCP9701A: 400 mV при 0°C и 19.5 mV/°C
  float temperature = (voltage - 0.4) / 0.0195;

  Serial.print("Voltage: ");
  Serial.print(voltage, 3);
  Serial.print(" V");

  Serial.print("   Temperature: ");
  Serial.print(temperature, 2);
  Serial.println(" °C");

  delay(1000);
}