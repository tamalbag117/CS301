/*Write a menu driven program to implement a stack using array and perform the
following operations.
(a) isF ull() function to check whether the stack is full or not.
(b) isEmpty() function to check whether the stack is empty or not.
(c) peek() function to read the stack top element without deleting it.
(d) push(item) function to insert an element item in the stack.
(e) pop() function to read and remove an element from the stack.
(f) display() function to display the entire stack.*/

#include <stdio.h>
#include <stdlib.h>

int temp, p, p1, v;
struct stack
{
    int size;
    int top;
    int *arr;
};

void isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        printf("Stack is Full");
    }
    else
    {
        printf("Stack is not Full");
    }
}

void isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack is not empty\n");
    }
}

void push(struct stack *ptr, int item)
{
    if (ptr->top == ptr->size - 1)
    {
        printf("Stack is full!! and cannot push %d in the stack\n", item);
    }
    else
    {
        ptr->top = ptr->top + 1;
        ptr->arr[ptr->top] = item;
    }
}

int pop(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("Stack is empty!!\n");
    }
    else
    {
        int data = ptr->arr[ptr->top];
        ptr->top = ptr->top - 1;
        return data;
    }
}

int peek(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("Stack is empty!!");
    }
    else
    {
        int data = ptr->arr[ptr->top];
        return data;
    }
}

void display(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("Stack is empty!!!\n");
    }
    else
    {
        int i;
        printf("The Stack :");
        for (i = ptr->top; i >= 0; i--)
            printf("%d ", ptr->arr[i]);
    }
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    printf("Enter the size of the stack: \n");
    scanf("%d", &sp->size);
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("\n");
    fflush(stdin);

    printf("Enter 1 to check full or not.\nEnter 2 to check whether the stack is empty or not.\n");
    printf("Enter 3 to read the stack top element without deleting it.\nEnter 4 to insert an element item in the stack.\n");
    printf("Enter 5 to read and remove an element from the stack.\nEnter 6 to display the entire stack.\n");

    do
    {
        printf("Enter your choice: ");
        int ch;
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            isFull(sp);
            break;

        case 2:
            isEmpty(sp);
            break;

        case 3:
            p = peek(sp);
            printf("The top element of the stack is %d\n", p);
            break;

        case 4:
            printf("Enter the item to be inserted: \n");
            scanf("%d", &v);
            push(sp, v);
            break;

        case 5:
            p1 = pop(sp);
            printf("The element removed is %d", p1);
            break;

        case 6:
            display(sp);
            break;
        }
        printf("\nEnter y for more choice and any key to exit: \n");
        getchar();
        scanf("%c", &temp);
    } while (temp == 'y');
    return 0;
}