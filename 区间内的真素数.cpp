#include <stdio.h>
#include <math.h>
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
int Return(int i)
{	
	int cnt=0;
	int t=i;
	int k=0;
	while(t>0)
	{
		t/=10;
		cnt++;
	}
	int j;
	j=pow(10,cnt-1);
	while(i>0)
	{
		k+=j*(i%10);
		i/=10;
		j/=10;
	}
	
	return k;
}
int main()
{
	int m,n;
	int cnt=0;
	scanf("%d %d",&m,&n);
	int a=n-m;
	int i=0;
	int j=0;
	int t=0;
	int k=0;
	for(i=m;i<=n;i++)
	{	
		j=i;
		t=Return(j);
		if(Insprime(i)!=0)
		{
			if(Insprime(t)!=0)
			{
				cnt++;
			}
		}
	}
	k=cnt;
	cnt=0;
//	printf("%d",k);
	for(i=m;i<=n;i++)
	{	
		j=i;
		t=Return(j);
		if(Insprime(i)!=0)
		{
			if(Insprime(t)!=0)
			{
				printf("%d",i);
				cnt++;
				if(k!=cnt)
				{
					printf(",");
				}
			}
		}	
	}
//	printf("%d",k);
	if(k==0)
	{
		printf("No\n");
	}
	return 0;
 } 
