#include<stdio.h>
#define row 5
#define col 5
int main()
{
    int a[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int rowSum[5]= {0};
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            rowSum[i]+=a[i][j];
        }
    }
    for(int i=0; i<5; i++)
        printf("%d ",rowSum[i]);
    int colSum[5]= {0};
    for(int k=0; k<row; k++)
    {
        for(int i=0; i<row; i++)
        {
            for(int j=k; j<k+1; j++)
            {
                colSum[k]+=a[i][k];
            }
        }
    }
    printf("\n");
    for(int i=0; i<5; i++)
        printf("%d ",colSum[i]);

    return 0;
}

