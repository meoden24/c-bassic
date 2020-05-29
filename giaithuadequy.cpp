#include<stdio.h>
int S(int n);
long P(int n);
long A(int n, int a);
int main()
{
	int n, a;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	printf("Nhap a: ");
	scanf("%d", &a);
	
	printf("S= %d\n",S(n) );
	
	printf("P= %ld\n",P(n));
	printf("A= %ld\n",A(n,a) );
}

long P(int n)
{
	if(n==1)
		return 1;
			return n*P(n-1);
}

int S(int n)
{
	if(n==0) return 0;
		return n + S(n-1);
}

long A(int n, int a)
{
	if(n==0) return 1;
	
		return a* A(n-1,a);
}
