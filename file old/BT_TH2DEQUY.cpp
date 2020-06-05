#include<stdio.h>
#include<math.h>
float lai_kep(float y, float x, int n); 

int main() 
{
	float y, x;
	int n;
	printf("Moi nhap so nam gui ngan hang: ");
	scanf("%d", &n);
	while(n < 0 )
	{
		if(n < 0)
		{
			printf("Nhap sai, Nhap lai: ");
			scanf("%d", &n);
		}
	}
	printf("Moi nhap so tien can gui vao Ngan Hang: ");
	scanf("%f", &y);	
	printf("Lai 1 nam: ");
	scanf("%f", &x);
	printf("so tien sau n nam la: %f \n", lai_kep(y, x, n));
	return 0;
}


float lai_kep(float y, float x, int n)
{
	
	if(n==0)
		return y;
				return (1+x) *lai_kep(y, x, n-1) ;
}




