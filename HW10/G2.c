#include <stdio.h>
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
	int N;
	fscanf(input,"%d", &N);
	int digit=2;
	char letter='A';
	for (int i=1; i<=N; i++)
	{
		if (i%2==1)
		{
			fprintf(output, "%c", letter);
			letter++;
		}
		else
		{
			fprintf(output, "%d", digit);
			digit+=2;
			if (digit>8)
			{
				digit=2;
			}
		}
	}
	fclose(input);
	fclose(output);
	return 0;
}
