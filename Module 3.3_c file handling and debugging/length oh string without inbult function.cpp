// string

#include<stdio.h>
main()
{
	int i,j,length=0;
	char n[999];
	printf("Enter string : ");
	scanf("%s",&n);
	
	for(i=0;n[i]!='\0';i++)
	{
		length++;
	}
	printf("Length of String : %d ",length);
}

