

#include <stdio.h>
#include <string.h>
#define SIZE 10
#define MAX 1000
void count_digits(char arr[], int cnt[SIZE])
{
	
	int len= strlen(arr);
	
	
	for(int i=0;i<SIZE;i++)
	{
		cnt[i]=0;
	}
	for (int i=0; i<len; i++)
	{
		int digit=arr[i]-'0';
		cnt[digit]++;
	}
}
void print_result(int cnt[SIZE])
{
	for (int i=0; i<SIZE;i++)
	{
		if (cnt[i]>0)
		{
			printf("%d %d\n", i, cnt[i]);
		}
	}
}	
int main (void)
{
	char arr[MAX+1];
	int cnt[SIZE];
	scanf("%s", arr);
	count_digits(arr,cnt);
	print_result(cnt);
	return 0;
}
