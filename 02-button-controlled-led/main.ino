#define BUTTON_PIN 4
#define LED_PIN 2
void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN,OUTPUT);
  pinMode(BUTTON_PIN,INPUT_PULLUP);
  Serial.println("Button test started");

}

void loop() {
  int buttonstatus = digitalRead(BUTTON_PIN);
  if(buttonstatus == LOW){
    Serial.println("Button Pressed-----LED TURNED ON");
    digitalWrite(LED_PIN,HIGH);
  }
  else{
    Serial.println("Button Removed-----LED TURNED OFF");
    digitalWrite(LED_PIN,LOW);
  }
  delay(200);
}
