/*
Write a generic function to swap two variables. It should work with int, double, string, etc. You need 
to write a main function to test the generic function.
*/
#include <stdio.h>
#include <string.h>

void swap(void *a, void *b, int size) 
{
    char temp[size];
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
}

int main(){
    int a,b,ch;
    double h,j;
    char n[100], m[100];

    backtrack:

    printf("What do you want to swap?\n1. Integer\n2. Double\n3. Character\n");
    scanf("%d",&ch);

    if(ch==1)
    {
        printf("Enter two integers: ");
        scanf("%d %d", &a, &b);
        swap(&a, &b, sizeof(int));
        printf("After swapping: %d %d\n", a, b);
    }

    else if(ch==2)
    {
        printf("Enter two doubles: ");
        scanf("%lf %lf", &h, &j);
        swap(&h, &j, sizeof(double));
        printf("After swapping: %lf %lf\n", h, j);
    }

    else if(ch==3)
    {
        printf("Enter two strings: ");
        scanf("%s %s", n, m);
        swap(n, m, sizeof(n));
        printf("After swapping: %s %s\n", n, m);
    }
    else
    {
        printf("Invalid choice. Please try again.\n");
        goto backtrack;
    }

    return 0;
}
