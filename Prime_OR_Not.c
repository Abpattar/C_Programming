#include <stdio.h>
int main()
{
    int n;
    printf ("Enter the value of n\n");
    scanf ("%d", &n);
    int flag = 0;
    if (n <= 1)
    {
        printf ("Not Prime\n");
    }
    else
    {
        for (int i =2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf ("Prime\n");
        }
        else
        {
            printf ("Not Prime\n");
        }
    }
}