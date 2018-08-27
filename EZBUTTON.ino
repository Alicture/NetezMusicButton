
const int buttonPin = 2;int buttonState = 0;int prevButtonState = HIGH;
long lastDebounceTime = 0;
bool flag=true;
long debounceDelay = 50;
void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  digitalWrite(buttonPin, HIGH);
  Serial.begin(9600);
//  Keyboard.begin();
}

void loop() {
  buttonState = digitalRead(buttonPin);
//  delay(2000);
  if ((flag==true)&&(buttonState != prevButtonState) && (buttonState == HIGH)) {
    // Here starts the output action
//    Keyboard.press(KEY_LEFT_GUI); // Command key in Mac, use KEY_LEFT_CTRL for Pc
//    Keyboard.press('v');
    Serial.println("1");
    
    flag=false;
    }
//    Keyboard.releaseAll(); // This is important after every Keyboard.press it will continue to be pressed
  else if((buttonState == prevButtonState) && (buttonState != HIGH)&&(flag==false)){
    Serial.println("0");
//    Serial.println(buttonState);
//    Serial.println(prevButtonState);
//    delay(1000);
    flag=true;
    delay(100);
  }
  prevButtonState = buttonState;
}
