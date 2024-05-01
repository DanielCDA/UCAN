# include <stdio.h>
int main()
{
	int num, suc, ant, soma;
	printf("\n escreva o nuemro: ");
	scanf("%d",&num);
	suc=num+1;
	ant=num-1;
	soma=(suc*3)+(ant*2);
	printf("A soma do triplo do seu sucessor pelo dobro do seu antecessor he %d", soma);
	return 0;
}
