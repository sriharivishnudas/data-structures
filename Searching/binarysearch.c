#include<stdio.h>

int binary(int a[],int k,int left,int right)
{
	if(right>=left)
	{
		int mid = (left + right)/2;
		if(k == a[mid])
		{
			return mid;
		}
		if(a[mid] > k) 
		{
			return binary(a,k,left,mid-1);
		}
		else 
		{
			return binary(a,k,mid+1,right);
		}
	}
	return -1;
}

int main()
{
	int n,i,s;
	printf("Enter the amount of numbers");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the value to search\n");
	scanf("%d",&s);
	printf("%d is the position of element in array\n",binary(arr,s,0,n-1));
}
