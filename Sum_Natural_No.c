#include <stdio.h>
int main()
{
    int n;
    printf ("Enter the value of n\n");
    scanf ("%d", &n);
    int s = 0;
    for (int i =1 ; i <= n; i++)
    {
        s += i;
    }
    printf ("Sum of first %d natural numbers = %d\n", n, s);
}