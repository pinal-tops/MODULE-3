// WAP to find area of circle, rectangle & tingle

#include<stdio.h>
#define PI 3.14
int main()
{
	float circle,rectangle,tringle,r,height,base,width,radious;
	
	printf("Enter a size of Radious :  ");
	scanf("%f",&radious);
	
	printf("Enter a size of Height :  ");
	scanf("%f",&height);
	printf("Enter a size of Base :  ");
	scanf("%f",& base);
	printf("Enter a size of width :  ");
	scanf("%f",&width);
	
	circle=PI*radious*radious;
	rectangle=height*width;
	tringle=(height*base)/2;
	
	printf("\nArea of circle : %.2f",circle);
	printf("\nArea of Rectangle : %.2f",rectangle);
	printf("\nArea of Tringle : %.2f",tringle);
	return 0;
}
