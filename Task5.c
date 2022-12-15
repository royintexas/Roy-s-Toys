task main()
{
	for(int n=0;n<4;n++)
	{
		// Drive 3 Feet
		nMotorEncoder[motorB] = 0;

		while( nMotorEncoder[motorB] < 1790 )  // adjust degrees
		{
			motor[motorB] = 50;
			motor[motorC] = 50;
		} //while

		motor[motorB] = 0;
		motor[motorC] = 0;

		// Turn 90
		if(n<3)
		{
			nMotorEncoder[motorB] = 0;

			while( nMotorEncoder[motorB] < 380 )   // adjust degrees
			{
				motor[motorB] = 50;
			} //while

			motor[motorB] = 0;
		} //if n<3
	} //for
}
