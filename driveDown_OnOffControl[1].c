//
//			driveDown_OnOffControl.c
//
//	By: Les Tekamp
//	Date: 27 Aug 2017
//	Kit #: 99
//	Class/Section #: ECE-1001-000
//
//	Problem Statement: Write a RobotC program to drive about
//	2/3 down the Robot Bullpen. By adjusting the motor
//	power only.
//
//
//					Pseudo Code Algorithm
//
//	start program
//		motor B & C on at 50% power
//		wait for 3 seconds
//		motor B & C off at 0% power
//	end program
//
//
task main()
{

	motor[motorB] = 50;     // motorA at 50% power
	motor[motorC] = 50;     // motorB at 50% power

	wait1Msec(3000);        // program stop here for 2 seconds

	motor[motorB] = 0;      // motorA at 0% power (Off)
	motor[motorC] = 0;      // motorB at 0% power (Off)

	return;
} // end task main
