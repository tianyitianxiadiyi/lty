#include <stdio.h>
int a,b;

void love_first()
{
	printf("        *****	******\n");
	printf("    *********	*********\n");
	printf(" ************	************\n");
	a=0;b=0;
	for(a=0;a<3;a++)
	{
		for(b=0;b<29;b++)
			printf("*");
			printf("\n");
	}
}

void love_second()
{
	a=0;b=0;
	for(a=0;a<7;a++)
	{
		for(b=0;b<2*(a+1)-1;b++)	
			printf(" ");
		for(b=0;b<27-a*4;b++)
			printf("*");
			printf("\n");
	}
}

void love_third()
{
	a=0;b=0;
	for(a=0;a<14;a++)
		printf(" ");
		printf("*\n");
}

void Happy_GirlsDay()
{
	printf("			HAPPY Girls' Day\n");
	printf("			HAPPY Girls' Day\n");
	printf("			HAPPY Girls' Day\n");
}
int main()
{
	love_first();
	
	love_second();
	
	love_third();
	
	Happy_GirlsDay();
	
	return 0;
} 
