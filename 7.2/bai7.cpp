#include<stdio.h>
#include<string.h>
void DemTu(char s[]);
int main()
{
	char s[1000];	
	gets(s);
	DemTu(s);
		return 0;
}
void DemTu(char s[])
{
	int n, i=0, dem=0;
	n=strlen(s);
	while(i<n)
		{
			while(i<n && s[i]==' ') i++;
			while(i<n && s[i]!= ' ') putc(s[i++], stdout);
			putc('\n',stdout);
			dem++;
		}
		printf("so tu trong chuoi: %d",dem);
}
