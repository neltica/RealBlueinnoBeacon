#include <RFduinoBLE.h>

// pin 3 on the RGB shield is the green led
int led = 4;

void setup() {
  // led used to indicate that iBeacon has started
  pinMode(led, OUTPUT);

  // do iBeacon advertising
  RFduinoBLE.iBeacon = true;


  // start the BLE stack
  RFduinoBLE.begin();
}

void loop() {
  // switch to lower power mode


 


  //RFduino_ULPDelay(delayValue);
  RFduino_ULPDelay(INFINITE);
}

void RFduinoBLE_onReceive()
{
}
void RFduinoBLE_onConnect()
{
  digitalWrite(led, HIGH);
}
void RFduinoBLE_onDisconnect()
{
  digitalWrite(led, LOW);
}
void RFduinoBLE_onAdvertisement(bool start)
{
  // turn the green led on if we start advertisement, and turn it
  // off if we stop advertisement
  if (start)
    //digitalWrite(led, HIGH);
  {
  }
  else
    //digitalWrite(led, LOW);
  {
  }
}
