#include<stdio.h>
int pointer = -1;

void enqueue(int q1[],int q2[],int length)
{
	if(pointer < length)
	{
		printf("Enter the data to be inserted\n");
		pointer++;
		scanf("%d",&q1[pointer]);
		printf("The data is queued in\n");
	}
	else
	{
		printf("The queue is full\n");
	}
}

void dequeue(int q1[],int q2[],int length)
{
	if(pointer<0)
	{
		printf("The queue is empty\n");
	}
	else
	{
		int i,p;
		for(i=0,p=pointer-1;i<=pointer;i++,p--)
		{
			q2[i] = q1[p];
		}
		pointer--;
		printf("Dequequed\n");
		for(i=0,p=pointer;i<=pointer;i++,p--)
		{
			q1[i] = q2[p];
		}
	}
}

void print(int q1[],int length)
{
	if(pointer<0)
	{
		printf("The queue is empty\n");
	}
	else
	{
		int i;
		for(i=0;i<=pointer;i++)
		{
			printf("%d | ",q1[i]);
		}
		printf("\n");
	
	}
}

int main()
{
	int len,ch;
	printf("Enter the length of the queue\n");
	scanf("%d",&len);
	int a[len];
	int b[len];
	while(1)
	{
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Print\n");
		printf("4.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				enqueue(a,b,len);
				break;
			case 2:
				dequeue(a,b,len);
				break;
			case 3:
				print(a,len);
				break;
			case 4:
				return 0;
			default:
				printf("Enter a valid option\n");			
		}
	}
}
