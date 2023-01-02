/*
  i=6 j=6    123456
  i=5 j=5    12345
  i=4 j=4    1234
  i=3 j=3    123
  i=2 j=2    12
  i=1 j=1    1
*/
#include<stdio.h>
int main()
{
	int n,i,j;
	
	printf(" enter no :");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
return 0;
}
