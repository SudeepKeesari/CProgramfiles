#include<stdio.h>
main()
{
int n,i=1,s=0;
printf("Enter a value:");
scanf("%d",&n);
while(i<=n)
{
s=s+i;
i++;
}
printf("Result=%d",s);
}