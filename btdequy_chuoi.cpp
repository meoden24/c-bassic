#include <stdio.h>
#include<conio.h>
#include <string.h>

int duyet(char a[], int n, char x[])
{

	if(n==0)
	return a[0]==x[0] ? 1 :0;
//	return a[n-1] == x[0]?1:0;
	return a[n-1]== x[0]?1+duyet(a,n-1,x):duyet(a,n-1,x);
	
		
	
}
int main() 
{
	int n; char x[2];	
	printf("Nhap N: ");
	scanf("%d", &n);
	do{
		if(n<0)
		{
			printf("Nhap sai , nhap lai N: ");
			scanf("%d", &n);
		}
	} while (n<0);
	char a[n];
	printf("Nhap chuoi: ");
	scanf("%s", &a);
	fflush(stdin);
	printf("Nhap ky tu can tim:  ");
	scanf("%s", &x);
	
	printf("%d ", duyet(a, n, x));
	getch();
	return 0;
}



