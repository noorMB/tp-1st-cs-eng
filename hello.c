#include <stdio.h>
int main()
{
    int i;
    int T[10];
    for(i=0; i<10; i++)
    {
        printf("put a number: ");
        scanf("%d", &T[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", T[i]);
    }
    return 0;
}
