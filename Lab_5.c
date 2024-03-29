#pragma config(Sensor, S2,     bump,           sensorTouch)
#pragma config(Sensor, S3,     color,          sensorColorNxtFULL)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//
//				Lab_5_1.c
//
//	By: Austin Hobbs
//	Date: 1 Apr 2019
//	Kit #: 56
//	Class: ECE-1001-001
//
//
//
//	Task Statement: Task 1 for Lab 5 bare code.
//
//
//				####		PsuedoCode			####
//
//
task main()
{
	int degrees = 0;
	int n = 0;
	bool redFlag = false;
	bool yellowFlag = false;

	while (true) //infinite loop
	{
		motor[motorB] = 50; // drive
		motor[motorC] = 50;
// detect bump
		if(SensorValue[bump] == 1)
		{
			motor[motorB] = 0;
			motor[motorC] = 0;
			playSoundFile("car_horn.rso");
			while(bSoundActive == 1) // wait for sound file to finish
			{
					sleep(1);
			} // end while
			motor[motorB] = -50; //backup
			motor[motorC] = -50;
			wait1Msec(2000);
			// turn randomly
			nMotorEncoder[motorC] = 0;
			degrees = random(181) + 90;
			while(nMotorEncoder[motorC] < degrees)
			{
				motor[motorC] = 30;
				motor[motorB] = 0;
			}
		} // end if bump
// detect red
		if((SensorValue[color] == 5) && (redFlag == false))
		{
			motor[motorB] = 0;
			motor[motorC] = 0;
			// play danger twice
			for(n=0;n<2;n++)
			{
				playSoundFile("danger.rso");
				while(bSoundActive == 1) // wait for sound file to finish
				{
					sleep(1);
				} // end while
			} // end for
			// turn right 90
			nMotorEncoder[motorC] = 0;
			while( nMotorEncoder[motorC] < 385 )
			{
				motor[motorC] = 50; // only one motor 50%
			}
			redFlag = true;
		} // end if red
// detect yellow
		if((SensorValue[color] == 4) && (yellowFlag == false))
  	{
			motor[motorB] = 0;
			motor[motorC] = 0;
			playSoundFile("buzzer.rso");
			while(bSoundActive == 1) // wait for sound file to finish
			{
					sleep(1);
			} // end while
			nMotorEncoder[motorB] = 0;
			while( nMotorEncoder[motorB] < 270 ) // while motor encoder is reading less than 770 degrees...
			{
				motor[motorB] = 50; // spin
				motor[motorC] = -50;
			}
			yellowFlag = false;
  	} // end if yellow
// detect white
  	if(SensorValue[color] == 6)
    {
    	motor[motorB] = 0;
    	motor[motorC] = 0;

    	clearTimer(T4);
    	while(time1[T4]<3250)
    	{
    		playSoundFile("fanfare.rso");
  		}
    	break;
    }// end if white
	} // end infinte loop
}//end main
