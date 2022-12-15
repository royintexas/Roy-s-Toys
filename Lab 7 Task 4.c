#pragma config(Sensor, S3,     Echo,           sensorSONAR)
#pragma config(Motor,  motorB,          B,             tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          C,             tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
//
//
//
//
//ultrasonic sensor
//
//
//
// By: Roy Sanderfer
// Date: 22 April 2019
// Class: ECE-1001-001
// Kit Number: 56
//
//Task 2: Program: Ultrasonic Maze using a For Loop
//                 Design a program that allows your NXT robot to drive the Maze and never touch any wall.
//                 The Bot should stop about 6 inches (15.24 cm) from any wall.
//                 Turn left and continue through the Maze. Use a for loop to count the 5 left-turns.
//                 Display the number of left-turns taken on the LCD in  BIG TEXT.
//                 The Bot is required to stop about 6 inches from the Finish line wall   facing the wall-and play the  fanfare.rso sound file.
//                 Then terminate the program.
//

//
//          %%%%  Algorithm    %%%%%
// preprocessor directives
//
// start task main
//
//    define and init. variables
//
//    start for loop
//       start while SensorValue[Echo]>15.24 loop
//        set motor B to -50%
//        set motor C to -50%
//      end while SensorValue[Echo]>15.24 loop
//      set motor B to 0%
//      set motor C to -30%
//      wait1Msec(1250)
//      display big text
//   end for loop
//      start while SensorValue[Echo]>15.24 loop
//         set motor B to -50%
//         set motor C to -50%
//      end while SensorValue[Echo]>15.24 loop
//   set motor B to 0%
//   set motor B to 0%
//   play sound file
//end task main


task main()// start task main
{

	for(int loops=1;loops<=5;loops++)// start for loop
	{
		while(SensorValue[Echo]>15.24)// start while SensorValue[Echo]>15.24 loop
		{
			motor[B] = -50;// set motor B to -50%
	    motor[C] = -50;// set motor C to -50%

	  }// end while SensorValue[Echo]>15.24 loop

	  motor[B]=0;// set motor B to 0%
	  motor[C]=-30;// set motor C to -30%
	  wait1Msec(1250);// wait1Msec(1250)

    displayBigTextLine(3,"%d", loops );// display text

	}//end for loop

	 while(SensorValue[Echo]>15.24)// start while SensorValue[Echo]>15.24 loop
		{
			motor[B] = -50;//set motor B to -50%
	    motor[C] = -50;//set motor C to -50%

	   }// end while SensorValue[Echo]>15.24 loop

	motor[B]=0;// set motor B to 0%
	motor[C]=0;// set motor B to 0%

	playSoundFile("fanfare.rso");// play sound file
	while(bSoundActive)// start while bSound loop
	{
	  sleep(1);// sleep 1
	}// end while bSound loop

}//end task main
