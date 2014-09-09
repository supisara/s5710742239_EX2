#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z ;
    printf("Please enter score : ");
    scanf("%d",&z);

    if (z>=80&&z<=100)
    {
        printf("Your grade : A\n");
    }
    if (z>=70&&z<=79)
    {
        printf("Your grade : B\n");
    }
    if (z>=60&&z<=79)
    {
        printf("Your grade : C\n");
    }
    if (z>=50&&z<=59)
    {
        printf("Your grade : D\n");
    }
    if (z<50&&z>=0)
    {
        printf("Your grade : F\n");
    }
    return 0;
}
