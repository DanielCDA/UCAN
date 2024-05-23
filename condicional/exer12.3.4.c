#include <stdio.h>
int main()
{
	int po, p1,p2, media;
	printf("\n o valor da prova opcional he");
	scanf("%d",&po);
	if(p1==p2)
	{
		if(po<p1)
			media=(p1+p2)/2;
		else
			media=(p1+po)/2;
	}
	else
		if(p1>p2)
		{
			if(p2<po)
				media=(p1+po)/2;
			else
				media=(p1+p2)/2;
		}
		else
			if(p1<po)
				media=(p2+po)/2;
			else
				media=(p1+p2)/2;
	printf("\n a media he =%d",media);
	return 0;
}
