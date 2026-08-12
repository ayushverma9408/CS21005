/*
Write a recursive function to implement x^n in O(logn) time complexity.
*/
#include <stdio.h>

long long power(int x, int n)
{
    if (n == 0)
        return 1;

    long long temp = power(x, n / 2);

    if (n % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}

int main()
{
    int x, n;

    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);

    printf("%d^%d = %lld", x, n, power(x, n));

    return 0;
}