
int ldrPin = A0;      // LDR connected to analog pin A0
int buzzer = 8;       // Buzzer pin
int led1 = 6;         // First LED
int led2 = 5;         // Second LED

int threshold = 500;  // Light level threshold (adjust if needed)

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  
  Serial.begin(9600); // For debugging
}

void loop() {
  int ldrValue = analogRead(ldrPin); // Read light value
  Serial.println(ldrValue);

  if (ldrValue < threshold) {
    // DARK condition
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(buzzer, HIGH);
  } 
  else {
    // LIGHT condition
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(buzzer, LOW);
  }

  delay(200);
}
