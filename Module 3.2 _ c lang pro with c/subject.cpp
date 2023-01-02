// input values of 5 subjets bt users with ifelse condition.marks >40= pass; <40=fail; input must be =<100;

#include<stdio.h>
int main()
{
	float mathematics,biology,physics,chemestry,english;
	
	printf("Mathematics : ");
	scanf("%f",&mathematics);
	
	
	printf("\nBiology : ");
	scanf("%f",&biology);
	
	printf("\nPhysics : ");
	scanf("%f",&physics);
	
	printf("\nChemestry : ");
	scanf("%f",&chemestry);
	
	printf("\nEnglish : ");
	scanf("%f",&english);
	
	if((mathematics>=40&&mathematics<=100)&&(biology>=40&&biology<=100)&&(physics>=40&&physics<=100)&&(chemestry>=40&&chemestry<=100)&&(english>=40&&english<=100))
	{
		printf("Yahoooo.. You are Pass");
	}
	else
	{
		printf("\n\nBetter Luck Next Time '-' ");
	}
	
	
	
	return 0;
}
