//wap to find alphabet a-h in c

#include<stdio.h>
int main()
{
	printf("-----------------------TARAK MEHTA KA OOLTA CHASHMA-----------------------\n");
	char alphabet;
	printf("\nEnter Alphabet among A,B,C,D,E,F,G,I,J,K,M,P,R,S,T,H : ");
	scanf("%c",&alphabet);
	
	if(alphabet=='a')
	{
		printf("A for Aiyer");
		printf("\nA for Abdul");
	}
	else if(alphabet=='b')
	{
		printf("B for Babita ");
		printf("\n B for Bhide");
	}
	else if(alphabet=='c')
	{
		printf("C for Champak ");
	}
	else if(alphabet=='d')
	{
		printf("D for Daya ");
	}
	else if(alphabet=='e')
	{
		printf("E for Emily ");
	}
	else if(alphabet=='f')
	{
		printf("F for Friends");
	}
	else if(alphabet=='g')
	{
		printf("G for Gada ");
		printf("G for Gokuldham Society");
	}
	else if(alphabet=='h')
	{
		printf("H for dr.Hathi");
	}
	else if(alphabet=='i')
	{
		printf("i for India");
	}
	else if(alphabet=='t')
	{
		printf("T for Tapu ");
		printf("\nT for Tarak mehta");
	}
	else if(alphabet=='s')
	{
		printf("S for Sonu ");
	}
	else if(alphabet=='j')
	{
		printf("J for Jethalal ");
	}
	else if(alphabet=='m')
	{
		printf("M for Madhavi ");
	
	}
	else if(alphabet=='r')
	{
		printf("R for RoshanSingh ");
		printf("\nR for RitaReporter");
	}
	else if(alphabet=='p')
	{
		printf("P for Pinku ");
	}
	else if(alphabet=='k')
	{
		printf("K for Komal ");
	}
	else
	{
		printf("\nenter valid alphabet..!!");
	}
	return 0;
}
