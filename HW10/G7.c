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
	char str[10001];
	fscanf(input,"%10000[^\n]",str);
	//int len=strlen(str);
	int low=0;
	int high=0;
	for (int i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			low++;
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			high++;
		}
	}
	fprintf(output,"%d %d", low, high);
	fclose(input);
	fclose(output);
	return 0;
}
