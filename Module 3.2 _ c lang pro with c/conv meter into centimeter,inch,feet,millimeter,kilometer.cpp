// c program of converting meter into centimeter,inch,feet,millimeter,kilometer

#include<stdio.h>
int main()
{
	float meter,centimeter,inch,millimeter,kilometer,feet;
	
	printf("Meter      : ");
	scanf("%f",&meter);

    centimeter=meter*100;
    kilometer=meter/1000;
    millimeter=meter*1000;
    inch=meter*39.37;
    feet=meter*3.28;
    
    printf("\nCentimeter   : %f",centimeter);
    printf("\nkilometer    : %f",kilometer);
    printf("\nmillimeter   : %f",millimeter);
    printf("\ninch         : %f",inch);
    printf("\nfeet         : %f",feet);
		
	return 0;
}
