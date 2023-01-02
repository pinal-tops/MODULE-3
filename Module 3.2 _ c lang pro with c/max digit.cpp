#include<stdio.h>
main()
{
	int n,max=0,a,b;
	
	printf("Enter No : ");
	scanf("%d",&n);
	
	a=n;
	
	while(a>0)
	{
		n=a%10; 
		a=a/10;
	
		if(max<n)
		{
			max=n;
		}
	}

		
	printf("Max Number : %d",max);
	
}
