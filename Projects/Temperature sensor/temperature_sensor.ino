const int sensor = A5;
const int RED = 8;
const int BLUE = 7;

float celsius; //variable to store temperature in degree Celsius
float vOut; //temporary variable to hold sensor reading

void setup() {
  pinMode(sensor,INPUT);
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  vOut = analogRead(sensor); //Reading the value from sensor
  vOut= (vOut*500)/1023; // convert mV/°C to celcius

  celsius= vOut;


  Serial.print("Temperature :");
  Serial.print("\t");
  Serial.print(celsius);
  Serial.println();

  // if temperature drops below 10 °C light up blue light
  // otherwise red light is on
  if (celsius > 10){
    digitalWrite(RED, HIGH);
    digitalWrite(BLUE, LOW);
  } else {
    digitalWrite(RED, LOW);
    digitalWrite(BLUE, HIGH);
  }


  delay(1000);
}