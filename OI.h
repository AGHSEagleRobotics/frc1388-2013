// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef OI_H
#define OI_H
#include "WPILib.h"
class OI {
private:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	Joystick* opStick;
	JoystickButton* shooterRun;
	JoystickButton* shooterStop;
	JoystickButton* decreaseVoltage;
	JoystickButton* increaseVoltage;
	Joystick* leftStick;
	JoystickButton* shootNowLeft;
	Joystick* rightStick;
	JoystickButton* shootNow;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	OI();
 
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
	Joystick* getRightStick();
	Joystick* getLeftStick();
	Joystick* getOpStick();
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
	double returnRightYAxis();
	bool returnRightTrigger();
	bool returnLeftTrigger();
	float returnRightXAxis();
	bool returnTopButton();
	bool returnBotButton();	
};
#endif
