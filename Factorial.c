#include <stdio.h>
int main()
{
    int n;
    printf ("Enter the value of n\n");
    scanf ("%d", &n);
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    printf ("Factorial of %d = %d\n", n, f);
    return 0;
}