//program to delete  an integer  at nth  position  
//and  also display  the number of shifting  operations.
#include<stdio.h>

int main()
{
    int n,arr[100],k;
    printf("\nEnter the Number of Elemets : ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array :\n");
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    
     printf("\nEnter the Number to be deleted : ");
     scanf("%d",&k);

    int i;
    for(i=0; i<n; i++)
    {
    if(arr[i] == k)
    {
        break;
    }
    }
    int s=0;
    if(i<n)
    {
        n=n-1;
        for(int j=i;j<n;j++)
        {
            arr[j]=arr[j+1];
            s++;
        }
    }

    printf("\nThe New array is : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nThe Number of shifting operations : %d",s);
}
