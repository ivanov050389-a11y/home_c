#include <stdio.h>
int sum_to_x(int x)
{
	int sum=0;
	for(int i=1;i<=x;i++)
	{
		sum+=i;
	}
	return sum;
}
int main(void)
{
	int x;
	scanf("%d", &x);
	printf("%d", sum_to_x(x));
	return 0;
}
