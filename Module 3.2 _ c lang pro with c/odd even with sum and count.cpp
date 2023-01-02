#include<stdio.h>
main()
{
	int i,a,countodd=0,counteven=0,totaleven=0,totalodd=0;
	

	
	for(i=1;i<=10;i++)
	{
			printf(" Enter number %d) : ",i);
			scanf("%d",&a);
		
		if(a%2==0)
		{
			
			counteven++;
			totaleven+=a;
		}
		else
		{
		
		    countodd++;
		    totalodd = totalodd + a;
		}
	}
	
			printf("\n even numbers : %d",counteven);
			
			printf("\n odd numbers : %d", countodd);
			
			printf("\n Total of even numbers : %d",totaleven);
			
			printf("\n Total of odd numbers : %d", totalodd);
	
}

