#include<stdio.h>


#define MAX 100
int stack[MAX];
int top = -1;


void push() {
    printf("Enter the value to push into stack : ");
    int value; scanf("%d", &value);
    if (top == MAX - 1) {
        printf("Stack Overflow.\n");
        return;
    }
    top++;
    stack[top] = value;
    printf("Value pushed into the stack");
}

void pop() {
    if (top == -1) {
        printf("\n\nStack Underflow.\n");
        return;
    }
    top--;
    printf("\n\n\nValue popped from the top\n\n");
}

void display_stack() {
    if (top == -1) {
        printf("\nThe stack is empty!!!\n");
        return;
    }
    printf("---------------------------------------");
    printf("\nDisplaying the values of stack.\n");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
    printf("---------------------------------------");
}
int main () {
    int choice;

    while (1) {
        printf("\n 1. Push \n 2. Pop \n 3. Display \n 4. Exit the program \n\n");
        printf("Enter your choices : ");

        scanf("%d", &choice);

        if (choice == 1) {
            push();
        } else if (choice == 2) {
            pop();
        } else if (choice == 3) {
            display_stack();
        } else if (choice == 4) {
            printf("Program terminated.\n");
            break;
        } else {
            printf("\n\nEnter a valid choice.....\n");
        }
    }
    return 0;
}
