//
//			driveDown_Rotational.c
//
//	By: Les Tekamp
//	Date: 27 Aug 2017
//	Kit #: 00
//	Class/Section #: ECE-1001-000
//
//	Problem Statement: Write a RobotC program to drive about
//	half-way down the Robot Bullpen. By only adjusting the
//	degrees of rotation of the motor.
//
//
//					Pseudo Code Algorithm
//
//	start program
//		zero rotational encoder
//		while < target degrees
//			drive motors
//		end while
//		motors off - 0% power
//	end program
//
//
task main()
{

	nMotorEncoder[motorA] = 0;

	while( nMotorEncoder[motorA] < 1080 )  // adjust degrees
	{
		motor[motorA] = 50;
		motor[motorB] = 50;
	}

		motor[motorA] = 0;
		motor[motorB] = 0;

	return;
} // end task main
