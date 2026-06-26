#define LEDPIN 2 

unsigned long previousTime = 0;
unsigned long blinkinterval = 500;
bool LEDState = LOW;

void setup() {
  Serial.begin(115200);
  pinMode(LEDPIN,OUTPUT);
  Serial.println("LED Blinking using millis");
}

void loop() {
  unsigned long currentTime = millis();
  unsigned long uptimeSec = millis()/1000;
  if(currentTime - previousTime >= blinkinterval){
    previousTime = currentTime;
    LEDState = !LEDState;
    Serial.println("---------------------");
    Serial.print("Uptime: ");
    Serial.print(uptimeSec);
    Serial.println(" sec");
    Serial.print("LED STATE: ");
    if(LEDState == HIGH){
      digitalWrite(LEDPIN,HIGH);
      Serial.println("ON");
    }
    else{
      digitalWrite(LEDPIN,LOW);
      Serial.println("OFF");
    }
    Serial.print("Blink Interval: ");
    Serial.print(blinkinterval);
    Serial.println(" ms");
    Serial.println("---------------------");
  }  
}
