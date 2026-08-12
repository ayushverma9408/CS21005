/*
1. Write a generic function to compare two variables. The function should work for int, double, string, etc.
You need to write a main function to test the generic function. with using memcmp()
*/
#include <stdio.h>
#include <string.h>

int comparator(void *p, void *q, int size) 
{
    return memcmp(p, q, size);
} 

int main() 
{
    int a,b,ch;
    double h,j;
    char n[100], m[100];

    backtrack:

    printf("What do you want to check?\n1. Integer\n2. Double\n3. Character\n");
    scanf("%d",&ch);

    if(ch==1)
    {
        printf("Enter two integers: ");
        scanf("%d %d", &a, &b);
        int c1=comparator(&a, &b, sizeof(int)); 
        if (c1==0)
        {
            printf("Both integers are equal\n");
        }
        else if (c1>0)
        {
            printf("%d is greater than %d\n",a,b);
        }
        else
        {
            printf("%d is greater than %d\n",b,a);
        }
    }

    else if(ch==2)
    {
        printf("Enter two doubles: ");
        scanf("%lf %lf", &h, &j);
        int c2=comparator(&h, &j, sizeof(double)); 
        if (c2==0) 
        {
            printf("Both doubles are equal\n");
        }
        else if (c2>0)
        {
            printf("%lf is greater than %lf\n",h,j);
        }
        else
        {
            printf("%lf is greater than %lf\n",j,h);
        }
    }

    else if(ch==3)
    {
        printf("Enter two characters: ");
        scanf("%c %c", &n, &m);
        int c3=comparator(&n, &m, sizeof(char)); 
        if (c3==0)
        {
            printf("Both characters are equal\n");
        }
        else
        {
            printf("Both characters are unequal:\n",m,n);
        }
    }

    else
    {
        printf("Invalid choice. choose (1/2/3)\n");
        goto backtrack;
    }

    return 0;
}