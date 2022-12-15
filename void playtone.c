void playTone();

task main()
{
	playTone();
}

void playTone()// start playTone user function
{
	int tone = 200;// initialize variable to 2 kHz


	for(tone = 2000; tone < 4000; tone+=100)//initializes sound at 2000Hz, with 20 increases of 100Hz reaching 3900Hz
	{
		playTone(tone,10);//play a 2Hz tone for 100 msecs
		while(bSoundActive)//while
		{sleep(1);}//wait for tone to play
	}//end for
} //end playTone User function

// UserFunction playsounds Algorithm
// user function play sounds - returns void - nothing happens
// use a for loop
// user function play 20 tones starting at 2000 Hz and increasing 100 Hz each loop
// each tone will play for 100 mSec
