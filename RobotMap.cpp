// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
SpeedController* RobotMap::driveTrainDriveLeft1 = NULL;
SpeedController* RobotMap::driveTrainDriveRight1 = NULL;
RobotDrive* RobotMap::driveTrainRobotDrive = NULL;
AnalogChannel* RobotMap::driveTrainultrasonicDistance = NULL;
SpeedController* RobotMap::feederFeederMotor = NULL;
SpeedController* RobotMap::climberClimberMotor = NULL;
DigitalInput* RobotMap::climberTapeLimitLeft = NULL;
DigitalInput* RobotMap::climberTapeLimitRight = NULL;
Servo* RobotMap::climberTapeAngleLeft = NULL;
Servo* RobotMap::climberTapeAngleRight = NULL;
CANJaguar* RobotMap::shootershooterMotor = NULL;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();
	driveTrainDriveLeft1 = new Victor(1, 1);
	lw->AddActuator("DriveTrain", "DriveLeft1", (Victor*) driveTrainDriveLeft1);
	
	driveTrainDriveRight1 = new Victor(1, 3);
	lw->AddActuator("DriveTrain", "DriveRight1", (Victor*) driveTrainDriveRight1);
	
	driveTrainRobotDrive = new RobotDrive(driveTrainDriveLeft1, driveTrainDriveRight1);
	
	driveTrainRobotDrive->SetSafetyEnabled(true);
        driveTrainRobotDrive->SetExpiration(0.25);
        driveTrainRobotDrive->SetSensitivity(0.5);
        driveTrainRobotDrive->SetMaxOutput(1.0);
        
	driveTrainultrasonicDistance = new AnalogChannel(1, 1);
	lw->AddSensor("DriveTrain", "ultrasonicDistance", driveTrainultrasonicDistance);
	
	feederFeederMotor = new Victor(1, 2);
	lw->AddActuator("Feeder", "FeederMotor", (Victor*) feederFeederMotor);
	
	climberClimberMotor = new Victor(1, 5);
	lw->AddActuator("Climber", "ClimberMotor", (Victor*) climberClimberMotor);
	
	climberTapeLimitLeft = new DigitalInput(1, 1);
	lw->AddSensor("Climber", "TapeLimitLeft", climberTapeLimitLeft);
	
	climberTapeLimitRight = new DigitalInput(1, 2);
	lw->AddSensor("Climber", "TapeLimitRight", climberTapeLimitRight);
	
	climberTapeAngleLeft = new Servo(1, 6);
	lw->AddActuator("Climber", "TapeAngleLeft", climberTapeAngleLeft);
	
	climberTapeAngleRight = new Servo(1, 7);
	lw->AddActuator("Climber", "TapeAngleRight", climberTapeAngleRight);
	
	shootershooterMotor = new CANJaguar(4);
	
	
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
