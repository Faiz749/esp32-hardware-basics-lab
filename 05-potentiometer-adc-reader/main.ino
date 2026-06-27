#define POTPIN 34
void setup() {
  Serial.begin(115200);
  pinMode(POTPIN,INPUT);
  Serial.println("Potentiometer ADC Meter Started");
}

void loop() {
  int adcValue = analogRead(POTPIN);
  int percentage = map(adcValue,0,4095,0,100);
  Serial.println("---------------------");
  Serial.print("ADC Value: ");
  Serial.println(adcValue);
  Serial.print("Percentage: ");
  Serial.print(percentage);
  Serial.println("%");
  Serial.print("Level: ");
  if(percentage<=30){
    Serial.println("LOW");
  }
  else if(percentage<=70){
    Serial.println("MEDIUM");
  }
  else{
    Serial.println("HIGH");
    
  }
  Serial.println("---------------------");
  delay(500);
}