#include <stdio.h>

int find_max_array(int size, int a[])
{
	int max=a[0];
	for(int i=1;i<size;i++)
	{
		if (a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}	
/*void input_array(int a[],int n)
{
	for (int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
}*/
int main (void)
{
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	
	//input_array(a,n);
	int max=find_max_array(n,a);
	printf("%d",max);
	return 0;
}
