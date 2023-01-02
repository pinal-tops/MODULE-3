#include<stdio.h>
main()
{
	int i,j,n,b=1;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",b+64);
			b++;
		}
		printf("\n");
	}

}

