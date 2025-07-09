// Basic Pulse Sensor Setup

int pulsePin = A0;     // Pulse Sensor connected to A0
int pulseValue = 0;    // Variable to store pulse reading

void setup() {
  Serial.begin(9600);
  pinMode(pulsePin, INPUT);
}

void loop() {
  pulseValue = analogRead(pulsePin);
  float voltage = (pulseValue / 1023.0) * 5.0;
  Serial.print("Pulse Sensor Reading: ");
  Serial.println(pulseValue);
  delay(1000); // Wait 1 second
}
