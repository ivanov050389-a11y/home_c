#include <stdio.h>
int main(void)
{
	int a,count=0;
	scanf("%d",&a);
	while (a>0)
		{
			a=a/10;
			count++;
		}
			
	switch (count)
	{
		case 3:
			printf("YES");
			break;
		default:
			printf("NO");
	}
	return 0;
}

