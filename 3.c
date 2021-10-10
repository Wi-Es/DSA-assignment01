#include<stdio.h>

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            scanf("%d",&a[i][j]);
    }
    int n=row*col;
    int b[n];
    int x=0;
    printf("Inital 2D Array:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            b[x]=a[i][j];
            x++;
        }
    }
    printf("\nFinal 1D array is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    return 0;
}