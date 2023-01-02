// c program for converting tem. celsius. into fahrenheit
//fahrenheit=(1.8*celsius)+32;

#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("Celsius : ");
	scanf("%f",&celsius);
	
	fahrenheit=(1.8*celsius)+32;
	printf("Fahrenheit : %f",fahrenheit);
	
	return 0;
}

