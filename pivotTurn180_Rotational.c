//
//			pivotTurn180_Rotational.c
//
//	By: Les Tekamp
//	Date: 27 Aug 2017
//	Kit #: 00
//	Class/Section #: ECE-1001-000
//
//	Problem Statement: Write a RobotC program to turn the
//	Bot 180 degrees. One motor on, one motor off. By only
//	adjusting the degrees of rotation of the motor.
//
//
//					Pseudo Code Algorithm
//
//	start program
//		zero rotational encoder
//		while < target degrees
//			drive one motor forward
//		end while
//		motor off - 0% power
//	end program
//
//
task main()
{

	nMotorEncoder[motorB] = 0;

	while( nMotorEncoder[motorB] < 770 )   // adjust degrees
	{
		motor[motorB] = 50;
	}

		motor[motorB] = 0;

	return;
}
