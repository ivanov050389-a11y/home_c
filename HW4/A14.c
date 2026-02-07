#include <stdio.h>
int main(void)
{
	int a,a1,a2,a3;
	scanf("%d", &a);
	a1=a%10;
	a2=(a/10)%10;
	a3=a/100;
	printf("%d", ((a1>a2)?((a1>a3)?a1:a3):((a2>a3)?a2:a3)));
	return 0;
}
	
	
