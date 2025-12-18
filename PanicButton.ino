const int buttonPin = 7;
const int ledPin = 9;
const int buzzerPin = 8;
bool isBlinking = false;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Set the button pin as input with internal pull-up resistor
  pinMode(ledPin, OUTPUT); // Set the LED pin as output
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  if (digitalRead(buttonPin) == LOW) { // Check if the button is pressed
    isBlinking = !isBlinking; // Toggle the blinking state
    Serial.println("ButtonPressed"); // Send "ButtonPressed" signal to the PC
    while (digitalRead(buttonPin) == LOW) {} // Wait for button release
  }

  if (isBlinking) {
    bip5();
    isBlinking = !isBlinking;
  } else {
    digitalWrite(ledPin, LOW); // Turn off the LED if not blinking
  }
}

void bip(){
  tone(buzzerPin, 1200);   // frequency in Hz
  delay(60);               // duration in ms
  noTone(buzzerPin);
}

void bip2(){
  tone(buzzerPin, 900);
  delay(150);
  tone(buzzerPin, 1200);
  delay(150);
  noTone(buzzerPin);

}

void bip3(){
  analogWrite(buzzerPin, 500);   // frequency in Hz
  delay(100);               // duration in ms
  analogWrite(buzzerPin, 0);
}

void bip4(){
  for (int i = 0; i < 8; i++) {
  tone(buzzerPin, 1100);
  digitalWrite(ledPin, HIGH); // Turn on the LED
  delay(100);
  noTone(buzzerPin);
  digitalWrite(ledPin, LOW); // Turn off the LED
  delay(100);
}
}

void bip5(){
  for (int i = 0; i < 6; i++) {
    tone(buzzerPin, 5000);   // mid-low radio beep
    digitalWrite(ledPin, HIGH); // Turn on the LED
    delay(80);
    tone(buzzerPin, 1200);   // mid-low radio beep
    delay(60);
    noTone(buzzerPin);
    digitalWrite(ledPin, LOW); // Turn off the LED
    delay(120);
  }
  delay(500);
  for (int i = 0; i < 6; i++) {
    tone(buzzerPin, 5000);   // mid-low radio beep
    digitalWrite(ledPin, HIGH); // Turn on the LED
    delay(80);
    tone(buzzerPin, 1200);   // mid-low radio beep
    delay(60);
    noTone(buzzerPin);
    digitalWrite(ledPin, LOW); // Turn off the LED
    delay(120);
}
}
