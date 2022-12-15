//
//			spinAxisTurn180_Synchronized.c
//
//	By: Les Tekamp
//	Date: 27 Aug 2017
//	Kit #: 00
//	Class/Section #: ECE-1001-000
//
//	Problem Statement: Write a RobotC program to turn the Bot
//	180 degrees. Spinning about the vertical axis. By only
//	adjusting the nSyncedTurnRatio and wait time.
//
//
//					Pseudo Code Algorithm
//
//	start program
//		put motors in sync mode
//		set syncedTurnRatio
//		master motor on
//		set wait time
//		master motor off
//	end program
//
//
task main()
{

	nSyncedMotors = synchBC;  // motor B (master) & C (slave)

	nSyncedTurnRatio = -100;   // look up "nSyncedTurnRatio" in Help File

	motor[motorB] = 50;       // motor power B & C = 30%

	wait1Msec(800);           // time delay 0.5 seconds

	motor[motorB] = 0;        // turn motors B & C off

	return;
}
