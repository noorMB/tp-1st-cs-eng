#include<stdio.h>
#include<string.h>
int count_words(char str[])
{  
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {        
        if(str[i] == ' ' || str[i] == '.')
        {          
            count++;
        }    
    }
    return count ; 
}
int main()
{   char input_string[100];
    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);
    int word_count = count_words(input_string);
    printf("Number of words in the string: %d\n", word_count + 1);
    return 0;
}