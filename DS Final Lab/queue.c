#include<stdio.h>   
#include<stdlib.h>  
#define maxsize 5  
void insert();  
void delete();  
void display();  
int front = -1, rear = -1;  
int queue[maxsize];  
void main () {  
    int choice;   
    while(choice != 4) {     
        printf("\n*************************Main Menu*****************************\n");  
        printf("\n=================================================================\n");  
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");  
        printf("\nEnter your choice ?");  
        scanf("%d",&choice);  
        switch(choice) {  
            case 1:  
            insert();  
            break;  
            case 2:  
            delete();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            printf("\nEnter valid choice??\n");  
        }  
    }  
}  
void insert() {  
    int item;  
    printf("\nEnter the element\n");  
    scanf("\n%d",&item);      
    if(rear == maxsize-1) {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    if(front == -1 && rear == -1) {  
        front = 0;  
        rear = 0;  
    }  
    else {  
        rear++;  
    }  
    queue[rear] = item;  
    printf("\nValue inserted ");  
      
}  
void delete() {  
    int item;   
    if (front == -1 || front > rear) {  
        printf("\nUNDERFLOW\n");  
        return;  
              
    }  
    else {  
        item = queue[front];  
        if(front == rear) {  
            front = -1;  
            rear = -1 ;  
        }  else {  
            front++;  
        }  
        printf("\nvalue deleted ");  
    }  
}  
      
void display() {  
    int i;  
    if(rear == -1)   {  
        printf("\nEmpty queue\n");  
    }  
    else {   
        printf("\nprinting values .....\n");  
        for(i = front; i <= rear; i++)   {  
            printf("\n%d\n", queue[i]);  
        }     
    }  
}  

/*

Enqueue: Add an element to the end of the queue.
Dequeue: Remove and return the front element from the queue.
Front (or Peek): Return the front element without removing it from the queue.
isEmpty: Check if the queue is empty.
Size: Get the number of elements in the queue.
*/