#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
  char * name;
  int yearborn;
  struct Person *next;
};

int main(){
  struct Person *head = NULL;
  int i;

  for (i=0; i<5; i++)
  {
	struct Person *newPerson = malloc(sizeof(*newPerson));
	newPerson -> name = strdup("Josh");
	newPerson -> yearborn = i;
	newPerson -> next = head;
	head = newPerson;
  }


  struct Person *taken_person;
  taken_person = head;
  while (taken_person->next != NULL)
  {

	printf("%d\n", taken_person->yearborn);
	taken_person = taken_person->next;
  }


  int variable = 6;
}
