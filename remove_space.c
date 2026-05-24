#include <stdio.h>
#include <string.h>
void remove_spaces(char T[])
{
    int i, j = 0;
    for (i = 0; T[i] != '\0'; i++)
    {
        if (T[i] != ' ')
        {
            T[j++] = T[i];
        }
    }
    T[j] = '\0';
}
int main()
{
    char sen[100];
    printf("Enter a string: ");
    fgets(sen, sizeof(sen), stdin);
    remove_spaces(sen);
    printf("Sentence after removing spaces: %s", sen);

    return 0;
}
/*to comment a parapgrapg
hdddddddddddddddddddddddddddddd
hvdhvqshvhvhhhhhhhhhhh
jbkjvfjhsvfjvjhfvhjfvjfjffhkj */