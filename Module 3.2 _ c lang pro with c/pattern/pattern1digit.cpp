/*
1
12
123
1234
12345
123456

*/

#include<stdio.h>
int main()
{
	int n,i,j;
	
	printf(" enter no :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
return 0;
}
