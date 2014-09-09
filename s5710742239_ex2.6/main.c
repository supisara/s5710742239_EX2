#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b ;
    printf("please enter base 10 number :");
    scanf("%d",&a);

    printf("please select output base [8 or 16]: ");
    scanf("%d",&b);

    if (b==8)
    {
        printf("Result : %o\n",a);
    }
    if (b==16)
    {
        printf("Result : %x\n",a);
    }
    system("pause") ;

    return 0;
}
