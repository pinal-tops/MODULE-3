// WAP to // WAP tovconvert years into days & days into years

#include<stdio.h>
int main()
{
	int no_days, years,months,days;
	

	printf("\n\nEnter  Days : ");
	scanf("%d",&no_days);
	years=no_days/365;
	months=(no_days-years*365)/30;
	days=(no_days-years*365-months*30);
	printf("Years = %d ",years);
	printf("\nMonths = %d ",months);
	printf("\nDays = %d ",days);
	
	return 0;
}
