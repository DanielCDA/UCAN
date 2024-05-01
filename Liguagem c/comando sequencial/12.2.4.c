# include <stdio.h>
# include <math.h>
int main()
{
	float s,area,raiz;
	int a,b,c;
	printf("\n escreve o valor de a b e c: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	s=(a+b+c)/2;
	raiz=sqrt(s*(s-a)*(s-b)*(s-c));
	area=raiz;
	printf("O valor da area he: %f", area);
	return 0;
	
}
