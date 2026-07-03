#include "DHT.h"
#define DHT_PIN 4
#define DHT_TYPE DHT11

DHT dht(DHT_PIN,DHT_TYPE);

bool check_reading(float temperature,float Humidity){
  if(isnan(temperature) || isnan(Humidity)){
    Serial.println("Failed to read from DHT11 Sensor");
    delay(200);
    return true;
  }
  return false;
}

String show_status(float temperature,float Humidity){
  if(temperature >=35 || Humidity >= 80){
    return "WARNING";
  }
  else{
    return "NORMAL";
  }
}

void show_reading(float temperature,float Humidity,String Status){
  Serial.println("---------------------");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");
  Serial.print("Humidity: ");
  Serial.print(Humidity);
  Serial.println("%");
  Serial.print("Status: ");
  Serial.println(Status);
  Serial.println("---------------------");
}

void setup(){
  Serial.begin(115200);
  dht.begin();
  Serial.println("DHT11 Climate Monitor Started");
}

void loop(){
  float temperature = dht.readTemperature();
  float Humidity = dht.readHumidity();
  if (check_reading(temperature,Humidity)){
    return;
  }
  String Status = show_status(temperature,Humidity);
  show_reading(temperature,Humidity,Status);
  delay(2000);
}