# myCobot: Arduino

Please review [root-level README](../) first!

# M5 Stack Basic

This repo is for the M5 version of the MyCobot 6 DOF arm

M5Stack Basic 
Please refer to the following link for the basic application and programming of
M5Stack:

- <https://docs.m5stack.com/#/zh_CN/core/basic> (Chinese)
- <https://docs.m5stack.com/#/en/core/basic> (English)

# Library & Example 

To start, please see `MycobotBasic.h` and `MycobotBasic.cpp`

## Update 

- Can only be used with AtomMain3.1 in myStudio2.2
https://github.com/elephantrobotics/myStudio/releases

# FAQ
* Common Errors  
>  * If you get an error regarding "Encode Range", uncomment the last line in：" C:\Users\Admin\Documents\Arduino\libraries\M5Stack\src\utility/ln_eSPI_Setup.h "  
>  * If you run out of flash on the M5 Basic, change from the Default partition scheme in the Arduino IDE to "Huge APP(3MB No OTA/1MB SPIFFS)", under Tools -> Partition Scheme

# Custom Gripper Application
You will need to clone this repo, then open the minibot example in the arduino IDE. Next compile and upload to the MyCobot.

Clone the pymycobot fork that has the custom message definition for the DIY Gripper: https://github.com/dirksavage88/pymycobot

# TODO
* Switch to a PWM servo with position feedback wire, or use DroneCAN servos
* Update MyCobot ROS 2 with the servo position feedback for MoveIt grasp compatibility
