#include<stdio.h>
main()
{
	int n,i=1,f=1;
	printf("Enter a value:");
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("Result=%d",f);
}