#include<stdio.h>
void bubblesort(int arr[],int length)
{
	int i,j,temp;
	for(i=0;i<length-1;i++)
	{
		for(j=0;j<length-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(i=0;i<length;i++)
	{
		printf("%d,",arr[i]);
	}
}

int main()
{
	int n,i;
	printf("Enter the amount of elements in array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The sorted elements are \n");
	bubblesort(a,n);
}
