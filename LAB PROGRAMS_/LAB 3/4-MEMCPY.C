/*
Write a program to implement generic memcpy without using a library function. The signature of the function is void memcopy(void *p, void *q, int size). 
*/
#include <stdio.h>

void memcopy(void *p, void *q, int size)
{
    char *a = p;
    char *b = q;

    int i;

    for (i = 0; i < size; i++)
    {
        a[i] = b[i];
    }
}

int main()
{
    char source[] = "Hello";
    char destination[20];

    memcopy(destination, source, 6);

    printf("Copied string: %s", destination);

    return 0;
}