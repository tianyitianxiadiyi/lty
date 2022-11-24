#include <stdio.h>
int main()
{
	int m,n,t;
	scanf("%d %d",&m,&n);
	int a[n][m];
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&t);
			a[j][i]=t;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0; 
 } 
