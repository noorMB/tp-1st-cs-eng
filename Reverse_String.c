#include<stdio.h>
#include<string.h>
int reverse_string(char str[])
{  
    int b = strlen(str);
    char a;
    for(int i = 0; i < b / 2; i++)
    {        
        a = str[i];
        str[i] = str[b - i - 1];
        str[b - i - 1] = a;
    }
    return 0; 
}
int main()
{   char T[100];
    printf("Enter a string: ");
    fgets(T, sizeof(T), stdin);
    reverse_string(T);
    printf("Reversed string: %s\n", T);
    return 0;
}