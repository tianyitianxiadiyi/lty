#include <stdio.h>
int Insprime(int i)
{
	int j;
	for(j=2;j<=(i/2);j++)
	{
		if(i%j==0)
		{
			return 0;
			break;
		}
	}
}
int Maximum_prime_factor(int i)
{
	int j=0;
	int t=0;
	for(j=2;j<=(i/2);j++)
	{
		if(i%j==0&&j>t&&Insprime(j)!=0)
		{
			t=j;
		}
	}
	return t;
}
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int i=0;
	int j=0;
	for(i=m;i<=n;i++)
	{
		if(Insprime(i)!=0)
		{
			printf("%d",i);
		}
		else
		{
			j=Maximum_prime_factor(i);
			printf("%d",j);	
		}
		if(i!=n)
		{
			printf(",");
		}	
	}
	return 0;
 } 
