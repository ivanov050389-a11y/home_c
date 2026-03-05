
#include <stdio.h>
#define SIZE 5
void input(int arr[], int n)
{
	for (int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
		
}


int main (void)
{
	int arr[SIZE];
	int n=SIZE;
	input(arr, n);
	int min=arr[0];
	for (int i=0;i<n;i++)
	{
		if (arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("%d", min);
	return 0;
}
