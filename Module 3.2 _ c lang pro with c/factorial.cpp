// wap to find a factorial of a no

#include<stdio.h>
int main()
{
	int no,i,fact=1;
	printf("enter a no to find a factorial : ");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		fact*=i; //fact=fact*i
	
	printf("\nfactoial is : %d",fact);
}
	return 0;
	
}

