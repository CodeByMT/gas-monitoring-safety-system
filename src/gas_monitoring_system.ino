/*
Gas Monitoring and Safety System

- Monitors gas concentration and ambient light
- Activates fan and buzzer when gas exceeds threshold
- Flashes LED only in low-light conditions

High-current devices are driven via an NPN transistor.
A flyback diode is used across the fan for protection.
*/

// Pin configuration
constexpr int GAS_PIN    = A0;
constexpr int LDR_PIN    = A1;
constexpr int LED_PIN    = 8;
constexpr int BUZZER_PIN = 9;
constexpr int FAN_PIN    = 10;

// Threshold configuration
constexpr int GAS_THRESHOLD  = 500;
constexpr int DARK_THRESHOLD = 500;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(FAN_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);
  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(FAN_PIN, LOW);

  Serial.begin(9600);
}

void loop() {
  int gasValue   = analogRead(GAS_PIN);
  int lightValue = analogRead(LDR_PIN);

  Serial.print("Gas: ");
  Serial.print(gasValue);
  Serial.print(" | Light: ");
  Serial.println(lightValue);

  if (gasValue > GAS_THRESHOLD) {
    digitalWrite(FAN_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);

    if (lightValue < DARK_THRESHOLD) {
      digitalWrite(LED_PIN, HIGH);
      delay(300);
      digitalWrite(LED_PIN, LOW);
      delay(300);
    } else {
      digitalWrite(LED_PIN, LOW);
    }
  } else {
    digitalWrite(FAN_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(LED_PIN, LOW);
  }
}
