#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    int value;
    struct node* next;
}list; 
void display(list**H)
{
    list*P;
    P=*H;
    while(P!=NULL)
    {
        printf("%d ",P->value);
        P=P->next;
    } 
}
int main()
{
list*head;
display(&head);
    return 0;
}