#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool is_palindrome(char str[])
{  
     int b = strlen(str);
    for(int i = 0; i < b / 2; i++)
    {        
        if(str[i] != str[b - i - 1])
        {          
            return false; 
        }    
    }
    return true; 
}

int main()
{   char T[100];
    printf("Enter a string: ");
    fgets(T, sizeof(T), stdin);
    T[strcspn(T, "\n")] = '\0';
    if(is_palindrome(T))
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}