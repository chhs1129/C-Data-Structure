#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listitem {
	struct listitem *next;		// pointer to next item
	int data;					// some data
} LISTITEM;


int main() {
/*
  //Add to Back
	LISTITEM listhead, *temp, *prev;

	listhead.data = -1;
	listhead.next = NULL;
	prev = &listhead;

	for(int i = 0; i < 3; i++)
	{
		temp = (LISTITEM*) malloc(sizeof(LISTITEM));
		prev -> next = temp;
		temp -> data = i;
		prev = temp;
	}
  	temp = (listhead.next);								
	while (temp != NULL) {							
		printf("list item: \n\tcurrent is %p\n\tnext is %p\n\tdata is %d\n", temp, temp->next, temp->data);
		temp = temp->next;									
	}
*/
	
/*
  //Add to Front
  LISTITEM *listhead, *temp;
	listhead = NULL;

	for (int i = 0; i < 3; i++) {
		temp = malloc(sizeof(LISTITEM));			
		temp->data = i;								
		temp->next = listhead;						
		listhead = temp;						
	}


	temp = listhead;								
	while (temp != NULL) {							
		printf("list item: \n\tcurrent is %p\n\tnext is %p\n\tdata is %d\n", temp, temp->next, temp->data);
		temp = temp->next;									
	}
*/
	

  
	return 0;
}
