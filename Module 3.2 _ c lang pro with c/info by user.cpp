//input user by name,age,dob,address,contact

#include<stdio.h>
main()
{
	char name[20],dob[20],address[30];
	int age;
	double contact;
	
	printf("Name : ");
	scanf("%s",&name);
	printf("Name : %s",name);
	
	printf("\nAge : ");
	scanf("%d",&age);
	printf("Age : %d",age);
	
	printf("\nDOB : ");
	scanf("%s",&dob);
	printf("DOB : %s",dob);
	
	printf("\nAddress : ");
	scanf("%s",&address);
	printf("Address : %s",address);
	
	printf("\nContact : ");
	scanf("%lf",&contact);
	printf("Contact : %.0lf",contact);
	
	return 0;
}
