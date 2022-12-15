task main()
{

	nSyncedMotors = synchBC;  // motor B (master) & C (slave)

	nSyncedTurnRatio = 93;   // look up "nSyncedTurnRatio" in Help File

	motor[motorB] = 60;      // motor power B & C = 40%

	wait1Msec(7000);         // time delay 1850 mseconds

	motor[motorB] = 0;       // turn motors B & C off

	return;

}
