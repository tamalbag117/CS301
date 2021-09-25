//Write a  C program to show  highest and 
//second highest element from  a  set  of integers.
#include<stdio.h>
#include<limits.h>
void main(void){
    int max=INT_MIN,second_max=INT_MIN,i, c=0;
    int arr[]={1,10,2,9,3,9,4,8,5,7,6};
    for( i=0;i<sizeof(arr)/sizeof(int);i++){
        if(arr[i]>max){
            max=arr[i];
             c=i;
           }
    }
    printf("Maximum  number : %d",max);
     arr[c]=INT_MIN;
    for( i=0;i<sizeof(arr)/sizeof(int);i++){
        if(arr[i]>second_max){
            second_max=arr[i];
           }
    }
    printf("\n Second highest number : %d ",second_max);
}
