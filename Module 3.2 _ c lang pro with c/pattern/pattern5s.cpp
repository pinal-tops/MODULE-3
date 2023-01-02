/*
        *
      * *
    * * * 
  * * * * 
* * * * * 

*/

#include<stdio.h>
int main ()
{
	int a,i,j,k;
	printf("enter numbers : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		for(k=0;k<=a-i;k++)
		{
		   printf(" ");
	}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}
