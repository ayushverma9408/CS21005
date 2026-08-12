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

            arr[i * size + j] =
                arr[(n - 1 - i) * size + j];

            arr[(n - 1 - i) * size + j] = temp;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    Reverse(arr, 5, sizeof(int));

    printf("Reversed array: ");

    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}