#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,x,y ;
    printf("please enter midterm final :");
    scanf("%d %d",&x,&y);
    a = x+y;

    if (x>=20&&y>=30)
    {
        printf("Result: passed with score %d\n",a );
    }
    if ((x<20||y<30)&&(x>=20||y>=30))
    {
        if (a>=60)
        {
            printf("Result: passed with score %d\n",a);
        }
        if (a<60)
        {
            printf("Result: failed with score %d\n",a);
        }
    }
    if (x<20&&y<30)
    {
        printf("Result: failed with score %d\n",a);
    }
    system("pause");
    return 0;
}
