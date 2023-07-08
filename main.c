#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 10

typedef struct {

    int front, rear;
    int nodes[size];
}Queue;

void init(Queue *queue);
void push(Queue *queue, int node);
void display(Queue *queue);
void pop(Queue *queue);

void init(Queue *queue){

    queue->front = -1;
    queue->rear = -1;
    return ;
};

void push(Queue *queue, int node){

    if (queue->front == -1 && queue->rear == -1){

        queue->front = 0 ;
        queue->rear = 0;
    }
    if (queue->rear == queue->front -1 || (queue->front == 0 && queue->rear == size - 1)){
        
        printf("Hang doi day\n");
    }
    if  (queue->rear == size - 1){
    
        queue->rear = 0;
    }
    queue->nodes[queue->rear] = node;
    queue->rear ++;
    return ;
};

void pop(Queue *queue){

    if (queue->front == -1 && queue->rear == -1){

        printf("hang doi rong\n");
        //queue->rear == -1;
        //queue->front == -1;
    }
    if (queue->front == size){
        
        queue->front = 0;
    }
    printf("Lay ra so hang thu %d la: %d\n", queue->front, queue->nodes[queue->front]);
    queue->nodes[queue->front] = 0;
    queue->front ++;
    return ;
};

void display(Queue *queue){

    for (int i = 0; i < size; i++)
    {
        printf(" so hang thu % d la %d\n",i + 1 ,queue->nodes[i]);
    }
    printf("front: %d\n",queue->front);
    printf("rear: %d\n",queue->rear);
}
int main() {
    Queue queue;
    init(&queue);
    push(&queue, 6);
    push(&queue, 10);
    push(&queue, 2);
    push(&queue, 3);
    push(&queue, 1);
    push(&queue, 12);
    push(&queue, 8);
    push(&queue, 7);
    push(&queue, 19);
    pop(&queue);
    push(&queue, 1);
    pop(&queue);
    display(&queue);
    return 0;
}
