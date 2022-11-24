#include <stdio.h>
int main()
{
	int i,j;
	i=1.0;j=2.0;
	int n;
	double sum;
	scanf("%d",&n);
	int t;
	double k;
	double q;
	for(t=1;t<=n;t++)
	{
		sum+=1.0*j/i;
		k=i;q=j;
		j=k+q;
		i=q;
//		printf("%d %d\n",i,j);
	}
	printf("%.2f\n",sum);
	return 0;
}
//本题要求编写程序,计算序列 2/1+3/2+5/3+8/5+... 的前N项之和。注意该序列从第2项起，每一项的分子是前一项分子与分母的和，分母是前一项的分子。
//输入格式
//输入在一行中给出一个正整数N。
//输出格式:
//在一行中输出部分和的值，精确到小数点后2位。题目保证计算结果不超过双精度范围。
//输入样例 :
//20
//输出样例:
//32.66
