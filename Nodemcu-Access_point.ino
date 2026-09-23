#include <ESP8266WiFi.h>

#define pin D4
#define wifi_name "Nodemcu"
#define password "123456789"


WiFiClient client;
WiFiServer server(80);


void setup() {
 Serial.begin(115200);
 
 WiFi.softAP(wifi_name,password);

 Serial.println();
 Serial.println("Nodemcu Started");
 
 Serial.println(WiFi.softAPIP());

 pinMode(pin,OUTPUT);
 digitalWrite(pin,HIGH);
 server.begin();



}

void loop() {
  
  client=server.available();

  if(client == 1){

    String request=client.readStringUntil('\n');
    Serial.println(request);

    request.trim();

    if(request == "GET /ledon HTTP/1.1"){

      digitalWrite(pin,LOW);
  }
      
  else{
    digitalWrite(pin,HIGH);
  }

    
  }


}
