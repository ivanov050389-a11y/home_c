#include <stdio.h>
int f(int x) {
    if (x < -2) return 4;
    if (x < 2) return x * x;
    return x * x + 4 * x + 5;
}

int main() 
{
    int x, max_f;
    int first = 1;
    
    while (scanf("%d", &x), x != 0) 
    {
        int val = f(x);
        if (first || val > max_f) 
        {
            max_f = val;
            first = 0;
        }
    }
    
    printf("%d", max_f);
    return 0;
}
		
