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
void postorder(struct node *root)
{
if (root != NULL)
{
postorder(root->left);
postorder(root->right);
printf("%d ", root->data);
}
}
int main()
{
struct node *root = NULL;
root = insert(root, 50);
root = insert(root, 30);
root = insert(root, 70);
root = insert(root, 20);
root = insert(root, 40);
root = insert(root, 60);
root = insert(root, 80);
printf("preorder Traversal: ");
postorder(root);
return 0;
}
