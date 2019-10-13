#include<stdio.h>
int pointer = -1;
int head = 0;
void enqueue(int queue[],int n)
{
	if(pointer < n)
	{
		printf("Enter the data to enter the queue\n");
		pointer++;
		scanf("%d",&queue[pointer]);
		printf("Data queued\n");
	}
	else
	{
		printf("Queue is full\n");
	}
}

void dequeue(int queue[],int n)
{
	int i;
	if(pointer < 0)
	{
		printf("Queue is empty\n");
	}
	else
	{
		for(i = head;i<pointer;i++)
		{
			queue[i] = queue[i+1];
			
		}
		pointer--;
		printf("Dequeued\n");
	}
}

void print(int queue[],int n)
{
	int i;
	if(pointer < 0)
	{
		printf("Queue is empty\n");
	}
	else
	{
		for(i=0;i<=pointer;i++)
		{
			printf("%d | ",queue[i]);
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
				enqueue(a,len);
				break;
			case 2:
				dequeue(a,len);
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
