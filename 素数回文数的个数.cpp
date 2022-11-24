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
	int n;
	int i;
	int cnt=0;
	scanf("%d",&n);
	for(i=11;i<=n;i++)
	{
		if(Insprime(i)!=0)
		{
			if(Return(i)==i)
			{
				cnt++;
			}
		}
	}
	printf("%d",cnt);
	
	
	
	return 0;
 } 
