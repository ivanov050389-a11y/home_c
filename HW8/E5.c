
#include <stdio.h>
#define SIZE 10
void input(int arr[], int n)
{
	for (int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
		
}
int sum(int arr[], int n)
{
	int sum=0;
	for (int i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			sum+=arr[i];
		}
	}
	return sum;
}

	
int main (void)
{
	int arr[SIZE];
	int n=SIZE;
	input(arr, n);
	int res= sum(arr,n);
	printf("%d", res);
	return 0;
}

