
#include <stdio.h>
#define SIZE 10
void input(int arr[], int n)
{
	for (int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
		
}
int find_max1(int arr[], int n)
{
	int max1=arr[0];
	for (int i=0;i<n;i++)
	{
		if(arr[i]>max1)
		{
			max1=arr[i];
		}
	}
	return max1;
}

int find_max2(int arr[], int n)
{
	int max1=find_max1(arr,n);
	//int max2=arr[0];
	int k_max1=0;
	for (int i=0;i<n;i++)
	{
		if(arr[i]==max1)
		{
			k_max1++;
		}
	}
	//printf("%d kmax;", k_max1);
	if (k_max1>1)
	{	
		return max1;
	}
	else
	{
		int max2;
		int flag=1;
		for(int i=0;i<n-1;i++)
		{
			
			if (arr[i]!=max1)
			{
				if (flag)
				{
					max2=arr[i];
					flag=0;
				}
				else if (arr[i]>max2)
				{
					max2=arr[i];
				}
			}
		}
		return max2;
	}
}
	
int main (void)
{
	int arr[SIZE];
	int n=SIZE;
	input(arr, n);
	int max1= find_max1(arr,n);
	int max2= find_max2(arr,n);
	int sum= max1+max2;
	//printf("%d %d\n", max1,max2);
	printf("%d", sum);
	return 0;
}
