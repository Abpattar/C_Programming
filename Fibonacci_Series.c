#include <stdio.h>
int main()
{
    int n;
    printf ("Enter the value of n\n");
    scanf ("%d", &n);
    int a = 0, b = 1;
    if (n <= 1)
    {
        printf ("%d", a);
    }
    else
    {
        printf ("%d %d",a ,b);
        for (int i = 2; i < n; i++)
        {
        int c = a + b;
        printf (" %d", c);
        a = b;
        b = c;
        }
    }
    return 0;
}