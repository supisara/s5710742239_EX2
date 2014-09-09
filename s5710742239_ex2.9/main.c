#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y ;
    printf("please enter coordinate x y : ");
    scanf("%d %d",&x,&y);

    if ((x>=0&&y>=0)&&(x!=0&&y!=0))
    {
        printf("Result: Q1\n");
    }
    if (x==0&&y==0)
    {
        printf("Result: Origin \n");
    }
    if (x<0&&y>=0)
    {
        printf("Result: Q2\n");
    }
    if (x<0&&y<0)
    {
        printf("Result: Q3\n");
    }
    if (x>=0&&y<0)
    {
        printf("Result: Q4\n");
    }
    system("pause");
    return 0;
}
