#include<stdio.h>
#include<conio.h>
main()
{
int add(int,int);
int a,b,c;
printf("Enter 2 values:");
scanf("%d%d",&a,&b);
c=add(a,b);
printf("Sum=%d",c);
}
int add(int a,int b)
{
	int c;
	c=a+b;	
}