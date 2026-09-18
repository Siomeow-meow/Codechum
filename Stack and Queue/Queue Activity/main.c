/*
Queue Activity
by Edrian Guanzon

Create the following functions:

initialize() -> initializes the queue to empty
enqueue() -> inserts a new employee to the queue
dequeue() -> deletes an employee from the queue
enqueueSorted() -> given a queue sorted in ascending order, insert a new employee in the correct position
Sample Output 1

ID: 10 | Name: Alice
ID: 20 | Name: Bob
ID: 30 | Name: Charlie
----------------------------------------------------------
ID: 20 | Name: Bob
ID: 30 | Name: Charlie
----------------------------------------------------------
ID: 15 | Name: Alpha
ID: 20 | Name: Bob
ID: 25 | Name: Tango
ID: 30 | Name: Charlie
ID: 40 | Name: Lima
--------------------------------------------------------
*/

#include <stdio.h>
#include "queue.h"   // IMPORT HEADER FILE

/* ================= DISPLAY ================= */
void display(Queue *q) {
    if (q->front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    List temp = q->front;

    while (temp != NULL) {
        printf("ID: %d | Name: %s\n",
            temp->data.id, temp->data.name);
        temp = temp->next;
    }
}

int main() {
    Queue q;
    initialize(&q);

    Employee e1 = {10, "Alice"};
    Employee e2 = {20, "Bob"};
    Employee e3 = {30, "Charlie"};

    enqueue(&q, e1);
    enqueue(&q, e2);
    enqueue(&q, e3);

    display(&q);
    printf("%s", "----------------------------------------------------------\n");

    dequeue(&q);
    display(&q);
    printf("%s", "----------------------------------------------------------\n");

    Employee e4 = {40, "Lima"};
    Employee e5 = {15, "Alpha"};
    Employee e6 = {25, "Tango"};

    enqueueSorted(&q, e4);
    enqueueSorted(&q, e5);
    enqueueSorted(&q, e6);

    display(&q);
    printf("%s", "----------------------------------------------------------\n");

    return 0;
}