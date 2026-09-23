# Nodemcu8266 Codes

### Wifi connection code summary:
``
WiFi.begin("wifi_name","password") // To connect wifi
``
<br>
``
WiFi.status()  // To check if its connect
``
<br>
``
WiFi.localIP()  //To showing ip connected network
``
<br>

<b>Values:</b>
- WL_CONNECTED
- WL_IDLE_STATUS
- WL_CONNECT_FAILED

<br>


### Webserver code summary:
``
WiFiClient client;  // Create client object.
``
<br>
``
WiFiServer server(80);  // Create server object and 80 is a port number.
``
<br>
``
server.begin();  //For started the server.
``
<br>
``
client=server.available();  // Gets a client who connect with server and has data for reading
``
<br>
``
client.readStringUntil('\n');  // read string untill {n space} coming.
``

<br>


### Access_point Code summary:

``
WiFi.softAP(wifi_name,password);  // Local accesspoint created.
``
<br>
``
WiFi.softAPIP();  // To get access point Ip address.
``








