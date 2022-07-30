/*Develop a program to perform pre-order, in-order, post-order traversals on binary trees*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *left;
	int data;
	struct node *right;
};

struct node * newnode(int val)
{
	struct node * new=(struct node *)malloc(sizeof(struct node));
	new->data=val;
	new->right=NULL;
	new->left=NULL;
	return(new);
}

void preorder(struct node * root)
{
	if(root==NULL)
	{
		return;
	}
	printf(" %d\t",root->data);
	preorder(root->left);
	preorder(root->right);
}

void inorder(struct node * root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	printf(" %d\t",root->data);
	inorder(root->right);
}

void postorder(struct node * root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	printf(" %d\t",root->data);
}

void main()
{
	struct node * root;
	root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->right->left=newnode(6);
	root->right->right=newnode(7);
	
	printf(" The pre order traversal is :");
	preorder(root);
	
	printf(" The in order traversal is :");
	inorder(root);
	
	printf(" The post order traversal is :");
	postorder(root);
}
