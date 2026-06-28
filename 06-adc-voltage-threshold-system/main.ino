#define POT_PIN 34

float getVoltage(int adcValue){
  return 3.3*adcValue/4095;
}
String getVoltageStatus(float voltage){
  if(voltage <=1){
    return "LOW";
  }
  else if(voltage<=2.5){
    return "SAFE";
  }
  else{
    return "HIGH";
  }
}
void printReading(int adcValue,float adcVoltage,String Status){
  Serial.println("---------------------");
  Serial.print("ADC: ");
  Serial.println(adcValue);
  Serial.print("Voltage: ");
  Serial.print(adcVoltage);
  Serial.println("V");
  Serial.print("STATUS: ");
  Serial.println(Status);
  Serial.println("---------------------");
}
void setup() {
  Serial.begin(115200);
  pinMode(POT_PIN,INPUT);
  Serial.println("Adc voltage threshold system started");
}

void loop() {
  int adcValue = analogRead(POT_PIN);
  float adcVoltage = getVoltage(adcValue);
  String Status = getVoltageStatus(adcVoltage);
  printReading(adcValue,adcVoltage,Status);
  delay(500);
}
