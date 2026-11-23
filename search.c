#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *left, *right;
};
struct node* createNode(int value)
{
struct node *newNode;
newNode = (struct node*)malloc(sizeof(struct node));
newNode->data = value;
newNode->left = NULL;
newNode->right = NULL;
return newNode;
}
struct node* insert(struct node *root, int value)
{
if (root == NULL)
return createNode(value);
if (value < root->data)
root->left = insert(root->left, value);
else if (value > root->data)
root->right = insert(root->right, value);
return root;
}
void search(struct node *root, int key)
{
if (root == NULL)
{
printf("Number not found");
}
else if (root->data == key)
{
printf("Number found");
}
else if (key < root->data)
{
search(root->left, key);
}
else
{
 search(root->right, key);
}
}
int main()
{
struct node *root = NULL;
int key;
root = insert(root, 50);
root = insert(root, 30);
root = insert(root, 70);
root = insert(root, 20);
root = insert(root, 40);
root = insert(root, 60);
root = insert(root, 80);
 printf("Enter number to search: ");
scanf("%d", &key);
search(root, key);
return 0;
}

