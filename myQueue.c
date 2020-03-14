#include <stdlib.h>
#include <stdio.h>


typedef struct queue{
    struct queue* prev;
    struct queue* next;
    int value;
} QUEUE;


void enqueue(QUEUE *q, int num){
    QUEUE *fast = q->next, *pre = q;
    while(fast!=q){
        fast = fast -> next;
        pre = pre -> next;
    }
    QUEUE *temp = (QUEUE*) malloc(sizeof(QUEUE));
    q -> prev = temp;
    temp -> next = q;
    temp -> value = num; 
    temp -> prev = pre;
    pre -> next = temp;
    
}

int dequeue(QUEUE *q){
    QUEUE *temp = q -> next;
    int res = temp -> value;
    temp -> prev -> next = temp -> next;
    temp -> next -> prev = temp -> prev;
    free(temp);
    return res;
}

void displayQueue(QUEUE *q){
    QUEUE *temp = q->next;
    printf("Queue = ");
    while(temp!=q){
         printf("%d -> ",temp->value);
         temp = temp -> next;
    }
    printf("NULL\n");
}
int main(){
    QUEUE myQueue;
    myQueue.next = &myQueue;
    myQueue.prev = &myQueue;
    myQueue.value = -1;

    enqueue(&myQueue,1);
    enqueue(&myQueue,2);
    enqueue(&myQueue,3);
    displayQueue(&myQueue);
    int a = dequeue(&myQueue);
    printf("the value dequeued = %d \n",a);
    displayQueue(&myQueue);
    enqueue(&myQueue,4);
    displayQueue(&myQueue);
}
