#include <stdio.h>
int main()
{
	int n;
	float i,harmonica;
	printf(" O NUMERO A SEQUENCIA ARMONICA: ");
	scanf("%d",&n);
	if (n<0)
		printf("ERRO");
	else
		harmonica=1.0;
		for(i=1; i<n; i++)
		{
			harmonica = harmonica + 1/i;
		}
		printf("\n O valor da sequencia armonica eh: %f", harmonica);
	return 0;
		
}
