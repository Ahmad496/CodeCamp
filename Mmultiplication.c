#include<stdio.h>
#define arows 2
#define acols 3
#define brows 3
#define bcols 1
int main()
{
    int a[arows][acols];
    for(int i=0; i<arows; i++)
    {
        for(int j=0; j<acols; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b[brows][bcols];
    for(int i=0; i<brows; i++)
    {
        for(int j=0; j<bcols; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int res[arows][bcols]= {0};
    for(int k=0; k<arows; k++)
    {
        for(int i=0; i<bcols; i++)
        {
            for(int j=0; j<brows; j++)
            {
                res[k][i]+=a[k][j]*b[j][i];//Main Logical Line
            }
        }

    }
    for(int i=0; i<arows; i++)
    {
        for(int j=0; j<bcols; j++)
            printf("%d ",res[i][j]);
        printf("\n");
    }

    return 0;
}
