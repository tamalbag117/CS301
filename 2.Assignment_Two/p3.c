#include<stdio.h>
int main()
{
    int arr[50],n,i,j,temp,k;
    printf("enter the number of element in array : ");
    scanf("%d",&n);
    printf("enter the elements of the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++){
    int swaps=0;
    for(int j=0; j<n-i-1; j++){
        if(arr[j]>arr[j+1]){
            int t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
            swaps++;
        }
        }
        if(swaps==0)
            break;
        printf("\nArray after pass %d : ",i+1);
        for(k=0;k<n;k++)
        printf("%d ",arr[k]); 
    }

    printf("\nSorted array: ");
    for(i=0;i<n;i++)
    printf("%d " ,arr[i]);
    printf("\n");
    return 0;
}