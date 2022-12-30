// WAP tovconvert years into days & days into years

#include<stdio.h>
int main()
{
	float days, years;
	
	printf("Enter a Years to convert into Days : ");
	scanf("%f",&years);
    days=years*365;	
	printf("%.2f days",days);
	
	printf("\n\nEnter a Day to convert into Years : ");
	scanf("%f",&days);
	years=days/365;
	printf("%.2f year",years);
	return 0;
}
