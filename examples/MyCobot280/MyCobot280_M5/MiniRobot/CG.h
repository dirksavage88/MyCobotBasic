#ifndef CG_H
#define CG_H
#include <Arduino.h>
#include <ESP32Servo.h>


class CustomGripper {
  public:
    void cg_setup();
    void cg_open(uint8_t open_angle);
    void cg_close(uint8_t closed_angle);
  private: 
    int max_position_close;
    int max_position_open;
    int servo_pin;
    Servo c_gripper;
};

#endif