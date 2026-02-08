#include <stdio.h>
int main(void)
{
	int a,b;
	scanf("%d",&a);
	for (b=1;b<=a;b++)
	printf("%d %d %d\n", b,b*b, b*b*b);
	return 0;
}

