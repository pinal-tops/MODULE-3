// WAP to find leap year

#include<stdio.h>
int main()
{
	int year;
	
	printf("Enter a year to check Leap year or not : ");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("Leap year");
	}
	else
	{
		printf("It is not a leap year");
	}
	return 0;
}
