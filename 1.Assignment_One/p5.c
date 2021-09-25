/*Write a C program to swap two consecutive elements.*/
#include<stdio.h>
int main()
{
   printf("Enter size of array :");
   int s=0;
   scanf("%d",&s);
   

   int arr[200];
   int i,sum=0;
   

   printf("\nEnter %d numbers :",s);
   for(i=0;i<s;i++)
      scanf("%d",&arr[i]);

    
    int c= (s%2==0)?s:s-1;

    for(i=0;i<c;i+=2) {
    	int temp=arr[i];
    	arr[i]=arr[i+1];
    	arr[i+1]=temp; 	

	}
   
   
   printf("\n Array after swap :");
   for(i=0;i<s;i++)
   printf("%d ",arr[i]);  


   
   return 0;
}
