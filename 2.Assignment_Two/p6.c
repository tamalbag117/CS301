#include<stdio.h>

int main()
{
    int n,arr[100][100],m;
    printf("\nEnter the row and column of array : ");
    scanf("%d%d",&m,&n);
    int c=0; 


    for(int i=0 ; i < m ; i++)
    {
        for(int j=0 ; j< n ; j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j] == 0)
            {
                c++;
            }
        }
    }

    if( c > (m*n)/2)
    {
        printf("\nThis is a sparse matrix");
    }
    else
    {
        printf("\nThis is not a sparse matrix");
    }

    return 0;

}