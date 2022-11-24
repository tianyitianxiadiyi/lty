#include <stdio.h>
int q[10000][10000];
int main()
{
	int i,j,k;
	scanf("%d %d %d",&i,&j,&k);
	int m[i][j];
	int n[j][k];

	int a,b,c;
	a=0;b=0;c=0;
	for(a=0;a<i;a++)
	{
		for(b=0;b<j;b++)
		{
			scanf("%d",&m[a][b]);
		} 
	}
	a=0;b=0;
	for(a=0;a<j;a++)
	{
		for(b=0;b<k;b++)
		{
			scanf("%d",&n[a][b]);
		}
	}
	for(a=0;a<i;a++)
	{
		for(b=0;b<k;b++)
		{
			for(c=0;c<j;c++)
			{
				q[a][b]+=m[a][c]*n[c][b];
			}
		}
	}
	for(a=0;a<i;a++)
	{
		for(b=0;b<k;b++)
		{
			printf("%d ",q[a][b]);
		}
			printf("\n");
	}
	return 0;
}
