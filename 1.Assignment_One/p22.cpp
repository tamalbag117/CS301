//program to delete  an integer  at nth  position  
//and  also display  the number of shifting  operations.
#include<stdio.h>
void main(void){
    int key =0,f=0,pos=0,count=0,i;
    int arr[]={1,10,2,9,3,9,4,8,5,7,6};
    printf("Enter the position : ");
    scanf("%d",&key);
    for ( i = sizeof(arr)/sizeof(int); i<=key; i++)
    {
      arr[i]=arr[i-1];
      count++;
    }
    printf("New array is : ");
   for ( i = 0; i < sizeof(arr)/sizeof(int)-1; i++)
    {
      printf("%d\t",arr[i]);
    }
    printf("\nTotal number of sifting operation : %d",count);
}
