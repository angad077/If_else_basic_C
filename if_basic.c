// C PROGRAME TO CHECK WEATHER A IS ODD OR EVEN
#include <stdio.h>

int main()
{
    int a;
    printf("Enter the a number value is \n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf(" a is a even number %d \n", a);
    }

    else
    {
        printf("a is a odd number %d \n", a);
    }
    return 0;
}