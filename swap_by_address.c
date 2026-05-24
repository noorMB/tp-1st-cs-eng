#include<stdio.h>

void swap(int *a, int *b)
{    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void swap02(int a, int b)
{    int t;
    t = a;
    a = b;
    b = t;
}
int main()
{   int x, y; 
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap02(x, y);
    printf("After swapping: x = %d, y = %d\n", x, y);
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;                   
}