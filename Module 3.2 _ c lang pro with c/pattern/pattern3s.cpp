/*pattern
*
**
***
****
*****
****
***
**
*
*/

#include<stdio.h>
int main()
{
	int a,i,j;
	
	printf("enter number for pattern : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(i=a;i>=1;i--)
	{
		for(j=i-1;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}
