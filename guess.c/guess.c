#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	char userName[20];
	int guess = 0;
	srand(time(NULL));
	int correct = (rand() % 100) +1;
	int keepGoing = -1;
	int turns = 0;

	printf("Howdy! What's your name? ");
	scanf("%s", userName);
	printf("We are going to play a number guessing game, %s \n", userName);

	while (keepGoing){
		turns++;
		printf("turn %d: Enter your guess: ", turns);
		scanf("%d", &guess);

		if (guess < correct){
			printf("Your guess is too low!\n");
		}
		else if (guess > correct){
			printf("Your guess is too high!\n");
		}
		else {
			printf("You guessed right!\n");
			keepGoing = 0;
		} // end the ifs
	} //end the while
	if (turns < 7){
		printf("WOW! You did great!\n");
	}
	else if (turns > 7){
		printf("You did okay. Try harder next time\n");
	}
	else {
		printf("You did good... pretty average... but good!\n");
	}
	return 0;
} // end main 
