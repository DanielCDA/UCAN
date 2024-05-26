# include <stdio.h>
int main()
{
	float n, pi ;
	scanf("%f",&n);
	pi=2.0;
	for ( int i = 1; i <= n ; i = i+2)
	{
		if ( i%2 == 0)
		{
			pi= pi*( i/(i+1) );
		}	
		else 
		{
			pi= pi*( (i+1)/i );
		}		
	}
	printf("\n %f",pi );
	return 0;
}
