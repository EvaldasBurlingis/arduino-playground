
const int LED = 13; 
const int BTN = 2; 

int btn_value = 0; 
int btn_old_value = 0;
int btn_click = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT);
}

void loop() {
  btn_value = digitalRead(BTN);

  if (btn_value == HIGH && (btn_old_value == LOW)) {
    btn_click++;
    delay(50); // delay to debounce
  }
  
  btn_old_value = btn_value;

  if (btn_click % 2 == 0) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }

}