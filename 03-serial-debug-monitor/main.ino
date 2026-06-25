int fake_temperature = 25;
void setup() {
  Serial.begin(115200);
  Serial.println("Serial debug monitor started");
}

void loop() {
  unsigned long uptimeSec = millis()/1000;
  Serial.println("-------------------------");
  Serial.println("SYSTEM : READY");
  Serial.print("Uptime: ");
  Serial.print(uptimeSec);
  Serial.println(" sec");
  Serial.print("Fake Temperature: ");
  Serial.print(fake_temperature);
  Serial.println(" C");
  if(fake_temperature > 30){
    Serial.println("Status: WARNING");
  }
  else{
    Serial.println("Status: NORMAL");
  }
  fake_temperature +=1;
  Serial.println("-------------------------");
  delay(1000);
}
