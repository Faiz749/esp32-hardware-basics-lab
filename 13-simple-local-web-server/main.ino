#include <WiFi.h>

const char* name = "Wifi";
const char* password = "Password";

WiFiServer server(80);

void setup() {
  Serial.begin(115200);
  WiFi.begin(name,password);
  Serial.print("Connecting to Wifi");
  while(WiFi.status()!=WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.println("Connected to Wifi");
  Serial.print("ESP 32 IP Address: ");
  Serial.println(WiFi.localIP());
  server.begin();
}

void loop() {
  WiFiClient client = server.available();
  if(client){
    unsigned long uptimeSec = millis()/1000;
    while(client.connected()){
      if(client.available()){
        client.readStringUntil('\r');
        client.flush();
        client.println("HTTP/1.1 200 OK");
        client.println("Content-type:text/html");
        client.println();
        client.println("<!DOCTYPE html>");
        client.println("<html>");
        client.println("<body>");
        client.println("<h1>ESP Local Web Server</h1>");
        client.println("<p>System: Online</p>");
        client.print("<p>Uptime in Sec: ");
        client.print(uptimeSec);
        client.println(" Sec</p>");
        client.println("<p>Status: NORMAL</p>");
        client.println("</body>");
        client.println("</html>");
        break;



      }
    }
    client.stop();
  }
}
