#include<stdio.h>
main()
{
	int p,t,r,SI;
	printf("Enter Principle amount:");
	scanf("%d",&p);
	
	printf("Enter Tenure In Years:");
	scanf("%d",&t);
	
	printf("Enter Rate of Intrest:");
    scanf("%d",&r);
    
 SI=(p*t*r)/100;
 printf("Simple Intrest=%d",SI);
}