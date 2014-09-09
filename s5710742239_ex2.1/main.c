#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    scanf("%d",&x);
    if (x%2==0)
    {
        printf("%d is even.",x);
    }
    if (x%2!=0)
    {
        printf("%d is odd.",x);
    }
    return 0;
}
