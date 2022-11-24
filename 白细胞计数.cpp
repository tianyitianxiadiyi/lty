#include <stdio.h>
#include <math.h>
double a[10000];
int main()
{
	int n;
	double t=0.0;
	double sum=0.0;
	scanf("%d",&n);
	int i=0;int j=0;
	for(i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);
	} 
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t; 
			}
		}
	}
//	for(i=0;i<n;i++)
//	{
//		printf("%lf ",a[i]);
//	}
	for(i=0;i<n;i++)
	{
		sum+=a[i]; 
	}
	double m=0.0;
	m=(sum-a[0]-a[n-1])/(n-2);
	double q=0.0;
	double w=0.0;
//	printf("%.2f",m);
	for(i=1;i<=n-2;i++)
	{
		q=a[i]-m;
		q=fabs(q);
		if(q>w)
		{
			w=q;
		}
	}
	printf("%.2f %.2f",m,w);
	return 0;
 } 
