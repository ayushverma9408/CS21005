/*
Write a function to search an array using a comparison function pointer. The signature of the function is int Search(void *array, int n, void *key, int size). 
*/
#include <stdio.h>

int compareInt(void *a, void *b)
{
    if (*(int *)a == *(int *)b)
        return 1;

    return 0;
}

int Search(void *array, int n, void *key, int size)
{
    char *arr = array;
    int i;

    for (i = 0; i < n; i++)
    {
        if (compareInt(arr + i * size, key))
            return i;
    }

    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;

    int index = Search(arr, 5, &key, sizeof(int));

    if (index != -1)
        printf("Element found at index %d", index);
    else
        printf("Element not found");

    return 0;
}