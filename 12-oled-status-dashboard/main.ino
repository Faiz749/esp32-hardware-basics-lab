#include "DHT.h"
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define DHT_PIN 4
#define DHT_TYPE DHT11
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH,SCREEN_HEIGHT,&Wire,-1);
DHT dht(DHT_PIN,DHT_TYPE);

bool DHT11_check(float temperature,float humidity){
  if(isnan(temperature) || isnan(humidity)){
    return false;
  }
  return true;
}
String get_Status(float temperature,float humidity){
  if(temperature >= 35 || humidity >= 80){
    return "WARNING";
  }
  else{
    return "NORMAL";
  }
}

void show_readings_OLED(float temperature,float humidity,String status){
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);
  if(!DHT11_check(temperature,humidity)){
    display.println("Sensor Error");
  }
  else{
    display.println("---------------------");

    display.setCursor(0,12);
    display.print("Temperature: ");
    display.print(temperature);
    display.println(" C");

    display.setCursor(0,24);
    display.print("Humidity: ");
    display.print(humidity);
    display.println("%");

    display.setCursor(0,36);
    display.print("Status: ");
    display.println(status);

    display.setCursor(0,48);
    display.println("---------------------");
  }
  display.display();
}

void setup() {
  Serial.begin(115200);
  dht.begin();
  if(!display.begin(SSD1306_SWITCHCAPVCC,0x3c)){
    Serial.println("OLED not found");
    while(true);
  }
  Serial.println("OLED Status Dashboard started");
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  String status = get_Status(temperature,humidity);
  show_readings_OLED(temperature,humidity,status);
  delay(2000);
}
