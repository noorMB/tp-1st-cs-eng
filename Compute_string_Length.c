#include <stdio.h>
#include <math.h>
#include <string.h>
int my_strlen(char H[])
{
    int i;
    for(i=0;H[i]!='\0';i++);
    return i;
}int main()
{
    char test_string[100];
    printf("Enter a string: ");
    fgets(test_string, sizeof(test_string), stdin);
    getchar();
    printf("Length of string: %d\n", my_strlen(test_string));
    return 0;
}