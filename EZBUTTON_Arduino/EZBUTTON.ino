
const int buttonPin = 2;int buttonState = 0;int prevButtonState = HIGH;
long lastDebounceTime = 0;
bool flag=true;
long debounceDelay = 50;
void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  digitalWrite(buttonPin, HIGH);
  Serial.begin(9600);
}
void loop() {
  buttonState = digitalRead(buttonPin);
  if ((flag==true)&&(buttonState != prevButtonState) && (buttonState == HIGH)) {
    Serial.println("1");
    flag=false;
    }
  else if((buttonState == prevButtonState) && (buttonState != HIGH)&&(flag==false)){
    Serial.println("0");
    flag=true;
    delay(100);
  }
  prevButtonState = buttonState;
}
