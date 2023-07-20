#include<stdio.h>
main()
{
	int n,t,r,rev;
	print("Enter a value");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(t=rev)
	printf("palindrome");
	else
	printf("Not a palindrome");
}
