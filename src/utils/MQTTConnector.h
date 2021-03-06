#ifndef ARDUINO_MQTTCONNECTOR_H
#define ARDUINO_MQTTCONNECTOR_H

#include <Arduino.h>

void    MQTTBegin(String deviceId);
void    MQTTLoop();
boolean MQTTPublish(String topic, String payload);
void    MQTTSetCallback(void (*callback)(char* topic, byte* payload, unsigned int length));
boolean MQTTSubscribe();
boolean MQTTIsConnected();

#endif /* ARDUINO_MQTTCONNECTOR_H */