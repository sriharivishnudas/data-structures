#include<stdio.h>

linearsearch(int a[],int k,int length)
{
	int i;
	for(i=0;i<length;i++)
	{
		if(a[i] == k)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int n,i,search;
	printf("Enter the amount of numbers in array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the numbers into the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to search\n");
	scanf("%d",&search);
	printf("%d is in position %d",search,linearsearch(arr,search,n));
}
