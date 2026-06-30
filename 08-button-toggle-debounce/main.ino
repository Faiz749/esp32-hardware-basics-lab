#define LED_PIN 2 
#define Button_PIN 4 

bool LEDStatus = LOW;
bool previousButtonState = HIGH;
unsigned long pressCount = 0;
unsigned long LastButtonTime = 0;
unsigned long debounceTime = 200;

void setup() {
  Serial.begin(115200);
  pinMode(Button_PIN,INPUT_PULLUP);
  pinMode(LED_PIN,OUTPUT);
  Serial.println("Button Toggle with Debounce Started");
}

void loop() {
  unsigned long currentButtonTime = millis();
  bool ButtonState = digitalRead(Button_PIN);
  if(previousButtonState == HIGH && ButtonState == LOW){
    if(currentButtonTime-LastButtonTime>= debounceTime){
      LastButtonTime = currentButtonTime;
      LEDStatus = !LEDStatus;
      digitalWrite(LED_PIN,LEDStatus);
      Serial.println("---------------------");
      Serial.println("Button Press Detected");
      pressCount ++;
      Serial.print("LED STATUS: ");
      if(LEDStatus == HIGH){
        Serial.println("ON");
      }
      else{
        Serial.println("OFF");
      }
      Serial.print("Press Count: ");
      Serial.println(pressCount);
      Serial.println("---------------------");
    }
  }
  previousButtonState = ButtonState;
}
