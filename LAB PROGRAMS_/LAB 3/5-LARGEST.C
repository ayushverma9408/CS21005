/*
Write a generic function to find the largest element in an array of any data type. The signature of the function is int Max(void *array, int n, int size). 
*/
#include <stdio.h>

int compareInt(void *a, void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;

    if (x > y)
        return 1;
    else if (x < y)
        return -1;
    else
        return 0;
}

int Max(void *array, int n, int size)
{
    char *arr = array;
    int max = 0;
    int i;

    for (i = 1; i < n; i++)
    {
        if (compareInt(arr + i * size, arr + max * size) > 0)
            max = i;
    }

    return max;
}

int main()
{
    int arr[] = {10, 50, 20, 80, 30};

    int index = Max(arr, 5, sizeof(int));

    printf("Largest element = %d", arr[index]);

    return 0;
}