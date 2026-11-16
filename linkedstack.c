#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *top = NULL;
void push()
{
struct node *newnode;
newnode = (struct node *)malloc(sizeof(struct node));
if (newnode == NULL)
{
printf("\nNo space available\n");
return;
}
newnode->link=NULL;
printf("\nEnter the element to insert:");
scanf("%d", &newnode->data);
if(top==NULL)
{
top=newnode;
}
else
{
newnode->link=top;
top=newnode;
}
printf("\n%dINSERTED SUCCESFULLY",newnode->data);
}
void pop()
{
struct node*temp=top;
if(top==NULL)
{
printf("\n STACK UNDERFLOW");
return;
}
printf("\n%d is popped",temp->data);
top=temp->link;
free(temp);
}
void peek()
{
struct node*temp=top;
if(top==NULL)
{
printf("\n stack under flow");
return;
}
printf("Top Element is %d",temp->data);
}
void display()
{
struct node*temp=top;
if(top==NULL)
{
printf("\n No Elements");
return;
}
printf("\n Elements in stack are:\n");
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->link;
}}
void search()
{
struct node*temp=top;
int key,found=0;
if(top==NULL)
{
printf("\n stack underflow \n");
return;
}
printf("\n Enter the element to search:");
scanf("%d",&key);
while(temp !=NULL)
{
if (temp->data==key)
{
printf("\n %d Element Founded \n",temp->data);
found=1;
break;
}
temp=temp->link;
}
if(found==0)
{
printf("\n Element not found\n");
}
}
void main()
{
int choice;
do
{
printf("\n*****STACK****\n");
printf("\n1 -> push()");
printf("\n2 -> pop()");
printf("\n3 -> peek()");
printf("\n4 -> Display");
printf("\n5 -> search");
printf("\n6 -> Exit");
printf("\n\nEnter choice: ");
scanf("%d",&choice);
switch(choice)
{
 case 1:
push();
break;
case 2:
pop();
break;
case 3:
peek();
break;
case 4:
display();
break;
case 5:
search();
break;
case 6:
printf("\n Exit \n");
break;
default:printf("Enter a valid choice");
}
}
while(choice!=6);
}
