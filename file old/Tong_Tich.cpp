#include<stdio.h>
#include<math.h>
long tong(int n);
long tich(int n);
double luythua(float a, int n);

int main() 
{
	int n;
	float a;
	printf("Nhap n: ");
	scanf("%d", &n);
		do
		{
			if(a < 0)
			{
			
			printf("Nhap sai, nhap lai n: ");
			scanf("%d", &n);
			}
		}while (n < 0);
	printf("Nhap a: ");
	scanf("%f", &a);
	printf("Tong : %ld ", tong(n));
	printf("Tich : %ld ", tich(n));
	printf("Luy thua: %.3lf" , luythua(a,n));
	return 0;
}

long tong(int n)
{
	if(n<=0)
		return 0;
			return n + tong(n-1);
	
}
long tich(int n)
{
	if(n<=1) return 1;
		return n*tich(n-1);
}
double luythua(float a, int n)
{
	if(n==1) return a;
	//	return a*luythua(a,n-1);
		
		double temp= luythua(a,n/2);
			if(n%2==0)
				return temp*temp;
					return temp*temp*a;
}
