#include <stdio.h>
int main()
{
	int i = 0;
	int current = 1;
	int previous = 0;
	
	printf("F[0] = %d \n", previous);
	printf("F[1] = %d \n", current);

	for(i = 2; i <= 20; i++)
	{
	    current += previous;
		previous = current - previous;
		printf("F[%d] = %d\n", i, current);
	}
	
}