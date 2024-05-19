#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Error: Stack overflow!\n");
        return;
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Error: Stack underflow!\n");
        return -1;
    }
    return stack[top--];
}

int main() {
    int choice, value;

    while (1) {
        printf("1. Push\n2. Pop\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                value = pop();
                if (value != -1) {
                    printf("Popped value: %d\n", value);
                }
                break;

            case 3:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

/*
Push: Add an element to the top of the stack.
Pop: Remove and return the top element from the stack.
Peek (or Top): Return the top element without removing it from the stack.
isEmpty: Check if the stack is empty.
*/