#include<stdio.h>
int fact(int n)
{
	if(n<=0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}

int main()
{
	int a;
	printf("Enter Number To Find Factriol : ");
	scanf("%d",&a);
	
	printf("Factriol Of %d Is %d ",a,fact(a));
}
