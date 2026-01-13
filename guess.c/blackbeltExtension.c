#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define kR "\x1b[5;30;41m"
#define kG "\x1b[5;30;42m"
#define rs "\x1b[0m"
#define COLOR_BOLD  "\e[1m"
#define COLOR_OFF   "\e[m"

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
		printf(kG COLOR_BOLD "  WOW! You did great!  "COLOR_OFF  rs "\n");
	}
	else if (turns > 7){
		printf(kR COLOR_BOLD "  You did okay. Try harder next time...  " COLOR_OFF rs "\n");
	}
	else {
		printf(COLOR_BOLD "  You did good... pretty average... but good!  " COLOR_OFF rs "\n");
	}
	return 0;
} // end main 
