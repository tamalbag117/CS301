/*Write a program to inset an item in a given sorted array.*/

#include <stdio.h>
void insert(int arr[], int n, int key)
{
    int i, j = (n - 1);
    while (j >= 0 && arr[j] > key)
    {
        arr[j + 1] = arr[j];
        j = j - 1;
    }
    arr[j + 1] = key;
    n++;
    printf("\nThe array after inserting element %d:\n ", key);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int i, n, key;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[10];
    printf("Enter the array elements in sorted order:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the value you wnt to be inserted: ");
    scanf("%d", &key);
    int p = sizeof(arr) / sizeof(arr[0]);

    printf("\nThe array before inserting element %d:\n ", key);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    insert(arr, n, key);
    return 0;
}