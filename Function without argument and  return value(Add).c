#include<stdio.h>
#include<conio.h>
main()
{
int add();
int c;
c=add();
printf("Result=%d",c);
}
int add()
{
	int a,b,c;
	printf("Enter 2 values");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}