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

    int mat[3][c];

    int k=0;

    for(int i=0; i < m; i++)
    {
        for(int j=0; j < n; j++)
        {
            if(arr[i][j]!=0)
            {
                mat[0][k] = i;
                mat[1][k] = j;
                mat[2][k] = arr[i][j];
                k++;
            }
      }
    }

    for(int i=0 ; i < 3 ; i++)
    {
        for(int j=0 ; j < c ; j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    } 
}