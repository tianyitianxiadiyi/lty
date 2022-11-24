#include <stdio.h>
int main()
{
	int n,cnt,t;//输入要猜的数字n还有猜的次数cnt .
//	int cnt2=0;
	scanf("%d %d",&n,&cnt);
	int i=1;
	for(i=1;i<=cnt;i++)
	{
		scanf("%d",&t);//输入我猜的数字t. 
		if(t==n&&i==1)
		{
			printf("Bingo\n");
			break;
		}
		if(t==n&&i>1&&i<=3)
		{
			printf("lucky\n");
			break;
		}
		if(t==n&&i>3)
		{
			printf("good guess\n");
			break;
		}
		if(t>n&&i!=cnt)
		{
			printf("too big\n");
		}
		if(t<n&&i!=cnt)
		{
			printf("too small\n");
		}
		if(t<0)
		{
			printf("Gameover\n");
			break;
		}
		if(i==cnt&&t!=n)
		{
			printf("Gameover\n");
		}
	}
	
	
	
	return 0;
 } 
