#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("Enter 3 integer :");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b&&a>c)
    {
        if(b>c)
        {
            printf("%d %d %d\n",a,b,c);
        }
        if(c>b)
        {
            printf("%d %d %d\n",a,c,b);
        }
    }

    if (b>a&&b>c)
    {
        if (a>c)
        {
            printf("%d %d %d\n",b,a,c);
        }
        if (c>a)
        {
            printf("%d %d %d\n",b,c,a);
        }
    }
    if (c>a&&c>b)
    {
        if (a>b)
        {
            printf("%d %d %d\n",c,a,b);
        }
        if (b>a)
        {
            printf("%d %d %d\n",c,b,a);
        }
    }
    system("pause");
    return 0;
}
