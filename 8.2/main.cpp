#include <stdio.h>
#include <string.h>
#define MAX 1000
void longest(char s[]);

int main() 
{
	char s[MAX];
	gets(s);
	longest(s);
	
	return 0;
}

void longest(char s[])
{
	int  n, Max=0,dem=0;
	int *b;
	n=strlen(s);
	char *p; char *s1[50];
	
	p =strtok(s, " ");
	
	while(p!='\0')
	{

		s1[dem] = p;
		dem++;
		p=strtok(NULL," ");
	}
	for(int i=0; i<dem; i++)
	{
		b[i]= strlen(s1[i]);
		if(b[i]>Max) Max= b[i];
		
	}
	printf("\ndai nhat %d ky tu: ",Max);
	for(int i=0; i<dem; i++)
	{
		if(b[i]==Max)
		{
			printf("\n%s ", s1[i]);
			
		}
	}
	
	
}
