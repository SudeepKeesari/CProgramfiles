#include<stdio.h>
main()
{
	int a[5],i,max,min;
	printf("Enter 5 elements");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	max=min=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]>max)
		max=a[i];
		else min=a[i];
	}
	printf("Maximum=%d\nminimum=%d",max,min);
}