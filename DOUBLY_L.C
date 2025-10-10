#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
    struct node* next;
    struct node *prev;
}
*head=NULL,*temp=NULL,*prev=NULL,*newNode=NULL;
void insert();
void delete1();
void display();
void create_node();
void main()
{
    int ch,i;
    clrscr();
    while(1)
    {
	printf("\n1.Insertion \n2.Deletion\n3.Display\n4.Exit\n");
	printf("\nEnter the choice:\n");
	scanf("%d",&ch);
	switch(ch){case 1:insert();
	    break;
	    case 2:delete1();
	    break;
	    case 3:display();
	    break;
	    case 4:exit(0);
	    default:printf("\nInvalid option\n");
	    break;
	}
    }
}
void insert() // Insert at beginning
{
    if(head==NULL) //List is empty
    {
	create_node(); // Creating 1st node in the list
	head=newNode;
    }
    else
    {
	create_node();
	head->prev=newNode;
	newNode->next=head;
	head=newNode;
    }
}
void create_node( )
{
    newNode=(struct node*) malloc(sizeof(struct node));
    printf("\nEnter the value:\n");
    scanf("%d",&newNode->data);
    newNode->prev=NULL;newNode->next=NULL;
}
void delete1( ) // Deletion from begining
{
    if(head==NULL)
    {
	printf("\nList is empty\n");
    }
    else
    {
	temp=head;
	head=head->next;
	head->prev=NULL;
	printf("%d is deleted\n",temp->data);
	free(temp);
    }
}
void display()
{
    if(head==NULL)
    {
	printf("\nList is empty\n");
    }
    else
    {
	temp=head;
	while(temp!=NULL)
	{printf("%d-->",temp->data);
	    temp=temp->next;
	}
    }
}