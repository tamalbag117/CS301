/*
Question :
Write a program to find the post-order, 
in-order traversal sequence of a Binary Tree.

*/
#include <stdio.h>
#include <stdlib.h>


typedef struct record
{
    struct record *left;    
    int value;
    struct record *right;
}TREENODE;

TREENODE *root=NULL;

void prompt()
{
    printf("\n-----------------------------------------------------------------");
    printf("\n Press 1) to insert a new node to the binary tree                ");
    printf("\n Press 2) to display the inorder traversal of the binary tree    ");
    printf("\n Press 3) to display the postorder traversal of the binary tree  ");
    printf("\n Press 0) to exit                                                ");
    printf("\n-----------------------------------------------------------------");
}

void insert(int data)
{
    TREENODE *temp,*curr,*parent;
    temp=(TREENODE*)malloc(sizeof(TREENODE));
    temp->left=NULL;
    temp->value=data;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
        return;
    }
    curr=root;
    while(curr!=NULL)
    {
        parent=curr;
        if(data>curr->value)
            curr=curr->right;
        else if(data<curr->value)
            curr=curr->left;
    }
    if(data>parent->value)
        parent->right=temp;
    else if(data<parent->value)
        parent->left=temp;
}

void printInOrder(TREENODE* node)
{
	if(node!=NULL)
	{
    	printInOrder(node->left);
    	printf("%d\n",node->value);
    	printInOrder(node->right);
	}
}
void printPostOrder(TREENODE* node)
{
	if(node!=NULL)
	{
    	printPostOrder(node->left);
    	printPostOrder(node->right);
    	printf("%d\n",node->value);
	}
}   
int main()
{
    int choice,data;
    do
    {
        prompt();
        printf("\nEnter choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0: exit(0);
            case 1: printf("\nEnter data: ");
                    scanf("%d",&data);
                    insert(data);
                    break;
            case 2: puts("\nInorder traversal of Binary Tree...");
	                printInOrder(root);
                    break;
            case 3: puts("\nPostorder traversal of Binary Tree...");
	                printPostOrder(root);
                    break;
            default: printf("\nEnter a valid choice...");
        }
    }
    while(choice!=0);
    
	return 0;
}