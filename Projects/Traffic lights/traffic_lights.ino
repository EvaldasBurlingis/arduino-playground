
const int GRN = 13; // Green light connected to pin 13
const int YLW = 12; // Yellow light connected to pin 12
const int RED = 11; // Red light connected to pin 12

void setup() {
  // Setting all pins as outputs
  pinMode(GRN, OUTPUT);
  pinMode(YLW, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop() {
  GreenLightOn();
  YellowLightOn();
  RedLightOn();
}

void GreenLightOn() {
  digitalWrite(GRN, HIGH);
  digitalWrite(YLW, LOW);  
  digitalWrite(RED, LOW);
  delay(5000);

  // Blinking 5s
  for(int i = 0; i < 5; i++) {
    digitalWrite(GRN, HIGH);
    delay(500);
    digitalWrite(GRN, LOW);
    delay(500);
  }
}

void RedLightOn() {
  digitalWrite(GRN, LOW);
  digitalWrite(YLW, LOW);  
  digitalWrite(RED, HIGH); 
  delay(5000);
  digitalWrite(YLW, HIGH);
  delay(2000);
  
}

void YellowLightOn() {
  digitalWrite(GRN, LOW); 
  digitalWrite(RED, LOW);
  digitalWrite(YLW, HIGH);
  delay(3000);
}