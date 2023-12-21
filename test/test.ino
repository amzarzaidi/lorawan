#include "arduino_LoRaWan_includes.h"

void setup() {
  // put your setup code here, to run once:
  LoRaWan_init();
  LoRaWan_join("E98E09E73D9BB1A2", "27b456675c160223", "BA37B07206139B8559EACE308D64E544");
  //LoRaWan_get_status_joined();
  LoRaWan_class("A");
}

void loop() {
  // put your main code here, to run repeatedly:
  LoRaWan_send("0123456", 1, false);
  LoRaWan_get_rx();
  delay(1000);
}
