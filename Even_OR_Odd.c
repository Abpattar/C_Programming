#include <stdio.h>
int main()
{
    int n;
    printf ("Enter the value of n\n");
    scanf ("%d", &n);
    if (n % 2 == 0)
    {
        printf ("Even\n");
    }
    else
    {
        printf ("Odd\n");
    }
    return 0;
}