/*
  i=6 j=6    666666
  i=5 j=5    55555
  i=4 j=4    4444
  i=3 j=3    333
  i=2 j=2    22
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
			printf("%d",i);
		}
		printf("\n");
	}
	
return 0;
}
