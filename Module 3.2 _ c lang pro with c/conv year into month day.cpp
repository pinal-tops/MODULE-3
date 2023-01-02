// c program of converting yera into day,week,month

#include<stdio.h>
int main()
{
	float year,day,week,month;
	
	printf("Enter a value of Year : ");
	scanf("%f",&year);
	
	day=year*365;
	week=year*53;
	month=year*12;
	
	printf("\nDays   : %f",day);
	printf("\nWeeks  : %f",week);
	printf("\nMonths : %f",month);
	
	return 0;
	
	
}
