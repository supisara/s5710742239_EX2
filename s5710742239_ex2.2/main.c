#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a ;
    scanf("%d",&a);
    if (a%2==0&&a%3!=0)
    {
        printf("%d is divisible by 2\n",a );
    }
    if (a%3==0&&a%2!=0)
    {
        printf("%d is divisible by 3\n",a);
    }
    if (a%2==0&&a%3==0)
    {
        printf("%d is divisible by 2 and 3\n",a);
    }
    system("pause");
    return 0;
}
