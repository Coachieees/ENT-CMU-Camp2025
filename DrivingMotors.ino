 #include "CytronMotorDriver.h"


// Configure the motor driver.
CytronMD motor1(PWM_PWM, 32, 33);   // PWM 1A = Pin 32, PWM 1B = Pin 33.
CytronMD motor2(PWM_PWM, 25, 26); // PWM 2A = Pin 25, PWM 2B = Pin 26.


// The setup routine runs once when you press reset.
void setup() {
  
}


// The loop routine runs over and over again forever.
void loop() {
  motor1.setSpeed(128);   // Motor 1 runs forward at 50% speed.
  motor2.setSpeed(-128);  // Motor 2 runs backward at 50% speed.
  delay(1000);
  
  motor1.setSpeed(255);   // Motor 1 runs forward at full speed.
  motor2.setSpeed(-255);  // Motor 2 runs backward at full speed.
  delay(1000);

  motor1.setSpeed(0);     // Motor 1 stops.
  motor2.setSpeed(0);     // Motor 2 stops.
  delay(1000);

  motor1.setSpeed(-128);  // Motor 1 runs backward at 50% speed.
  motor2.setSpeed(128);   // Motor 2 runs forward at 50% speed.
  delay(1000);
  
  motor1.setSpeed(-255);  // Motor 1 runs backward at full speed.
  motor2.setSpeed(255);   // Motor 2 runs forward at full speed.
  delay(1000);

  motor1.setSpeed(0);     // Motor 1 stops.
  motor2.setSpeed(0);     // Motor 2 stops.
  delay(1000);
}