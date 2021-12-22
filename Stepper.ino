#include <AccelStepper.h>
#define FULLSTEP 4

AccelStepper myStepper(FULLSTEP, D1, D3, D2, D4);

void setup() {
  myStepper.setMaxSpeed(1000.0);
  myStepper.setAcceleration(50.0);
  myStepper.setSpeed(700);
  myStepper.moveTo(2038);
}

void loop() {
  if (myStepper.distanceToGo() == 0) 
    myStepper.moveTo(-myStepper.currentPosition());
  myStepper.run();
}
