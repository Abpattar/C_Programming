#include <stdio.h>
int main()
{
    float p, r, t;
    printf ("Enter the value of p, t, r\n");
    scanf ("%f %f %f", &p, &t, &r);
    float si = p*t*r/100;
    printf ("Simple Intrest = %.2f\n", si);
    return 0;
}