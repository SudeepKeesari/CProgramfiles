#include<stdio.h>
int a,b;
void mul();
main()
{
	printf("Enter 2 values");
	scanf("%d%d",&a,&b);
	sum();
	mul();
}
void sum()
{
	int c;
	c=a+b;
	printf("Addition=%d\n",c);
}
void mul()
{
	int d;
    d=a*b;
	printf("Multiplication=%d",d);
}