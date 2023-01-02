#include<stdio.h>
main()
{
	int n,rev=0,last;
	
	printf("Enter No : ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		last=n%10;
		rev=rev*10+last;
		n=n/10;
	}
	
	printf("Reverse : %d",rev);
}
