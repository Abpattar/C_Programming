#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;
    printf("Enter the number to check if it is a palindrome or not\n");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("The number is a palindrome\n");
    }
    else
    {
        printf("The number is not a palindrome\n");
    }
    return 0;
}