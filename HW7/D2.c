#include <stdio.h>
int rec(int n)
{
	if (n<=1)
	{
		return 1;
	}
	//printf("%d\n", n);
	return n+rec(n-1);
	
}
int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", rec(n));
	return 0;
}
