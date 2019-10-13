#include<stdio.h>
void insertionsort(int a[],int length)
{
	int i,j;
	for(i=1;i<length;i++)
	{
		int key = a[i];
		j = i - 1;
		while(j>=0 && a[j] < key)
		{
			a[j+1] = a[j];
			j = j - 1;
		}
		a[j+1] = key;
	}
	printf("The sorted elements are:\n");
	for(i=0;i<length;i++)
	{
		printf("%d,",a[i]);
	}
}

int main()
{
	int n,i;
	printf("Enter the amount of number in array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertionsort(arr,n);
}
