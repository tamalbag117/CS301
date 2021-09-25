//Write a  C program to take  n elements from user 
// and  display  the sum elements using pointer
//
#include<stdio.h>
int main(){
 int n=0,sum=0,i;
 printf("Total number of elemet :  ");
 scanf("%d",&n); 
 int arr[10000];
 int *ptr = arr;
 printf("Enter elements :");
 for ( i = 0; i < n; i++)
 {
     scanf("%d",(ptr+i));
     sum+=*(ptr+i);
 }
printf("Sum of the Array Element is  %d",sum);
return 0;
}
