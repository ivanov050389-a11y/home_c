#include <stdio.h>
#include <string.h>
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
	int len=strlen(str);
	char last=str[len-1];
	for (int i=0; i<len-1;i++)
	{
		if (str[i]==last)
		{
			fprintf(output, "%d ", i);
		}
	}
	
	fclose(input);
	fclose(output);
	return 0;
}
