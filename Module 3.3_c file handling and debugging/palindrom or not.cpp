// Palindrom 


#include<stdio.h>
#include<string.h>
int main()
{
	char s[999],s1[999];
	
	printf(" Enter String : ");
	gets(s);

	strcpy(s1,s);
	strrev(s1);
	puts(s1);
	strlwr(s1);
	strlwr(s);
	
	if(strcmp(s,s1)==0)
	{
		printf("String is Palindrom");
	}
	
	else
	{
		printf("String is not Palindrom");
	}
	
	return 0;
}
