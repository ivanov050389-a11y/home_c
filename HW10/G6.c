
#include <stdio.h>
#include <string.h>
int is_palindrom(char str[])
{
	int len=strlen(str);
	for (int i=0;i<len/2;i++)
	{
		if (str[i]!=str[len-1-i])
		{
			return 0;
		}
	}
	return 1;
}	
int main(void)
{
	FILE *input= fopen("input.txt","r");
	FILE *output= fopen("output.txt", "w");
	if (input==NULL)
	{
		printf("ERROR");
		return 1;
	}
	if (output==NULL)
	{
		printf("file dont create");
		fclose(input);
		return 1;
	}
	char str[1001];
	fscanf(input,"%1000[^\n]", str);
	if (is_palindrom(str)==1)
	{
		fprintf(output,"YES");
	}
	else
	{
		fprintf(output,"NO");
	}
	
	fclose(input);
	fclose(output);
	return 0;
}
