task main()
{

	for(int n=0;n<3;n++)
	{
		//Drive halfway down
		motor[motorB] = 50;     // motorA at 50% power
		motor[motorC] = 50;     // motorB at 50% power

		wait1Msec(3650);        // program stop here for 2 seconds

		motor[motorB] = 0;      // motorA at 0% power (Off)
		motor[motorC] = 0;      // motorB at 0% power (Off)

		if (n<2)
		{
			// Turn 90 Degrees
			motor[motorB] = 30;     // motorA at 30% power

			wait1Msec(1350);        // program waits here for 1 seconds

			motor[motorB] = 0;      // motorA at 0% power (Off)
		} //if

	} //for

  return;

}
