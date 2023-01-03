// Function
// with return type & with parameter


/*
QUE: Accomplish below problem using Functions in C: -MENU---

1. Addition

2. Subtraction

3. Multiplication

4. Division

5. Modulo I

6. Exit

Enter your choice from the above MENU : 1

Enter two numbers for addition : 12

2

Ans : 14

*/

#include<stdio.h>

void add(int a,int b);
void sub(int a,int b);
void mul(int a,int b);
void div(int a,int b);
void mod(int a,int b);
int main()
{
	int a,b;
	
		menu:
	{
		printf("--------------MENU-----------------");
		printf("\n1. Addition \n2. Suntraction \n3. Multiplication \n4. Division \n5. Modulo  \n6. Exit");
	}
	
	
	int p;
	
	printf("\n\nSelect upon option : ");
	scanf("%d",&p);
	
	
	switch(p)
	{
	
	case 1:
	{
	
	printf("\nEnter two value of addition :\n");
	scanf("%d %d",&a,&b);
	add(a,b);
		

	goto menu;
	break;
	
	}
	
	
	case 2:
	{
	printf("\nEnter two value of Subtraction :\n");
	scanf("%d %d",&a,&b);
	
	sub(a,b);
	goto menu;
	break;
	
	}
	
	case 3:
	{
	printf("\nEnter two value of Multiplication :\n");
	scanf("%d %d",&a,&b);
	
	mul(a,b);
	goto menu;
	break;
	}
	
	case 4:
	{
	printf("\nEnter two value of Division :\n");
	scanf("%d %d",&a,&b);
	
	div(a,b);
	goto menu;
	break;
	}
	
	case 5:
	{
	printf("\nEnter two value of Modulo :\n");
	scanf("%d %d",&a,&b);
	
	mod(a,b);
	goto menu;
	break;
	}
	
	case 6:
	{
		printf("\n----thank you----\n\n");
		
		break;
	}
	
	default:
	{
		printf("\n!! Enter Valid Input !!\n\n\n");
		goto menu;
	}
}
	

	

	return 0;
}

void add(int a,int b)

{
		printf("\nAaddition of %d+%d= %d\n\n",a,b,a+b);
}
void sub(int a,int b)
{
	printf("\nSubtraction of %d-%d= %d\n\n",a,b,a-b);
}
void mul(int a,int b)
{
	printf("\nMultiplication of %d*%d= %d\n\n",a,b,a*b);
}
void div(int a,int b)
{
	printf("\nDivision of %d/%d= %d\n\n",a,b,a/b);
}
void mod(int a,int b)
{
	printf("\nModulo = %d\n\n",a%b);
}
