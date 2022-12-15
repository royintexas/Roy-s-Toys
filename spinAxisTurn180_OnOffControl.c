//
//			spinAxisTurn180_OnOffControl.c
//
//	By: Les Tekamp
//	Date: 27 Aug 2017
//	Kit #: 99
//	Class/Section #: ECE-1001-000
//
//	Problem Statement: Write a RobotC program to turn the Bot
//	180 degrees. Spinning about the vertical axis. By adjusting
//	the wait time only.
//
//
//					Pseudo Code Algorithm
//
//	start program
//		motor A  30% power - this is a spin axis turn - one Fwd & one Rev
//		motor B  -30% power
//		wait for 5 seconds - adjust to get turn correct
//		motor A  off at 0% power
//		motor B  off at 0% power
//	end program
//
//
task main()
{

	motor[motorB] = 30;      // motorB at 30% power
	motor[motorC] = -30;     // motorC at -30% power

	wait1Msec(1200);         // program waits here for 5 seconds - Adjust

	motor[motorB] = 0;      // motorB at 0% power (Off)
	motor[motorC] = 0;      // motorC at 0% power (Off)

	return;
}
