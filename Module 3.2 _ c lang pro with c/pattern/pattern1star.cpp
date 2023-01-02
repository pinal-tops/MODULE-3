/* pattern

*
**
***
****
***** 
 
*/

#include<stdio.h>
int main()
{
	int a,i,j;
	
	printf("enter a number to print pattern : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++) // i=1;i<=5
	{
		for(j=1;j<=i;j++) //j=1 ;j<=1(5)
		{
			printf("*"); //* 
			
			             //
		}
		printf("\n");
	}
	return 0;
	
}
