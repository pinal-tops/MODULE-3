#include<stdio.h>
main()
{
	int n,fl,last;
	
	printf("Enter No : ");
	scanf("%d",&n);
	
	last=n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	
	fl=last+n;
		
	printf("First Last Total : %d",fl);
}
