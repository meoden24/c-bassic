#include <stdio.h>
long luythua(int a, int n)
{
	if(n==0)
		return 1;
			return luythua(a,n-1) *a;
}

long conglt(int a, int n)
{
	if(n==0)
		return 0;
			return luythua(a,n)	 + conglt(a, n-1);
}

int main()
{
	int a=2 , n =3;
	
	printf("%ld",	conglt(a,n));
	return 0;
}
