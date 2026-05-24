#include <stdio.h>
#include <stdbool.h>
int RemplirTab(int H[], int n)
{
    for (int i = 0; i <= n-1; i++)
    {
        printf("give T[%d] = ", i);
        scanf("%d", &H[i]);
    }
    return H[n];
}
void ShowTab(int H[], int n)
{
    for (int i = 0; i <= n-1; i++)
    {
        printf("u put T[%d] = %d\n", i, H[i]);
    }

}
int main()
{ 
    int a;
    bool b;
    printf("The last element is: %s\n", b ? "true" : "false");
    printf ("give me the lenght of the table:");
    scanf ("%d", &a);
    int T[a];
    T[a] =RemplirTab(T, a);
    
    printf (" ************************** \n");
    ShowTab(T, a);
    return 0;
}