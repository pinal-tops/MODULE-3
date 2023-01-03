// Ascending descending order

#include<stdio.h>
int main()
{
	int a[5],b=0,c=0,i,j;
	
	for(i=0;i<5;i++)
	{
		printf("Enter Element : ");
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<5;i++)
	{
		
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		
		}			
	}
		printf("\nascending order");	
		for(i=0;i<5;i++)
		{
				printf("\n%d",a[i]);	
		
		}
		
			
		printf("\ndescending order");	
		for(i=4;i>=0;i--)
		{
				printf("\n%d",a[i]);	
		
		}
	

	return 0;
}
