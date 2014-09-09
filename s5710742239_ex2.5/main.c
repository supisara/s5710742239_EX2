#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c ;
    scanf("%d %d",&a,&b);
    c = a-b;
    if (c>0)
    {
        printf("%d\n",c);
    }
    if (c<0)
    {
        printf("%d\n",c*-1);
    }
    system("pause");
    return 0;
}
