// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
/**
 *
 *
 * @author ExampleAuthor
 */
class DriveTrain: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	// Create a variable for the main robot drive
	public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	SpeedController* driveLeft1;
	SpeedController* driveLeft2;
	SpeedController* driveRight1;
	SpeedController* driveRight2;
	RobotDrive* robotDrive41;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	DriveTrain();
	void InitDefaultCommand();
	void tankDrive(float leftstick, float rightstick);
};
#endif
