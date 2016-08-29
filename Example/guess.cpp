#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main(){

	int currTime = time(NULL);

	srand(currTime);

	int answer = rand();
	answer = answer%10;

	printf("Make a guess from  0 to 9\n");

	int* guess = (int*)malloc(sizeof(int));

	scanf("%d", guess);

	printf("Guess is %d, Answer is %d", *guess, answer);
	printf("\n");

	return 0;
}
