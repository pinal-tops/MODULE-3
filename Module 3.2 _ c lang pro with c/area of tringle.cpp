//find aera of tringle.

#include<stdio.h>
int main()
{
	int height,base;
	
	float areaoftringle;
	printf("Height           : ");
	scanf("%d",&height);
	
	printf("Base             : ");
	scanf("%d",&base);
	
	areaoftringle=(height*base)/2;
	printf("Area of Tringle  : %.2f",areaoftringle);
	
	
	return 0;
}
