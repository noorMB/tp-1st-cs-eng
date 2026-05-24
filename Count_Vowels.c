#include<stdio.h>
#include<string.h>

int count_vowels(char str[])
{  
      int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {        char ch = str[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {          
              count++;
        }    
    }
    return count;
}
int main()
{   char input_string[100];
    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);
    int vowel_count = count_vowels(input_string);
    printf("Number of vowels in the string: %d\n", vowel_count);
    return 0;
}