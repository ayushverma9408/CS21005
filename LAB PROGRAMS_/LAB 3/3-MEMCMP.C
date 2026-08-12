/*
Write a program to implement generic memcmp without using a library function. The signature of the function is int memcomp(void *p, void *q, int size).
*/
#include <stdio.h>

int memcomp(void *p, void *q, int size)
{
    unsigned char *a = p;
    unsigned char *b = q;

    int i;

    for (i = 0; i < size; i++)
    {
        if (a[i] != b[i])
        {
            return a[i] - b[i];
        }
    }

    return 0;
}

int main()
{
    char a[] = "Hello";
    char b[] = "Hello";

    int result;

    result = memcomp(a, b, 5);

    if (result == 0)
        printf("Both memory blocks are equal");
    else if (result < 0)
        printf("First memory block is smaller");
    else
        printf("First memory block is greater");

    return 0;
}