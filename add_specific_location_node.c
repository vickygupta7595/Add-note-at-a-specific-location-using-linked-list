#include <stdio.h> 
#include <stdlib.h> 

struct node {
int data;
struct node *link;
}; 
int main()
{
struct node *head = malloc(sizeof(struct node));

head->data = 45;
head->link = NULL;

add_at_end(head, 98);
add_at_end(head, 35);
add_at_end(head, 88);
add_at_end(head, 99);

int data = 67, position = 3;

add_at_pos(head, data, position);

struct node *ptr = head;
while(ptr != NULL)
{
printf("%d\n ", ptr->data);
ptr = ptr->link;
}
return 0;
}

int  add_at_end(struct node *head,int d)
{
    struct node *ptr2=malloc(sizeof(struct node));

    ptr2->data=d;
    ptr2->link=NULL;

    struct node *ptr=NULL;
    ptr=head;

    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=ptr2;

}

int add_at_pos(head, data, position)
{
    struct node *temp,*ptr;

    temp=malloc(sizeof(struct node));

    temp->data=data;
    temp->link=NULL;

    ptr=head;

    position--;
    while(position!=1)
    {
        ptr=ptr->link;
        position--;
    }
    temp->link=ptr->link;
    ptr->link=temp;
}