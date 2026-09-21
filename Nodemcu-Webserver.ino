# include <ESP8266WiFi.h>

#define wifi_name "Hamim wifi"
#define password "01971664071"
#define pin 2

WiFiClient client;
WiFiServer server(80);



void setup() {

pinMode(pin,OUTPUT);

 Serial.begin(115200);

WiFi.begin(wifi_name,password);

while(WiFi.status() != WL_CONNECTED){

Serial.println("Connecting.....");
delay(200);

}

Serial.println("");
Serial.println("Wifi Connected");
Serial.println(WiFi.localIP());

server.begin();


}

void loop() {

  client = server.available();

  if(client == 1){
    String request= client.readStringUntil('\n');
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
