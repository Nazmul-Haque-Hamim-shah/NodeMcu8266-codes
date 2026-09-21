
# include <ESP8266WiFi.h>

#define wifi_name "Hamim wifi";
#define password "01971664071";

void setup() {
 Serial.begin(115200);

WiFi.begin(wifi_name,password); 

while(WiFi.status() != WL_CONNECTED){

Serial.println("Connecting.....");
delay(200);

}

Serial.println("");
Serial.println("Wifi Connected");
Serial.println(WiFi.localIp());



}

void loop() {
  


}
