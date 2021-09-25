 void bubble(int a[], int n) 
 {  
   int i, j, temp,c=0;  
   for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;
                c++;     
            } 

        } 
        printf("array elements are after %d pass \n", i + 1);
        for (int k = 0; k < n; k++)
        {
            printf("%d \n", a[k]);
        }  
    } 
    printf("Number of comparison %d",c);    
 }  
 #include <stdio.h>
int main()
{
    int s=0,i=0,f=0;
 printf("enter size of Array :");
 scanf("%d",&s);
 int arr[s];
 printf(" elements of the array :");
 for(i=0;i<s;i++){
     scanf("%d",&arr[i]);
 }
 bubble( arr, s) ;
 printf("\nnew sorted array :\n");
  for(i = 0; i < s; i++)    
    {    
        printf("%d ",arr[i]);    
    }   

}