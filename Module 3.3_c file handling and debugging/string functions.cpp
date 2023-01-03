// Length of strng usinf of function string 


#include<stdio.h>
#include<string.h>
int main()
{
	char s[999],s1[999],ch;
	int a;
	
	printf(" Enter String : ");
	gets(s);
	
	printf(" Enter character : ");
	scanf("%c",&ch);
	strlen(s);
	printf("\nLength of string : %d\n",strlen(s));

	printf("\n occurance of string : %s",strchr(s,ch));

	printf("\nLower Charescte of string : %s",strlwr(s));
	
	printf("\nUper of string : %s",strupr(s));

	printf("\nRevers of string : %s",strrev(s));	
	
	return 0;
}
