#include<stdio.h>

void main()
{
    int i,j,mat[2][2];
    printf("enter matrix elements");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("matrix elements are\n ");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

}