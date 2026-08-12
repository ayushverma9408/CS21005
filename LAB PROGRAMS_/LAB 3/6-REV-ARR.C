/*
Write a generic function to reverse an array of any data type. The signature of the function is int Reverse(void *array, int n, int size). 
*/
#include <stdio.h>

void Reverse(void *array, int n, int size)
{
    char *arr = array;
    char temp;
    int i, j;

    for (i = 0; i < n / 2; i++)
    {
        for (j = 0; j < size; j++)
        {
            temp = arr[i * size + j];
            arr[i * size + j] = arr[(n - 1 - i) * size + j];
            arr[(n - 1 - i) * size + j] = temp;
        }
    }
}

int main()
{
    int arr[100];
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    Reverse(arr, n, sizeof(int));

    printf("Reversed array:\n");

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
