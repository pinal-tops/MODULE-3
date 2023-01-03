#include<stdio.h>
main()
{
	int a[5],i;
	
	for(i=0;i<5;i++)
	{
		printf(" Enter Element of Array : ");
		scanf("%d",&a[i]);
	}	
	
	for(i=0;i<5;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
	}
	
	printf(" Largest Element of Array : %d",a[0]);
} 
