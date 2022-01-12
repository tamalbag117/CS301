/*Write a program to find the nth Fibonacci number using tail recursion.*/

#include <stdio.h>

int fib(int n,int a,int b) 
{ 
    if (n==0) 
        return a; 
    if (n==1) 
        return b; 
    return fib(n-1,b,a+b); 
} 
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("%dth Fibonacci number is: %d",n,fib(n-1,0,1));
}