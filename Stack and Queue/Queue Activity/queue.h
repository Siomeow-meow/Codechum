#ifndef QUEUE_H
#define QUEUE_H

typedef struct{
    int id;
    char name[300];
} Employee;

typedef struct node{
    Employee data;
    struct node *next;
} *List;

typedef struct{
    List front;
    List rear;
} Queue;

/* Function Prototypes */
void initialize(Queue *q);
void enqueue(Queue *q, Employee emp);
void dequeue(Queue *q);
void display(Queue *q);
void enqueueSorted(Queue *q, Employee emp);

#endif