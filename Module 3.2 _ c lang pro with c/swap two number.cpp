//wap to swap two no. using third variable in c

#include<stdio.h>
int main()
{
	int a,b;
	
	printf(" Enter Numbers 1 : ");
	scanf("%d",&a);
	printf(" Enter Numbers 2 : ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n Numbers 1 : %d",a);
	printf("\n Numbers 2 : %d",b);
	
	return 0;
}

