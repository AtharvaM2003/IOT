const int piezoPin = 9;
const int knockPin = 2;
const int knockThreshold = 500;

void setup() {
  pinMode(piezoPin, OUTPUT);
  pinMode(knockPin, INPUT);
  digitalWrite(knockPin, HIGH);  // Enable pull-up resistor
}

void loop() {
  if (digitalRead(knockPin) == LOW) {
    playMelody();
    delay(2000);  // Delay to avoid repeated playing
  }
}

void playMelody() {
  tone(piezoPin, 1000, 500);  // Play a 1kHz tone for 500ms
  delay(500);  // Pause between tones
  noTone(piezoPin);
}