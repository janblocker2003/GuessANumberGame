#include <studio.h>
#include <stdlib.h>
#include <time/h>

int main(){
	char userName[20];
	int guess = 0;
	srand(time(NULL));
	int correct = (rand() % 100) +1;
