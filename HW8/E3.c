#include <stdio.h>
#define SIZE 10
void input(int arr[], int n)
{
	for (int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
		
}
int find_min(int arr[], int n)
{
	int min=arr[0];
	for (int i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	return min;
}
int find_max(int arr[], int n)
{
	int max=arr[0];
	for (int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}	
int find_n_min(int arr[], int n)
{
	int min=arr[0];
	int n_min=0;
	for (int i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
			n_min=i;
		}
	}
	return n_min;
}
int find_n_max(int arr[], int n)
{
	int max=arr[0];
	int n_max=0;
	for (int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			n_max=i;
		}
	}
	return n_max;
	
}

	
	
int main (void)
{
	int arr[SIZE];
	int n=SIZE;
	input(arr, n);
	int max= find_max(arr,n);
	int min=find_min(arr,n);
	int n_max=find_n_max(arr,n)+1;
	int n_min=find_n_min(arr,n)+1;
	printf("%d %d %d %d", n_max, max, n_min, min);
	return 0;
}
