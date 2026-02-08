#include <stdio.h>
int main(void)
{
	int a,b,c;
	int found=0;
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		c=(a/10)%10;
		a=a/10;
		if (b==c)
		{
			printf("YES");
			found=1;
			break;
		}
	}
	if (found!=1)
		printf("NO");
		
	return 0;
	
}

