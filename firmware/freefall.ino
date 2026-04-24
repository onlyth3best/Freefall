#include <Wire.h>
#define MMA_ADDR 0x68
#define OLED_ADDR 0x3C

void setup() {
  Serial.begin(9600);
  Wire.begin();
}


Wire.beginTransmission(MMA_ADDR);
Wire.write(0x43);
Wire.endTransmission(false);


void initMPU() {
  Wire.beginTransmission(MMA_ADDR);
  Wire.write(0x2C); //sleep mode address
  Wire.write(0x00); //hex to start sensor
  //need to find calibration range
  Wire.endTransmission();
}


//send and close
Wire.endTransmission();
Wire.endTransmission(false);

void readGyro() {
  Wire.beginTransmission(MMA_ADDR);
  Wire.write(0x01); 
  Wire.endTransmission(false);
  Wire.requestFrom(MMA_ADDR, 6);

  int16_t accel_X, accel_Y, accel_Z;
  accel_X = (Wire.read() << 8) | Wire.read();
  accel_Y = (Wire.read() << 8) | Wire.read();
  accel_Z = (Wire.read() << 8) | Wire.read();
}


float rotationZ;
unsigned long lastTime = 0;

void loop() {
  readyAccel();  
}

