/*Write a  C program to insert  an integer  at nth  position  and  
also display  the number of shifting  operations.*/

#include<stdio.h>

int main()
{
    int n,k,pos;
    int arr[100]={0};
    printf("\nEnter the Number of Elemets : ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array :\n");
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    
     printf("\nEnter the Number to be inserted : ");
     scanf("%d",&k);
     printf("\nEnter the Position at which the Number is to be inserted : ");
     scanf("%d",&pos);

     n=n+1;
     int s=0;

    for(int i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
        s++;
    }

    arr[pos-1]=k;
    printf("\nThe New array is : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nThe Number of shifting operations : %d",s-1);
}
