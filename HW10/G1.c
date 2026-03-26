#include <stdio.h>
#include <string.h>
#define MAX 100
int main(void)
{
	FILE *input;
	FILE *output;
	input=fopen("input.txt", "r");
	output=fopen("output.txt","w");
	char str[MAX+1];
	fscanf(input,"%[^\n]",str);
	int len=strlen(str);
	fprintf(output,"%s, %s, %s %d", str, str, str, len);
	printf("%s, %s, %s %d", str, str, str, len);
	fclose(input);
	fclose(output);
	return 0;
}
