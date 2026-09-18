#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

/* ================= INITIALIZE ================= */
void initialize(Queue *q) {
    q->front = q->rear = NULL;
}

/* ================= ENQUEUE ================= */
void enqueue(Queue *q, Employee emp) { //insertLast
    
    List newNode = (List)malloc(sizeof(struct node));
    newNode->data = emp;
    newNode->next = NULL;
    
    //checks if list is empty
    if(q->rear == NULL){
        q->front = q->rear = newNode;
    }
    //if not empty
    else{
        q->rear->next = newNode;
        q->rear = newNode;
    }
    
}

/* ================= DEQUEUE ================= */
void dequeue(Queue *q) { //deleteFirst
    // if queue empty
    if(q->front == NULL) return;
    
    List temp = q->front;
    q->front = q->front->next;
    free(temp);
    
}

/* ================= ENQUEUE SORTED ================= */
void enqueueSorted(Queue *q, Employee emp) {
    
    Queue temp;
    initialize(&temp);
    
    
    
    
}