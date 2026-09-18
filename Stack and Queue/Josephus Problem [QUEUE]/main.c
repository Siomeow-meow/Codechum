/*
Josephus Problem [QUEUE]
by Edrian Guanzon

The Josephus Problem is a classical problem based on a circular elimination process. 
In this problem, a group of n people is arranged in a circle. 
Starting from a fixed position, every k-th person is eliminated from the circle repeatedly 
until only one person remains. The goal is to determine the position of the last surviving person.

Function Description:

rotate() -> moves the front element of the circular queue to the rear. It simulates a single step of circular traversal in the Josephus problem.
josephus() -> solves the Josephus problem using a circular queue by simulating the elimination process.

All n people are inserted into the circular queue.
The queue is rotated k-1 times using the rotate() function.
The k-th person (front element) is removed from the queue.
Steps 2–3 are repeated until only one element remains.
Steps:
-------------------------------
Sample Output 1

Enter number of people: 7
Enter step size: 3
Eliminated: 3
Eliminated: 6
Eliminated: 2
Eliminated: 7
Eliminated: 5
Eliminated: 1
Survivor: 4
-------------------------------
Sample Output 2

Enter number of people: 5
Enter step size: 2
Eliminated: 2
Eliminated: 4
Eliminated: 1
Eliminated: 5
Survivor: 3
-------------------------------
Sample Output 3

Enter number of people: 6
Enter step size: 1
Eliminated: 1
Eliminated: 2
Eliminated: 3
Eliminated: 4
Eliminated: 5
Survivor: 6
*/

#include <stdio.h>
#include "queue.h"

int main() {
    int n, k;

    printf("Enter number of people: ");
    scanf("%d", &n);

    printf("Enter step size: ");
    scanf("%d", &k);

    int survivor = josephus(n, k);

    printf("Survivor: %d\n", survivor);

    return 0;
}