#define POT_PIN 34
#define Buzzer_PIN 5

void SensorStatus(int SensorValue){
  if(SensorValue<=40){
    Serial.println("NORMAL");
  }
  else if(SensorValue<=70){
    Serial.println("WARNING");
  }
  else{
    Serial.println("DANGER");
  }
  Serial.print("Buzzer: ");
  if(SensorValue <= 70){
    Serial.println("OFF");
    digitalWrite(Buzzer_PIN,LOW);
  }
  else{
    Serial.println("ON");
    digitalWrite(Buzzer_PIN,HIGH);
  }
}

void Show_Readings(int adcValue, int SensorValue){
  Serial.println("---------------------");
  Serial.print("ADC: ");
  Serial.println(adcValue);
  Serial.print("Sensor Value: ");
  Serial.print(SensorValue);
  Serial.println("%");
  Serial.print("System State: ");
  SensorStatus(SensorValue);
  Serial.println("---------------------");

}

void setup() {
  Serial.begin(115200);
  pinMode(POT_PIN,INPUT);
  pinMode(Buzzer_PIN,OUTPUT);
  Serial.println("Buzzer alert system started");
}

void loop() {
  int adcValue = analogRead(POT_PIN);
  int sensorValue = map(adcValue,0,4095,0,100);
  Show_Readings(adcValue,sensorValue);
  delay(500);
}