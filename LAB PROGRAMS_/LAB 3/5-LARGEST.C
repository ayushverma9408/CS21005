/*
Write a generic function to find the largest element in an array of any data type. The signature of the function is int Max(void *array, int n, int size). 
*/
#include <stdio.h>

int Max(void *array, int n, int size)
{
    int *arr = array;
    int max = 0;
    int i;

    for (i = 1; i < n; i++)
    {
        if (arr[i] > arr[max])
            max = i;
    }

    return max;
}

int main()
{
    int arr[100];
    int n, i, index;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    index = Max(arr, n, sizeof(int));

    printf("Largest element = %d", arr[index]);

    return 0;
}
