#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *left;
	int data;
	struct node *right;
};
struct node *root = NULL;

void insertnode()
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data to be stored\n");
	scanf("%d",&temp->data);
	temp->left = NULL;
	temp->right = NULL;

	if(root == NULL)
	{
		root = temp;
	}
	else
	{
		struct node *current,*parent;
		parent = root;
		current = root;
		while(current)
		{
			parent = current;
			if(temp->data > current->data)
			{
				current = current->right;
			}
			else
			{
				current = current->left;
			}
		}
		if(temp->data > parent->data)
		{
			parent->right = temp;
		}
		else
		{
			parent->left = temp;
		}
	}                                                                                 
}

void deletenode()
{
	struct node *parent,*current;
	parent = root;
	current = root;
	int a;
	printf("Enter the data to be delted\n");
	scanf("%d",&a);
	while(current->data!=a)
	{
		parent=current;
		if(current->data>a)
		{
			current = current->left;
		}
		else
		{
			current = current->right;
		}
		if(current->data!= a && current->left == NULL && current->right == NULL)
		{
			printf("No such data node exists\n");
			break;
		}
	}
	if(current->data==a && current->left==NULL && current->right==NULL)
	{
		if(current->data < parent->data)
		{
			parent->left = NULL;
			free(current);
		}
		else
		{
			parent->right = NULL;
			free(current);
		}
	}
	else if(current->data == a && current->left!=NULL && current->right == NULL)
	{
		if(current == parent->right)
		{
			parent->right = current->left;
			current->left = NULL;
			free(current);
		}
	}
	else if(current->data==a && current->right!=NULL && current->left == NULL)
	{
		if(current == parent->right)
		{
			parent->right = current->right;
			current->right = NULL;
			free(current);
		}
	}
	else if(current->data==a && current->right!=NULL && current->left == NULL)
	{
		if(current=parent->left)
		{
			parent->left = current->left;
			current->right = NULL;
			free(current);
		}
	}
	else if(current->data==a && current->left!=NULL && current->right==NULL)
	{
		if(current==parent->left)
		{
			parent->left = current->right;
			current->left = NULL;
			free(current);
		}
	}
	else if(current->data==a  && current->left!=NULL && current->right!=NULL)
	{
		struct node *t1,*t2;
		t1 = current->right;
		if(t1->left == NULL && t1->right==NULL)
		{
			if(current = parent->right)
			{
				t1->left = current->left;
				parent->right = t1;
				current->left = NULL;
				current->right = NULL;
				free(current);
			}
			else
			{
				t1->left = current->left;
				parent->left = t1;
				current->left = NULL;
				current->right = NULL;
				free(current);
			}
		}
		else if(t1->left==NULL && t1->right!=NULL)
		{
			if(current = parent->right)
			{
				t1->left = current->left;
				parent->right = t1;
				current->left = NULL;
				current->right = NULL;
				free(current);
			}
			else
			{
				t1->left = current->left;
				parent->left = t1;
				current->left = NULL;
				current->right = NULL;
				free(current);
			}		
		}
		else
		{
			t2 = t1->left;
			while(t2->left!=NULL)
			{
				t1=t2;
				t2=t2->left;
			}
			if(current= parent->right)
			{
				t2->left = current->left;
				t2->right = current->right;
				t1->left = NULL;
				parent->right = t2;
				current->left = NULL;
				current->right = NULL;
				free(current);
			}
			else
			{
				t2->left = current->left;
				t2->right = current->right;
				t1->left = NULL;
				parent->left = t2;
				current->left = NULL;
				current->right = NULL;
				free(current);
			}
		}
	}
	else
	{
		printf("WEEWO STRANGE!");
	}
}

void inorder(struct node *p)
{
	if(p->left!=NULL)
	{
		inorder(p->left);
	}
	printf("%d ",p->data);
	if(p->right!=NULL)
	{
		inorder(p->right);
	}
}

void preorder(struct node *p)
{
	printf("%d ",p->data);
	if(p->left!=NULL)
	{
		preorder(p->left);
	}
	if(p->right!=NULL)
	{
		preorder(p->right);
	}
}

void postorder(struct node *p)
{
	if(p->left!=NULL)
	{
		postorder(p->left);
	}
	if(p->right!=NULL)
	{
		postorder(p->right);
	}
	printf("%d ",p->data);
}

int main()
{
	int ch;
	while(1)
	{
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Inorder\n");
		printf("4.Preorder\n");
		printf("5.Postorder\n");
		printf("6.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insertnode();
				break;
			case 2:
				deletenode();
				break;
			case 3:
				inorder(root);
				printf("\n");
				break;
			case 4:
				preorder(root);
				printf("\n");
				break;
			case 5:
				postorder(root);
				printf("\n");
				break;
			case 6:
				return 0;
			default:
				printf("Enter a valid choice\n");
			
				
		}
	}
}
