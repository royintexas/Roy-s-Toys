//
//			spinAxisTurn180_Rotational.c
//
//	By: Les Tekamp
//	Date: 27 Aug 2017
//	Kit #: 00
//	Class/Section #: ECE-1001-000
//
//	Problem Statement: Write a RobotC program to turn the Bot
//	180 degrees. Spinning about the vertical axis. By only
//	adjusting the degrees of rotation of the motor.
//
//
//					Pseudo Code Algorithm
//
//	start program
//		zero rotational encoder
//		while < target degrees
//			drive one motor forward
//			drive one motor reverse
//		end while
//		motors off - 0% power
//	end program
//
//
task main()
{

	nMotorEncoder[motorB] = 0;

	while( nMotorEncoder[motorB] < 340 )   // adjust degrees
	{
		motor[motorB] = 50;
		motor[motorC] = -50;
	}

		motor[motorB] = 0;
		motor[motorC] = 0;

	return;
}
