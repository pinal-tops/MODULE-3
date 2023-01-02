#include<stdio.h>
int main()
{
	int a,i,n;
	printf(" Enter Number : ");
	scanf("%d",&a);
	for(n=1;n<=a;n++)
	{
		
		for(i=1;i<=10;i++)
		{
			printf("%d * %d = %d\n",n,i,n*i);
		}
		
		printf("\n");
	}
	return 0;
}

