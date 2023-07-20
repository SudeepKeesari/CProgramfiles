#include<stdio.h>
main()
{
	int a=0,b=1,n,i,c;
	printf("Enter number of terms:");
	scanf("%d",&n);
	printf("fibonacci series:");
	for(i=0;i<=n;i++)
	{
    c=a+b;
    a=b;
    b=c;
    printf("%d ",c);
    }

}
