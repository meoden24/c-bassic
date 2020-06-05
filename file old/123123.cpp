#include<stdio.h>
#include<math.h>
/* double capsocong(int n, int a, int r)
{
	if(n==1) return a;
		return r + capsocong(n-1, a, r);
}
int main() 
{
	int a, n, r;
	printf("Nhap  n: ");
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
	
	printf("Nhap  r: ");
	scanf("%d", &r);
		for(int i=1;i<=n;i++)
		{
			if(i%11==0) printf("\n");
			printf("U%d = %d ", i, a + (i-1)*r);
		}
	
	return 0;
} */


int Nhi_phan(int n)
{	
	int b= n%2;
	if(n==0) return n;
		return Nhi_phan(n/2)*10+b;
}
int main()
{
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	printf("%d",Nhi_phan(n));
}





























