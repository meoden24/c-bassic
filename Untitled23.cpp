#include<stdio.h>
#include<math.h>
double capsocong(int n, int a, int r)
{
	if(n<=1) return a;
		return r + capsocong(n-1, a, r);
}
int main() 
{
	int a, n, r, q;
	printf("Nhap  n: ");fflush(stdin);
	scanf("%d", &n);
	
	do
	{
		if (n<0){
		
			printf("Nhap sai Nhap lai n: ");
			scanf("%d", &n);
			}
			
	} while (n < 0);
	printf("Nhap  a: ");
	scanf("%d", &a);
	a*=1.0;
	printf("Nhap  r: ");
	scanf("%d", &r);
			printf("%lf ", capsocong(n, a, r));
	
	
	return 0;
}
