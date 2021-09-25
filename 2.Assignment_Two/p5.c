#include<stdio.h>

void insertion(int *a, int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) 
    {
        key = a[i];
        j = i - 1;
 

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
        printf("\nArray after Pass %d : ",i);
        for(int k=0;k<n;k++)
        printf("%d ",a[k]); 
    }
}



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

    insertion(arr,n);

    printf("\nThe Array after Sorting : ");
    for(int k=0;k<n;k++)
    printf("%d ",arr[k]);
}