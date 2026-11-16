#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *head = NULL;
void insertfirst()
{
struct node *newnode;
newnode = (struct node *)malloc(sizeof(struct node));
if (newnode == NULL)
{
printf("\nNo space available\n");
return;
}
printf("\nEnter the value to insert at front: ");
scanf("%d", &newnode->data);
newnode->link = head;
head = newnode;
printf("\nElement inserted: %d\n", newnode->data);
}
void insertlast()
{
struct node *temp, *newnode;
newnode = (struct node *)malloc(sizeof(struct node));
if (newnode == NULL)
 {
printf("\nNo space available\n");
return;}
printf("\nEnter the value to insert: ");
scanf("%d", &newnode->data);
newnode->link = NULL;
if (head == NULL){
head = newnode;
}
else
 {
temp = head;
while (temp->link != NULL){
temp = temp->link;
}
temp->link = newnode;
}
printf("\nElement inserted successfully: %d\n", newnode->data);
}
void insertlocation()
{int key;
struct node *temp, *newnode;
if (head == NULL)
{
printf("\nList is empty\n");
return;
}
printf("\nEnter the key after which you want to add element: ");
scanf("%d", &key);
temp = head;
while (temp != NULL && temp->data != key)
{
temp = temp->link;}
if (temp == NULL)
    {
printf("\nValue does not exist\n");
return;}
newnode = (struct node *)malloc(sizeof(struct node));
if (newnode == NULL)
{
printf("\nNo space available\n")
return;
}
printf("\nEnter the value to insert: ");
scanf("%d", &newnode->data);
newnode->link = temp->link;
temp->link = newnode;
printf("\nValue inserted successfully: %d\n", newnode->data);}
void deletefirst()
{struct node *temp;
if (head == NULL)
{
printf("\nList empty\n");
return;
}
temp = head;
head = head->link;
printf("\nValue deleted: %d\n", temp->data);
free(temp);}
void deletelast()
{
struct node *temp, *prev;
if (head == NULL){
printf("\nEmpty list\n");
return;
}
if (head->link == NULL)
{
printf("\nValue %d deleted\n", head->data);
free(head);
head = NULL;
return;}
temp = head;
prev = NULL;
while (temp->link != NULL){
prev = temp;
temp = temp->link;}
printf("\nValue %d deleted\n", temp->data);
prev->link = NULL;
free(temp);}
void deletelocation()
{
int key;
struct node *temp, *prev;
if (head == NULL){
printf("\nEmpty list\n");
return;
}
printf("\nEnter the value to delete: ");
scanf("%d", &key);
if (head->data == key)
{
temp = head;
head = head->link;
printf("\nValue %d is deleted\n", temp->data);
free(temp);
return;
}
temp = head;
prev = NULL;
while (temp != NULL && temp->data != key){
prev = temp;
temp = temp->link;
}
if (temp == NULL){
printf("\nValue does not exist\n");
return;
}
prev->link = temp->link;
printf("\nValue %d is deleted\n", temp->data);
free(temp);
}
void search()
{
struct node *temp = head;
int pos = 0;
int found = 0;
int val;
if (head == NULL)
{
printf("\nEmpty list\n");
return;}
printf("\nEnter the value to search: ");
scanf("%d", &val);
while (temp != NULL)
{
if (temp->data == val){
printf("%d found at location %d\n",
temp->data, pos + 1);
found = 1;
}
pos++;
temp = temp->link;
}
if (!found)
{
printf("Value %d does not exist\n", val);
}
}
void display()
{
struct node *temp = head;
if (temp == NULL)
{
printf("\nList Empty\n");
return;
}
printf("\nElements in list:\n");
while (temp != NULL){
printf("%d -> ", temp->data);
temp = temp->link;}
printf("NULL\n");
}
int main(){
int choice;
printf("\n***** SINGLY LINKED LIST *****\n");
do{
printf("\n1 -> Insert First");
printf("\n2 -> Insert Last");
printf("\n3 -> Insert Location");
printf("\n4 -> Delete First");
printf("\n5 -> Delete Last");
printf("\n6 -> Delete Location");
printf("\n7 -> Search");
printf("\n8 -> Display");
printf("\n9 -> Exit");
printf("\n\nEnter choice: ");
scanf("%d", &choice);
switch (choice){
            case 1:
                insertfirst();
                break;
            case 2:
                insertlast();
                break;
            case 3:
                insertlocation();
                break;
            case 4:
                deletefirst();
                break;
            case 5:
                deletelast();
                break;
            case 6:
                deletelocation();
                break;
            case 7:
                search();
                break;
            case 8:
                display();
                break;
              case 9:
                printf("\nExiting program...\n");
                break;
default:
printf("\nInvalid choice\n");
}
} while (choice != 9);
return 0;
}

