/*Write a menu driven program in C or C++ to implement a queue using single
linked list and perform the following operations.
(a) isEmpty() is to check whether the queue is empty or not.
(b) push() is to insert an item in the queue.
(c) pop() is to delete an item from the queue.
(d) display() is to show the entire queue.*/

// Queue using list
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *rear = NULL, *front = NULL;

struct Node *newNode(int item)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = item;
    ptr->next = NULL;
}

void push(int item)
{
    struct Node *curr = newNode(item);
    if (rear == NULL)
    {
        rear = front = curr;
        return;
    }
    rear->next = curr;
    rear = curr;
}

void pop()
{
    if (front == NULL)
    {
        printf("List is empty!!!\n");
        return;
    }
    if (front->next == NULL)
    {
        printf("Deleted item is %d\n", front->data);
        free(front);
        front = rear = NULL;
        return;
    }
    struct Node *temp = front;
    front = front->next;
    printf("Deleted item is %d\n", temp->data);
    free(temp);
}

void display()
{
    struct Node *temp = front;
    // if the list is empty
    if (temp == NULL)
    {
        printf("List is empty!!\n");
        return;
    }
    while (temp != NULL) 
    {
        printf("%3d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int t, p;
    while (1)
    {
        printf("\n");
        printf("Enter 1 to push\n");
        printf("Enter 2 to pop\n");
        printf("Enter 3 to display\n");
        printf("Enter 4 to exit\n");
        printf("\n");
        printf("Enter your choice--> ");
        scanf("%d", &t);
        switch (t)
        {
        case 1:
            printf("Enter the item-->");
            scanf("%d", &p);
            push(p);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }

    return 0;
}