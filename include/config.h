// Insert your WiFi secrets here:
#define SECRET_SSID "" // Your network SSID (name)    
#define SECRET_PASS "" // Your network password
#define CLIENT_ID 1
#define SERVER_IP "192.168.1.1"
//#define DEBUG

void connectToWifi();
u_int32_t toInt(byte buf[]);
void intToByteArray(uint32_t input, byte dst[]);

#define REQUEST_TYPE_PING 1
#define REQUEST_TYPE_FIRMWARE 2
#define RESPONSE_TYPE_PONG 1
