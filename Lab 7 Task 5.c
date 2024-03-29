#pragma config(Sensor, S1,     Touch,          sensorTouch)
#pragma config(Sensor, S3,     Echo,           sensorSONAR)
#pragma config(Motor,  motorB,          B,             tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          C,             tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
//
//
//
//
//ultrasonic sensor
//touch sensor
//
//
//
// By: Roy Sanderfer
// Date: 22 April 2019
// Class: ECE-1001-001
// Kit Number: 56
//
//Task 5: Array program using a For loop
//        Design a program that allows your Bot, to be placed in the area shown below,
//        then wait until the Touch sensor is pushed. Wait 2 seconds, then enter a for loop
//        that will loop 8 times. Inside the for loop, read the Ultrasonicsensor and display
//        the array index number and distance value on the LCD, then rotate 45 degrees and repeat
//        the sequence?as shown below in the NXT Remote Screen.
//        Define the array and the array index variable:
//               int myArray[8];
//               int  i = 0;
//
//               for( i = 0; i < 8; i++)// loops from 0 to 7, 8 times total
//               {
//                 myArray[i] = SensorValue[Distance];
//                 displayTextLine( "[%d] = %d", i, myArray[i]);
//                 wait1Msec(100);
//                 //rotate ~45 degrees
//                }
//
//         After filling the array. The Bot should be pointing (approximately) in the starting direction?i.e. i = 0 direction.
//         Copy down the eight distance values.
//
//          %%%%  Algorithm    %%%%%
// preprocessor directives
//
// start task main
//
//   define and init. variables
//     start while SensorValue(Touch)==0 loop
//         wait1Msec(1)
//     end while SensorValue(Touch)==0 loop
//   wait1Msec(2000)
//     start for loop from 0 to 7, 8 times total
//        display text
//        wait1Msec(2000)
//        turn 45* to the left
//        set motor C to 0%
//     end For loop
// end task main


task main()// Start task main
{
	int myArray[8];//define int
  int  i = 0;// define int

  while(SensorValue(Touch)==0)// start while SensorValue(Touch)==0 loop
  {
  	wait1Msec(1);// wait1Msec(1)
  }// end while SensorValue(Touch)==0 loop

  wait1Msec(2000);// wait1Msec(2000)

	for(i=0;i<8;i++)// loops from 0 to 7, 8 times total
	{
		myArray[i] = SensorValue[Echo];
    displayTextLine(i, "[%d] = %d", i, myArray[i]);// display text
    wait1Msec(2000);// wait1Msec(2000)
    motor[B]=0;//rotate 45*
	  motor[C]=-75;//rotate 45*
	  wait1Msec(221);//rotate 45*


	  motor[C]=0;//set motor C to 0%

	}// end For loop

}// end task main
