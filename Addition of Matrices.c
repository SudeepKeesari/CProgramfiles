#include<stdio.h>
main()
{
 int a[2][2],b[2][2],c[2][2];
 int i;//row
 int j;//column
 printf("Enter 'A' matrix\n");
 for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
	scanf("%d",&a[i][j]);
}
}
 printf("Enter 'B' matrix\n");
  for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
	scanf("%d",&b[i][j]);
}
}
printf("Result matrix: \n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%d\t",c[i][j]);	
}
printf("\n");
}
}