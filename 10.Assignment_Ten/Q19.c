/*Write arr program in C or C++ to search an item in arr given sorted array using
(a) iterative binary search algorithm.
(b) recursive binary search algorithm.*/

#include<stdio.h>

// Iterative Binary Search
int iterativebinarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    while(low<=high)
    {
        mid = (low + high)/2; 

        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    return -1;
}

//Recursive binary search
int recursivebinarySearch(int arr[], int left, int right, int element)
{
    //check the array elements
    while (left <= right)
    {
        int mid = (left + right) / 2; //get the middle element of the array

        //if the searching element found in middle position then return middle index
        if (element == arr[mid])
        {
            return mid;
        }
        //if the searching elemet is greater than the mid element then call the function with left = middle + 1
        else if (element < arr[mid])
        {
            return recursivebinarySearch(arr, left, mid - 1, element);
        }
        //if the searching elemet is smaller than the mid element then call the function with right = middle - 1
        else
        {
            return recursivebinarySearch(arr, mid + 1, right, element);
        }
    }
    return -1; //if search element not found in the given array
}

int main(){
    int size,i,element;
    printf("Enter size of the  array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Array is: ");
	for(i=0;i<=size-1;i++)
	    printf("%d ",arr[i]);
    printf("\nEnter the element : ");
    scanf("%d", &element);
    int result = iterativebinarySearch(arr, size, element);
    int index = recursivebinarySearch(arr, 0, size - 1, element);
    if(result == -1){
        printf("The element %d is not found in the given array\n", element);
    }
    else{
        printf("The element %d was found at index %d in the given array\n", element, result);
    }
    if(index == -1){
        printf("The element %d is not found in the given array\n", element);
    }
    else{
        printf("The element %d was found at index %d in the given array\n", element, result);
    }
    return 0;
}
