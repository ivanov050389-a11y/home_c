#include <stdio.h>

void binar(int n)
{
	if (n>1)
	{
		binar(n/2);
		
	}
	printf("%d", n%2);
}
int main(void)
{
	int n;
	scanf("%d", &n);
	//if (n==0)
	//{
	//	printf("%d", n);
	//}
	binar(n);
	return 0;
}
