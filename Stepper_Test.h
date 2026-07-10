// Define Arduino Nano pin connections
const int stepPin = 2; //step connection, CONFIRM
const int dirPin = 3;  //dir connection, CONFIRM

void setup() {
  // Set the two control pins as Outputs
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
}

void loop() {
  // --- 1. SPIN CLOCKWISE ---
  digitalWrite(dirPin, HIGH); // Set direction clockwise
  
  // Spin 200 steps (One full revolution if using Full-Step mode)
  for(int x = 0; x < 200; x++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(1000);    // Controls the speed (lower = faster)
    digitalWrite(stepPin, LOW);
    delayMicroseconds(1000);    // Controls the speed
  }
  
  delay(1000); // Pause for 1 second before switching directions

  // --- 2. SPIN COUNTER-CLOCKWISE ---
  digitalWrite(dirPin, LOW); // Set direction counter-clockwise
  
  // Spin 200 steps back
  for(int x = 0; x < 200; x++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(1000);
  }
  
  delay(1000); // Pause for 1 second before looping again
}
