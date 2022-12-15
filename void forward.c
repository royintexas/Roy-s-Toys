#pragma config(Sensor, S1,     Roy,            sensorTouch)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void forward();

task main()
{
forward();
}

void forward()//begin user function forward
{
	if (SensorValue[Roy] == 0)// start if loop
	{
		nSyncedMotors = synchBC;
		nSyncedTurnRatio = 100;//sync motors B and C
		motor[motorB] = 30;// motors B and C drive forward at 30% power
	}// end if loop

	if (SensorValue[Roy] == 1)// start if loop
	{
		motor[motorB] = 0;
		playSoundFile("car_crash.rso");//play sound file
		sleep(1);
		wait1Msec(500);// wait 500 mSec
	}// end if
}// end forward user function

// User Function forwardAlgorithm
// user function drive forward - returns void - pass motor power to the function
// drive with synchronous motor control
// drive foward until the Touch sensor touches a wall
// stop
// play a sound file
// wait 500 mSec
