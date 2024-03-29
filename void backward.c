#pragma config(Sensor, S4,     Sanderfer,      sensorSONAR)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void backward ();

task main()
{

  backward();
}

void backward()// start backward user function
{
	int distance_in_cm = 15;
	while (SensorValue[Sanderfer] > distance_in_cm)// while loop
	{
		nSyncedMotors = synchBC;
		nSyncedTurnRatio = 100;//sync motors B and C
		motor[motorB] = -30;//reverse motors B and C at 40% power
	}// end while loop

	if (SensorValue[Sanderfer] <= distance_in_cm)// if loop
	{
		motor[motorB] = 0;//stop motor
		playSoundFile("danger.rso");// play sound file
		sleep(1);
		wait1Msec(250);//wait 250 Msec
  }

}// end backward user function

////User Function backward Algorithm
// user function reverse - return void - pass motore power to the function
// drive with synchronous motor control
// drive in reverse until ultrasonic sensor is < 15 cm
// stop
// play a different sound file
// wait 250 mSec
