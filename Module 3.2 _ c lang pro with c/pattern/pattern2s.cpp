/*pattern
*****
****
***
**
*
*/
#include<stdio.h>
int main()
{
	int a, i,j;
	
	printf("enter number for pattern :");
	scanf("%d",&a);
	
		for(i=a;i>=1;i--)   //(i=a;i>=1;i--) // (i=1;i<=a;i--)
	{
	for(j=1;j<=i;j++)  //*(j=1;j<=i;j++)  // (j=a;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
