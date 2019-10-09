
#include<stdio.h>

// Creating a function that has a pointer as argument
char read_name(char *name)
{
	printf("give me a name");	
	scanf("%s", name);	
}

int main()
{
	char str[50];
	//Scanning a String with no space
	scanf("%s", str);		
	printf("my string: %s \n", str);	
	
	// Cleaning my stdin
	getchar();
	
	
	char spaced[50];
	// Scanning a String with spaces
	//fgets(spaced, sizeof(spaced), stdin);	
	read_name(spaced);
	
	printf("%s",spaced);
	
	
	
	return 0;	
}