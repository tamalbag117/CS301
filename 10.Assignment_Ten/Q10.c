/*Write a program to sort a given array using bubble sort algorithm.*/
/* Bubble Sort */
#include<stdio.h>
void swap(int arr[],int i,int minindex){
	int temp=arr[i];
    arr[i]=arr[minindex];
    arr[minindex]=temp;
}

void bubbleSort(int arr[],int n){
	int i,j,k,m=1;
    for(i=0;i<=n-2;i++)
    {
    	for(j=0;j<=n-2;j++)
        {
        	if(arr[j]>arr[j+1]){
            swap(arr,j,j+1);
        }
    }
    printf("Pass %d is: ",m);
    for(k=0;k<n;k++)
        printf("%d ",arr[k]);
    printf("\n");
    m++;
    }
    printf("\nSorted array is: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}

int main(){
	int n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[10];
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nThe array before sorting: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);  
    printf("\n");  
    bubbleSort(arr,n);    
    return 0;
}