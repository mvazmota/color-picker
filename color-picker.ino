int btnPin = 6;
int bluePin = 3;
int greenPin = 4;
int redPin = 5;
int ldrPin = 0;

void setup() {
  Serial.begin(9600);
  pinMode(btnPin, INPUT_PULLUP);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  int value=digitalRead(btnPin);
  
  if (value == 0) {
    digitalWrite(redPin, HIGH);
    Serial.print("The red is: ");
    Serial.println(analogRead(ldrPin));
    int red = map(analogRead(ldrPin),0,97,0,255);
    Serial.print("The MAP red is: ");
    Serial.println(red);
    delay(1000);
    digitalWrite(redPin, LOW);
    
    digitalWrite(greenPin, HIGH);
    Serial.print("The green is: ");
    Serial.println(analogRead(ldrPin));
    //int green = map(analogRead(ldrPin),0,97,0,255);
    //Serial.print("The MAP green is: ");
    //Serial.println(green);
    delay(1000);
    digitalWrite(greenPin, LOW);
    
    digitalWrite(bluePin, HIGH);
    Serial.print("The blue is: ");
    Serial.println(analogRead(ldrPin));
    //int blue = map(analogRead(ldrPin),0,97,0,255);
    //Serial.print("The MAP blue is: ");
    //Serial.println(blue);
    delay(1000);
    digitalWrite(bluePin, LOW);
  }
}



