//
//			pivotTurn180_OnOffControl.c
//
//	By: Les Tekamp
//	Date: 27 Aug 2017
//	Kit #: 99
//	Class/Section #: ECE-1001-000
//
//	Problem Statement: Write a RobotC program to turn the Bot
//	180 degrees by pivoting on one wheel. By adjusting the
//	wait time only.
//
//
//					Pseudo Code Algorithm
//
//	start program
//		motor A  30% power - this is a pivot turn
//		wait for 1 seconds - adjust to get turn correct
//		motor A  off at 0% power
//	end program
//
//
task main()
{

	motor[motorB] = 30;     // motorA at 30% power

	wait1Msec(2400);        // program waits here for 1 seconds

	motor[motorB] = 0;      // motorA at 0% power (Off)

	return;
}
