#include<stdio.h>
main()
{
	int i,j,a,k;
	
	printf("Enter Number : ");
	scanf("%d",&a);
	
		for(i=a;i>=1;i--)
	{
		for(k=a;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		
		printf("\n");
	}
	
	for(i=2;i<=a;i++)
	{
		for(k=a;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		
		printf("\n");
	}
	
	
}
