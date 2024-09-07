#include "CG.h"

void CustomGripper::cg_setup() {
  // Pin 18 on the mycobot, located on top of the M5 stack
  servo_pin = 18;
  c_gripper.attach(18);
  max_position_open = 180;
  max_position_close = 0;

}
// TODO: get a servo that sends position via rotary encoder and get the current angle, instead of resetting to the max position before a grasp
void CustomGripper::cg_close(uint8_t closed_angle) {
  for(uint8_t deg = c_gripper.read(); deg <= closed_angle; deg++) {
    if(deg >= max_position_close && deg <= max_position_open) {
	    c_gripper.write(deg);
	    delay(15);

    }
  }
  // Detach from the servo before the next command
  bool is_attached = c_gripper.attached();
  if(is_attached){
    c_gripper.detach();
  }
}

void CustomGripper::cg_open(uint8_t open_angle) {
 
  for(uint8_t deg = c_gripper.read(); deg >= open_angle; --deg) {

    if(deg >= max_position_close && deg <= max_position_open) {
	    c_gripper.write(deg);
	    delay(15);

    }

  } 
  // Detach from the servo before the next command
  bool is_attached = c_gripper.attached();
  if(is_attached) {
    c_gripper.detach();
  }
  
}