#include<stdio.h>
selectionsort(int a[],int length)
{
	int i,j,min,temp;
	for(i=0;i<length-1;i++)
	{
		min = i;
		for(j=i+1;j<length;j++)
		{
			if(a[j]>a[min])
			{
				min = j;
			}
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
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
	printf("Enter the amount of numbers in the array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements into the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selectionsort(arr,n);
}
