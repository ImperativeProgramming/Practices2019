#include <stdio.h>

int main()
{
	// Here I'm declaring my first array
	int numbers[5];
	
	// I'm filling up my array
	numbers[0] = 123;
	numbers[1] = 13;
	numbers[2] = 3;
	numbers[3] = 1;
	
	
	int i;
	for (i=0; i<5; i++)
	{
		scanf("%d", &numbers[i]);
	}
	
	
	
	// CREATE A LOOP THAT PRINTS OUT ALL THE 5 ELEMENTS
	for(i = 0; i<5; i++)
	{
		printf("%d \n", numbers[i]);
	}
	//printf("%d \n", numbers[4]);
	
	
}