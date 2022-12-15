//
//                   Motor_Light_OnOff_Blink.c
//
//
//
//	By: John Lindsey
//	Date: 25 Aug 2017
//	Kit Number: 59
//	Class/Sect. #: ECE-1001-059
//
//
//	Problem Statement: Write a RobotC program to turn-on the motor,
//	then turn it off, then turn-on the LED lamp, then turn the lamp off.
//
//  Use an Integter variable blinks to decide how many times to blink the light
//  initialize blinks to be 1
//	    >>>>  ALGORITHM  <<<<
//
//	start task main
//	define inputs and outputs
//	define and initialize variables
//	infinite while loop
//		turn-on (power 50%) motor on port A (MotorA )
//		wait1000 mSec (1 sec)
//		turn-off (power 0%) motor on port A
//    	While Loop blinks while blinks < comparison value
//			turn-on (power 50%) LED on port C (MotorC)
//			wait500 mSec (.5 sec)
//			turn-off (power 0%) lamp on port C
//			increment blinks by 1
//			end blink while loop
//   re-initialize blinks to be 1
//	end while loop
//	end main
//
//
task main()
{
	int blinks; 						// define an integer variable called "blinks"

	blinks=1;								// initialize the blinks varialbe to be 1

	while(true)
	{
		motor[motorA] = 50;   // Turns On motor on Motor port A

		wait1Msec(1000);      // stop program execution for 1000 mSec

		motor[motorA] = 0;    // Turns Off motor on Motor port A

		// blink loop will blink the light  0.5 sec as long as the variable
		while(blinks<6)		// blinks is less than the comparision value
		{
			motor[motorC] = 50;   // Turns On LED on Motor port C

			wait1Msec(1000);      // stop program execution for 500 mSec

			motor[motorC] = 0;    // Turns Off LED on Motor port C

			wait1Msec(1000);      // stop program execution for 500 mSec

			blinks=blinks+1;		// re-initialize the blinks variable to be 1
		}

		blinks=1;

	}  // end while loop


}  // end main
