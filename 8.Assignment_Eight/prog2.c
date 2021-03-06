#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
     int data;
     struct node *next;
     struct node *prev;
}node;
struct node *t = NULL;

void display (node *head)
{
     node *temp = head;
     if (head == NULL)
     {
          printf("\n The Linked List is empty!!!!");
     }
     else
     {
          printf("\n The linked list is displaying ::  ");
          while (temp != t)
          {
               printf("\t %d", temp -> data);
               temp = temp -> next;
          }
          printf("\t %d", temp -> data);
     }
}
node *insert_at_last(node *head)
{
     node *p = NULL;
     int a;
     p = (node *)malloc(sizeof(node));
     printf("\n Enter the data ::  ");
     scanf("%d", &a);
     p -> data = a;
     p -> next = NULL;
     p -> prev = NULL;
     if (head == NULL)
     {
          head = p;
          t = p;
          p -> next = head;
          t -> prev = head;
     }
     else
     {
          t -> next = p;
          p -> prev = t;
          t = p;
          t -> next = head;
          head -> prev = t;
     }
     return head;
}
node *insert_at_beginning(node *head)
{
     node *p = NULL;
     int a;
     p = (node *)malloc(sizeof(node));
     printf("\n Enter the data ::  ");
     scanf("%d", &a);
     p -> data = a;
     p -> next = NULL;
     p -> prev = NULL;
     if (head == NULL)
     {
          head = p;
          t = p;
          p -> next = head;
          t -> prev = head;
     }
     else
     {
           p -> next = head;
           head -> prev = p;
           head = p;
           head -> prev = t;
           t -> next = head;
     }
     return head;
     
}
node *create(node *head)
{
     int n, a;
     printf("\n Enter the number of nodes ::  ");
     scanf("%d", &n);
     node *newnode = NULL;
     //node *t;
     //t = NULL;
     for (int i = 0; i < n; i ++)
     {
          newnode = (node *)malloc(sizeof(node));
          printf("\n Enter the data :: ");
          scanf("%d", &a);
          newnode -> data = a;
          newnode -> next = NULL;
          newnode -> prev = NULL;
          if (head == NULL)
          {
                head = newnode;
                t = head;
                t -> next = head;
                t -> prev = head;
          }
          else
          {
                t -> next = newnode;
                newnode -> prev = t;
                t = newnode;
                t -> next = head;
                head -> prev = t;
          }
     }
     return head;
}
int main()
{
     int ch, y;
     node *head = NULL;
     head = create(head);
     do
     {
           printf("\n Enter 1 to insert at beginning");
           printf("\n Enter 2 to insert at last");
           printf("\n Enter 3 to display");
           printf("\n Enter your choice :: \n");
           scanf("%d", &ch);
           switch (ch)
           {
                case 1 : head = insert_at_beginning(head);
                         break;
                case 2 : head = insert_at_last(head);
                         break;
                case 3 : display(head);
                         break;
                default : printf("\n WRONG CHOICE ");                           
           }
           printf("\n Do you wanna coninue ???? Yes, Press -> 1 else press -> 0::  ");
           scanf("%d", &y);
     }while (y == 1);
}