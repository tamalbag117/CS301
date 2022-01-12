/*Write a program to sort a given array using insertion sort algorithm.*/
/* Insertion Sort */
#include <stdio.h>
void insertionSort(int arr[], int n)
{
    int i, j, k, m = 1, key;
    for (i = 1; i <= n - 1; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;

        printf("Pass %d is: ", m);
        for (k = 0; k < n; k++)
            printf("%d ", arr[k]);
        printf("\n");
        m++;
    }
    printf("\nSorted array is: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int i, n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[10];
    printf("Enter elements of array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe array before sorting: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    insertionSort(arr, n);
    return 0;
}