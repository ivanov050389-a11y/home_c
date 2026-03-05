
#include <stdio.h>
#define SIZE 12
void input(int arr[], int n)
{
	for (int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
		
}
float armean(int arr[], int n)
{
	int sum=0;
	for (int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	return (float)sum/SIZE;
}

	
int main (void)
{
	int arr[SIZE];
	int n=SIZE;
	input(arr, n);
	float res=armean(arr,n);
	printf("%.2f", res);
	return 0;
}

