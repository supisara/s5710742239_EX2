#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter integer :");
    scanf("%d",&x);

    if (x>40&&x<=100)
    {
        printf("%d is true",x);
    }

    if (x<40||x>100)
    {
        printf("%d is false",x);
    }


    return ;
}
