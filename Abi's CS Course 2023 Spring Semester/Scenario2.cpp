#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

	/* While studying you are working to stay rested on a regular basis. Using the application to decided if it is your bedtime yet.
	* If the time is either past 12 AM or PM and your energy level is below 5 and it is dark outside: It is bedtime!
	* if your current mindset is "Please sleep now" and it is dark outside; It is bedtime!
	* If your mindset is "Wait 1 hour then go to bed" and it is not too dark outside or your engery level is less than 5.5: "It is not your bedtime yet"
	* Create 2 extra scenarios with this data:
	
	*/

	int currentTime = 12;
	double energyPower = 5.5;
	char mindset;
	char currentMindset[20] = "Please sleep now";
	char previousMindset[30];
	int darknessLevel = 7;

	printf("On a number scale of 1-12, eneter the time of day, disregarding AM or PM\n");
	scanf_s(" %d", &currentTime);

	printf("On a scale of 0.0 to 10.0, enetr your energy level\n");
	scanf_s(" %lf", &energyPower);

	printf("On a scale of 1 to 15, enetr how dark it is outside currently\n");
	scanf_s(" %d", &darknessLevel);

	printf("Choose a or b:\n ");
	printf("Is your mindset : a) Please sleep now or b) Wait 1 hour then go to bed\n");
	scanf_s(" %c", &mindset);
		if (mindset == 'a' || mindset == 'A') {
			currentMindset == "Please sleep now";
		}
		else if (mindset == 'b' || mindset == 'B') {
			previousMindset == "Wait 1 hour then go to bed";
		}
	

	if(currentTime >= 12 && energyPower < 5 && darknessLevel >= 7 ){
	printf("It is bedtime!");
	}
	if (currentTime < 12 && energyPower > 5 && darknessLevel < 7) {
		printf("It is not your bedtime yet");
	}
	else if(strcmp(currentMindset, "Please sleep now") == 0 && darknessLevel > 7) {
		printf("It is bedtime!");
	}
	else if (strcmp(previousMindset, "Wait 1 hour then go to bed") == 0 && darknessLevel <= 7 || energyPower < 5.5) {
		printf("It is not your bedtime yet");
	}
	else if (strcmp(previousMindset, "Wait 1 hour then go to bed") == 0 && darknessLevel <= 7 || currentTime >= 12) {
		printf("It is not your bedtime yet");
	}
	else if (strcmp(currentMindset, "Please sleep now") == 0 && darknessLevel >= 7 || energyPower > 5.5) {
		printf("It is not your bedtime yet");
	}
	else if (strcmp(currentMindset, "Please sleep now") == 0 && darknessLevel > 7 || currentTime <= 12) {
		printf("It is not your bedtime yet");
	}

	return 0;
}
