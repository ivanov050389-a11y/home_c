#include <stdio.h>

void rec(int n) 
{
    if (n == 0) 
    {
        return;
    }
    
    printf("%d ", n % 10);     
    rec(n / 10); 
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
    rec(n);
	}
    return 0;
}
