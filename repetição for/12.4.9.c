# include <stdio.h>
int main ()
{
	int x, y, i, mult;
	printf("O valor da base: ");
	scanf("%d", &x);
	printf("O valor do exponte: ");
	scanf("%d", &y);
	mult = x;
	for(i = 1; i <= y; i++);
	{
		x = x * mult;
	}
	printf("a potencia de %d elevado a %d eh %d", mult, y, x);
}
