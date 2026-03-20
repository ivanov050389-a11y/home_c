
#include <stdio.h>
void input(int arr[], int n)
{
	for (int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
}
void sort_even_odd(int n, int a[])
{
	int k=0;
	for (int i=0;i<n-1;i++)
	{
		for (int j=0; j<n-1;j++)
			{
				if (a[j]%2!=0 && a[j+1]%2==0)
				{
					k=a[j];
					a[j]=a[j+1];
					a[j+1]=k;
				}
				
			} 
	}
}

void print_array(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
	
int main (void)
{
	
	int a[100];
	int n;
	scanf("%d",&n);
	input(a,n);
	sort_even_odd(n,a);
	print_array(a,n);
	return 0;
}

