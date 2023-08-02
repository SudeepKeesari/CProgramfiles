#include<stdio.h>
#include<conio.h>
main()
{
	void sum();
	
	sum();
}
void sum()
{
	int a,b,c;
	printf("Enter 2 values");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Result=%d",c);
}