//
//    		      	Motor_Light_OnOff.c
//
//
//	By: Les Tekamp
//	Date: 22 Jan 2016
//	Kit #: 59
//	Class/Section #: ECE-1001-059
//
//
//	Problem Statement: Write a RobotC program to turn-on the motor,
//	for one second, then turn it off. Then turn-on the LED lamp,
//	wait 1 second then turn the lamp off. Repeat this sequence
//	forever (infinite loop).
//	NOTE: due to Lamp current draw, Lamp shuts down after ~ half sec
//
//
//	    >>>>  ALGORITHM  <<<<
//
//	start task main
//		infinite loop
//			turn-on  motor (MotorA)
//			wait1000 mSec (1 sec)
//			turn-off motor (MotorA)
//
//			turn-on LED (MotorC)  **due to current draw, Lamp on short time
//			wait1000 mSec (1 sec)
//			turn-off LED (MotorC)
//		end loop
//	end main
//
//
task main()
{

 	while(true)
 	{

  	 motor[motorA] = 50;   // Turns On motor on Motor port A

  	 wait1Msec(1000);      // stop program execution for 1000 mSec

  	 motor[motorA] = 0;    // Turns Off motor on Motor port A

		 motor[motorC] = 40;   // Turns On LED on Motor port C
     // due to Lamp current draw, Lamp shuts down after ~ half sec

  	 wait1Msec(1000);      // stop program execution for 1000 mSec

  	 motor[motorC] = 0;    // Turns Off LED on Motor port C

  }  // end while loop

}  // end main
