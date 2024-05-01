# include <stdio.h>
int main()
{
	int a,b,c;
	printf("primero numero: ");
	scanf("%d",&a);
	printf("segundo numero: ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("troca de valores a %d e b %d", a, b);
	return 0;
}
