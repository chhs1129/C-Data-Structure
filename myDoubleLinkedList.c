#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct DLinkedList{
    struct DLinkedList *next;
    struct DLinkedList *prev;
    int value;
} DDL;

int main(){
    DDL head, *pre, *temp;

    head.value = -1;
    head.next = &head;
    head.prev = &head;
    pre = &head;

    for(int i = 0; i < 3; i++){
        temp = (DDL*) malloc(sizeof(DDL));
        temp -> value = i;

        temp -> next = &head;
        head.prev = temp;

        temp -> prev = pre;
        pre -> next = temp;

        pre = temp;
    }
    
  // print from beginning
    temp = head.next;								
	while (temp != &head) {							
		printf("forward list item: current is %p; next is %p; prev is %p; data is %d\n", temp, temp->next, temp->prev, temp->value);
		temp = temp->next;												
	}

	// print from backwards
	temp = head.prev;								
	while (temp != &head) {							
		printf("backward list item: current is %p; next is %p; prev is %p; data is %d\n", temp, temp->next, temp->prev, temp->value);
		temp = temp->prev;												
	}

    return 0;
}
