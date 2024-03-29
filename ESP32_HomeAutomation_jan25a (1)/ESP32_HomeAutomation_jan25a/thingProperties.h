// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "..................";// your device id here

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onFanChange();
void onLedChange();
void onTulelightChange();
void onTvChange();

bool fan;
bool led;
bool tulelight;
bool tv;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(fan, READWRITE, ON_CHANGE, onFanChange);
  ArduinoCloud.addProperty(led, READWRITE, ON_CHANGE, onLedChange);
  ArduinoCloud.addProperty(tulelight, READWRITE, ON_CHANGE, onTulelightChange);
  ArduinoCloud.addProperty(tv, READWRITE, ON_CHANGE, onTvChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
