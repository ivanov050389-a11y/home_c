#include <stdio.h>

void print_num(int num) 
{
    if (num < 10) 
    {
        printf("%d ", num);
        return;
    }
     print_num(num / 10);
     printf("%d ",num % 10);
}

int main(void) 
{
    int n;
    scanf("%d", &n);
    if (n==0)
    {
		printf("%d", n);
	}
	else
	{
    print_num(n);
	}
    return 0;
}
