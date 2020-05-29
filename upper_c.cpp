#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<string.h>
char upper(char s[])
{
	
	for(int i=0; i< strlen(s); i++ )
	{
		if(s[i]!= ' ' & s[i]>= 'a' &s[i]<= 'z')
		s[i]= s[i]- 32;
	}
}
int main() 
{
	
	char n[100];
	gets(n);
	upper(n);
	puts(n);
	
	return 0;
}
