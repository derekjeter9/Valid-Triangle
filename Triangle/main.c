#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, flag = 0;
    printf("Enter values for a, b and c\n");
    scanf("%f%f%f", &a, &b, &c);

    if ( a>b )
    {
        flag = ((b+c) > a);
    }
    else if
        ( b>c )
    {
        flag = ((a+c) > b);
    }
    else
    {
        flag = ((a+b)>c);
    }
    if (flag)
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }

    return 0;
}
