#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main(){
	int seed;
	srand((int)time(NULL));
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", rand() % 100);
	}
}
