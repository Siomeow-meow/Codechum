/*
Remove Adjacent Duplicate [STACK]
by Edrian Guanzon

This program removes adjacent duplicate characters from a string. The stack is 
used to process characters one by one, ensuring that whenever two consecutive 
identical characters are encountered, they are removed immediately.


Function Descriptions:

peek() -> returns the top element of the stack without removing it. It is used to check the most recently inserted character in the stack before deciding whether to push a new character or remove a duplicate.
removeDuplicates() -> processes the input string character by character and removes all adjacent duplicate characters using a stack.
-------------------------------
Sample Output 1

Enter a string: abbaca
Result (stack): ca
-------------------------------
Sample Output 2

Enter a string: aabccba
Result (stack): a
-------------------------------
Sample Output 3

Enter a string: abba
Stack is empty
-------------------------------
*/

#include <stdio.h>
#include "stack.h"

int main() {
    char str[MAX];
    Stack s;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);   // reads full line with spaces

    removeDuplicates(str, &s);
    displayStack(&s);

    return 0;
}