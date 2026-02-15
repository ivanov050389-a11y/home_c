#include <stdio.h>
int modul(int a);
int main(void)
{	int a;
	scanf("%d",&a);
	printf("%d", modul(a));
	return 0;
}
int modul(int a)
{
	return (a>0)?a:-a;
}

