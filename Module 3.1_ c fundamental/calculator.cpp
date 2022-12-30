/* WAP to make simple calculator 
(operation include Addition,Substraction, Multiplication, Division, Modulo)
*/

#include<stdio.h>
int main()
{
	float a, b;
	int x,y ;
	printf("Enter a value of A : ");
	scanf("%f",&a);
	printf("Enter a value of B : ");
	scanf("%f",&b);
	printf("\nAddition of A + B        : %.2f\n",a+b);
	printf("Substraction of A - B    : %.2f\n",a-b);
	printf("Multiplication of A * B  : %.2f\n",a*b);
	printf("Division of A / B        : %.2f\n\n",a/b);
	printf("Enter a value of A : ");
	scanf("%d",&x);
	printf("Enter a value of B : ");
	scanf("%d",&y);
	printf("\nModulo of A % B  : %d",x %y);
	return 0;
}
