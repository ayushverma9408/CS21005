/*
Write a function to search an array using a comparison function pointer. The signature of the function is int Search(void *array, int n, void *key, int size). 
*/
#include <stdio.h>

int compare(void *a, void *b)
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
        if (compare(arr + i * size, key))
            return i;
    }

    return -1;
}

int main()
{
    int arr[100];
    int n, key, i, index;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    index = Search(arr, n, &key, sizeof(int));

    if (index != -1)
        printf("Element found at index %d", index);
    else
        printf("Element not found");

    return 0;
}
