#include<stdio.h>
#include<conio.h>
main()
{
void add(int,int);
int a,b;
printf("Enter 2 values:");
scanf("%d%d",&a,&b);
add(a,b);
}
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("Result=%d",c);
	
}