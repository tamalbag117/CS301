/*Write a menu driven program in C or C++ to implement a Queue using array and
perform the following operations.
(a) isF ull() function to check whether the Queue is full or not.
(b) isEmpty() function to check whether the Queue is empty or not.
(c) insert(item) function to insert an element item in the Queue.
(d) delete() function to read and remove an element from the Queue.
(e) display() function to display the entire Queue.*/

#include <stdio.h>
#include <stdlib.h>
#define size 5

int arr[size];
int rear=-1;
int front=-1;
int temp;
int item;

void isFull()
{
    if (rear==size-1)
    {
        printf("Queue is Full!!!\n");
    }
    else
    {
        printf("Queue is not Full\n");
    }
}

void isEmpty()
{
    if (rear==front)
    {
        printf("Queue is Empty!!!\n");
    }
    else
    {
        printf("Queue is not Empty\n");
    }
}

void insert(int item)
{
    if (rear==size-1)
    {
        printf("Queue is Full!!!!\n");
        return;
    }
    else
    {
        rear=(rear+1);
        arr[rear]=item;
    }
}

int delete ()
{
    if (rear==front)
    {
        printf("Queue Empty!!!\n");
        return INT_MIN;
    }
    else
    {
        front = front + 1;
        int item = arr[front];
        return item;
    }
}

void display()
{
    if (rear==front)
    {
        printf("Queue Empty!!!\n");
        return;
    }
    else
    {
        int i;
        for (i=front+1; i<=rear; i++)
        {
            printf("%3d", arr[i]);
        }
    }
    printf("\n");
}

int main()
{
	printf("\n");
        printf("Enter 1 to check  the queue full or not.\nEnter 2 to check whether the queue is empty or not.\n");
        printf("Enter 3 to insert an element item in the queue.\nEnter 4 to delete an element from the queue.\n");
        printf("Enter 5 to display the entire queue.\n");
        do{
        printf("Enter your choice: \n");
        int ch;
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            isFull();
            break;

        case 2:
            isEmpty();
            break;
        case 3:
            printf("Enter the element to be inserted: \n");
            scanf("%d", &item);
            insert(item);
            break;
        case 4:
            item = delete ();
            if (item != INT_MIN)
            {
                printf("Deleted item is = %d", item);
            }
            break;
        case 5:
            display();
            break;
        default:
            exit(1);
        }
        printf("\nEnter 0 for more choice and any key to exit: \n");
        getchar();
        scanf("%c", &temp);
    } while (temp == '0');
    return 0;
}