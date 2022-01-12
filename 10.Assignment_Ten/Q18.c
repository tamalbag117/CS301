/*Write a program in C or C++ to search an item in a given array using linear search algorithm.*/
/*Linear Search*/
#include<stdio.h>

int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int main(){
    int size,i,element;
    printf("Enter size of the  array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements in array : ");
    for(i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printf("The Array -->\n");
	for(i=0;i<=size-1;i++){
	    printf("%d ",arr[i]);
    }
    printf("\nEnter the element want to search : ");
    scanf("%d", &element);
    int result=linearSearch(arr, size, element);
    if(result==-1){
        printf("The element %d is not found in the given array!\n", element);
    }
    else{
        printf("The element %d was found at index %d in the array\n", element, result);
    }
    return 0;
}