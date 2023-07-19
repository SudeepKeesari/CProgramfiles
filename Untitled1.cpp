#include<stdio.h>
int add(int,int);
void main()
{
	printf("%d",add(10.5,20.5));
}
int add(int x,int y)
{
	return x+y;
}
