#include<stdio.h>
main()
{
	int n,sum=0,a,b;
	
	printf("Enter No : ");
	scanf("%d",&n);
	
	
	
	while(n!=0)
	{
		a=n%10;
		sum=sum+a;
		n=n/10;
			
	}
	
	
		
	printf("First Last Total : %d",sum);
}
