#include "Sound.h"
#include <iostream>
#include <Windows.h>
#include <MMSystem.h>

//#include <CFuguelib.h>

using namespace std;
//Sound should be able to choose which sounds to play based on the following information: Shape, and position on x and y axis.
//cannot simply use strings to find file names because the PlaySound function is shit. Creates error with TEXT()



class Sound {
public:

	int track[4][2] = { { 1, 1 },
	{ 1, 2 },
	{ 1, 3 },
	{ 1, 4 }, };


	void checkSound(int shape, int pitch) {

		if (shape == 1) {
			switch (pitch) {
			case 1:
				PlaySound(TEXT("W1.wav"), NULL, SND_SYNC);
				break;
			case 2:
				PlaySound(TEXT("W2.wav"), NULL, SND_SYNC);
				break;
			case 3:
				PlaySound(TEXT("W3.wav"), NULL, SND_SYNC);
				break;
			case 4:
				PlaySound(TEXT("W4.wav"), NULL, SND_SYNC);
				break;
			case 5:
				PlaySound(TEXT("W5.wav"), NULL, SND_SYNC);
				break;
			case 6:
				PlaySound(TEXT("W6.wav"), NULL, SND_SYNC);
				break;
			case 7:
				PlaySound(TEXT("W7.wav"), NULL, SND_SYNC);
				break;
			case 8:
				PlaySound(TEXT("W8.wav"), NULL, SND_SYNC);
				break;
			case 9:
				PlaySound(TEXT("W9.wav"), NULL, SND_SYNC);
				break;
			default:
				break;
			}
		}
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		if (shape == 2) {
			switch (pitch) {
			case 1:
				PlaySound(TEXT("H1.wav"), NULL, SND_SYNC);
				break;
			case 2:
				PlaySound(TEXT("H2.wav"), NULL, SND_SYNC);
				break;
			case 3:
				PlaySound(TEXT("H3.wav"), NULL, SND_SYNC);
				break;
			case 4:
				PlaySound(TEXT("H4.wav"), NULL, SND_SYNC);
				break;
			case 5:
				PlaySound(TEXT("H5.wav"), NULL, SND_SYNC);
				break;
			case 6:
				PlaySound(TEXT("H6.wav"), NULL, SND_SYNC);
				break;
			case 7:
				PlaySound(TEXT("H7.wav"), NULL, SND_SYNC);
				break;
			case 8:
				PlaySound(TEXT("H8.wav"), NULL, SND_SYNC);
				break;
			case 9:
				PlaySound(TEXT("H9.wav"), NULL, SND_SYNC);
				break;
			default:
				break;
			}
		}
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		if (shape == 3) {
			switch (pitch) {
			case 1:
				PlaySound(TEXT("Q1.wav"), NULL, SND_SYNC);
				break;
			case 2:
				PlaySound(TEXT("Q2.wav"), NULL, SND_SYNC);
				break;
			case 3:
				PlaySound(TEXT("Q3.wav"), NULL, SND_SYNC);
				break;
			case 4:
				PlaySound(TEXT("Q4.wav"), NULL, SND_SYNC);
				break;
			case 5:
				PlaySound(TEXT("Q5.wav"), NULL, SND_SYNC);
				break;
			case 6:
				PlaySound(TEXT("Q6.wav"), NULL, SND_SYNC);
				break;
			case 7:
				PlaySound(TEXT("Q7.wav"), NULL, SND_SYNC);
				break;
			case 8:
				PlaySound(TEXT("Q8.wav"), NULL, SND_SYNC);
				break;
			case 9:
				PlaySound(TEXT("Q9.wav"), NULL, SND_SYNC);
				break;
			default:
				break;
			}
		}
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		if (shape == 4) {
			switch (pitch) {
			case 1:
				PlaySound(TEXT("E1.wav"), NULL, SND_SYNC);
				break;
			case 2:
				PlaySound(TEXT("E2.wav"), NULL, SND_SYNC);
				break;
			case 3:
				PlaySound(TEXT("E3.wav"), NULL, SND_SYNC);
				break;
			case 4:
				PlaySound(TEXT("E4.wav"), NULL, SND_SYNC);
				break;
			case 5:
				PlaySound(TEXT("E5.wav"), NULL, SND_SYNC);
				break;
			case 6:
				PlaySound(TEXT("E6.wav"), NULL, SND_SYNC);
				break;
			case 7:
				PlaySound(TEXT("E7.wav"), NULL, SND_SYNC);
				break;
			case 8:
				PlaySound(TEXT("E8.wav"), NULL, SND_SYNC);
				break;
			case 9:
				PlaySound(TEXT("E9.wav"), NULL, SND_SYNC);
				break;
			default:
				break;
			}
		}
	}

	void musicPlayer() {
		for (int i = 0; i <= sizeof(track); i++) {
			checkSound(track[i][0], track[i][1]);
		}
		//Resetting Array, so as not to keep wrong data for next time. Array should be filled each time user plays play.
		for (int i = 0; i <= sizeof(track); i++) {
			track[i][0] = 0;
			track[i][1] = 0;
		}
	}
};


