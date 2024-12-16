#include <stdio.h>
int main()
{
    int r , c;
    printf ("Enter the value of row and column\n");
    scanf ("%d %d", &r, &c);
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf (" * ");
        }
        printf ("\n");
    }
}