
//#define OTA

// wifi settings
const char* ssid     = "Avalon";
const char* password = "ZetaCygni";

// mqtt server settings
const char* mqtt_server   = "192,168,2,5";
const int mqtt_port       = 1883;
const char* mqtt_username = "node";
const char* mqtt_password = "camibm";

// mqtt client settings
// Note PubSubClient.h has a MQTT_MAX_PACKET_SIZE of 128 defined, so either raise it to 256 or use short topics
const char* client_id                   = "HVAC-1"; // Must be unique on the MQTT network
const char* heatpump_topic              = "HVAC/UpStairs";
const char* heatpump_set_topic          = "HVAC/UpStairs/set";
const char* heatpump_status_topic       = "HVAC/UpStairs/status";
const char* heatpump_timers_topic       = "HVAC/UpStairs/timers";

const char* heatpump_debug_topic        = "HVAC/UpStairs/debug";
const char* heatpump_debug_set_topic    = "HVAC/UpStairs/debug/set";

// pinouts
const int redLedPin  = 0; // Onboard LED = digital pin 0 (red LED on adafruit ESP8266 huzzah)
const int blueLedPin = 2; // Onboard LED = digital pin 0 (blue LED on adafruit ESP8266 huzzah)

// sketch settings
const unsigned int SEND_ROOM_TEMP_INTERVAL_MS = 60000;
