#include<stdio.h>
int point = -1;
void push(int stack[],int n)
{
	int data;
	if(point < n)
	{
		printf("Enter the data to be pushed\n");
		point++;
		scanf("%d",&stack[point]);	
	}
	else
	{
		printf("Stack is full\n");
	}
}

void pop(int stack[],int n)
{
	if(point == -1)
	{
		printf("No element in stack to pop\n");
	}
	if(point >= 0)
	{
		point--;
		printf("Element is popped\n");
	}
}

void peak(int stack[],int n)
{
	if(point < 0)
	{
		printf("No element exist to peak");
	}
	else
	{
		printf("%d\n",stack[point]);
	}
}

void traverse(int stack[],int n)
{
	if(point<0)
	{
		printf("No element in stack to traverse\n");
	}
	else
	{
		int i = point;
		printf("----\n");
		while(i>=0)
		{
			printf("%d\n",stack[i]);
			printf("----\n");
			i--;
		}
	}
}

int main()
{
	int len,ch;
	printf("Enter the size of stack\n");
	scanf("%d",&len);
	int a[len];
	while(1)
	{
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Peak\n");
		printf("4.Traverse\n");
		printf("5.Exit\n");
		printf("Enter a valid option\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push(a,len);
				break;
			case 2:
				pop(a,len);
				break;
			case 3:
				peak(a,len);
				break;
			case 4:
				traverse(a,len);
				break;
			case 5:
				return 0;
			default:
				printf("Enter a valid option\n");
				
		}
	}
}
