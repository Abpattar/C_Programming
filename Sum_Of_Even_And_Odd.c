#include <stdio.h>
int main()
{
    int n;
    printf ("Enter the value of n\n");
    scanf ("%d", &n);
    int even = 0, odd = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            even += i;
        }
        else
        {
            odd += i;
        }
    }
    printf ("Sum of even = %d\n", even);
    printf ("Sum of odd = %d\n", odd);
    return 0;
}