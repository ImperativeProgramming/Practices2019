#include <stdio.h>

int main()
{
	int i; // i stands for "index" 
	/*
		< smaller
		> Greater
		!= different
		== equal
		<= smaller or equal
		>= greater or equal 
	*/
	
	// Give 0 to i, while it is smaller than 10 add 1
	// i++ is the same as i=i+1
	for(i=10; i<10; i++)
	{
		int j = i + 10;
		printf("heeellooo %i + 10 = %i \n", i, j);
	}
	
	
	
	return 0;
}