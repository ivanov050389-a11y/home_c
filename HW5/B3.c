#include <stdio.h>
int main(void)
{
	int a,b,c,sum2;
	sum2=0;
	scanf("%d %d",&a,&b);
	for (;a<=b;a++)
	{
		c=a*a;
		sum2+=c;
	}
	printf("%d ",sum2);
	return 0;
}

