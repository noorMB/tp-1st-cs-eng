#include <stdio.h>
#include <string.h>

int count_char_occurrences(char *str, char c)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[100];
    char c;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to count: ");
    scanf(" %c", &c);
    int occurrences = count_char_occurrences(str, c);
    printf("The character '%c' occurs %d times in the string.\n", c, occurrences);
    return 0;
}
