#include <stdio.h>
int max(int a, int b, int c);
int main()
{
    int a, b, c, s;
    printf("enter the three numbers:");
    scanf("%d %d %d", &a, &b, &c);
    s = max(a, b, c);
    printf("max number is: %d", s);
    return 0;
}
int max(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            if (b > c)
            {
                return b;
            }
            else
            {
                return c;
            }
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            if (a > c)
            {
                return a;
            }
            else
            {
                return c;
            }
        }
    }
}