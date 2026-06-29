#define LED_PIN 2 
#define POT_PIN 34

void show_Reading(int adcValue,int pwmValue,int brightness){
  Serial.println("---------------------");
  Serial.print("ADC: ");
  Serial.println(adcValue);
  Serial.print("PWM: ");
  Serial.println(pwmValue);
  Serial.print("Brightness: ");
  Serial.print(brightness);
  Serial.println("%");
  Serial.println("---------------------");
}

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN,OUTPUT);
  pinMode(POT_PIN,INPUT);
  Serial.println("PWM LED Brightness Control System Started");
}

void loop() {
  int adcValue = analogRead(POT_PIN);
  int pwmValue = map(adcValue,0,4095,0,255);
  int brightness = map(pwmValue,0,255,0,100);
  analogWrite(LED_PIN,pwmValue);
  show_Reading(adcValue,pwmValue,brightness);
  delay(500);
}
 