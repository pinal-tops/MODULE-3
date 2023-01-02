#include<stdio.h>
int main()
{
	int n,a=0,b=1,c,i;
	printf("Enter Number : ");
	scanf("%d",&n);
	
	printf("%d   %d ",a,b);
	
	for(i=0;i<=n;i++)
	{
		c=a+b;
		printf("%3d",c);
		a=b;
		b=c;		
	}
}

