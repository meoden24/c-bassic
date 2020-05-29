#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 500000

void input(int Q[], int &n);
void output(int Q[], int n);
long sum_rec(int Q[], int n);
int max_rec(int Q[], int n);
int min_rec(int Q[], int n);
long sum(int Q[], int n);

int main()
{
	
	int Q[MAX], n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	input(Q, n);
	output(Q,n);
	printf("Tong: %ld\n ", sum_rec(Q, n));
	
	printf("MAX: %d\n ", max_rec(Q, n));
	
	printf("MIN: %d\n ", min_rec(Q, n));
	
	
	
	clock_t start= clock(); sum(Q, n); clock_t end = clock(); //Ðo th?i gian không dq
	printf("Time = %.3f",(float)(end-start)/100,"(s) \n");
	clock_t start_dq= clock(); sum_rec(Q, n); clock_t end_dq = clock(); // Ðo th?i gian d? quy
	printf("Time = %.3f",(float)(end_dq-start_dq)/100,"(s) \n");
	return 0;
}
/////////////////////////////////////
void input(int Q[], int &n)
{
	srand(time(NULL));
	for(int i=0; i<n; i++)
		{
			Q[i]=1+ rand()%1000000;
		}
}
/////////////////////////////////////
void output(int Q[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("Q[%d] = %d\n", i+1 ,Q[i]);
	}
}
/////////////////////////////////////
long sum_rec(int Q[], int n)
{
	if(n==0) return Q[0];
		return Q[n] + sum_rec(Q,n-1);
}
//////////////////////////////////////
int max_rec(int Q[], int n)
{
	
	if(n==1) return Q[0];
		return Q[n-1] > max_rec(Q, n-1) ? Q[n-1] : max_rec(Q, n-1);
}
/////////////////////////////////////////
int min_rec(int Q[], int n)
{
	if(n==1) return Q[0];
		return min_rec(Q, n-1) > Q[n-1] ? Q[n-1] : min_rec(Q, n-1);
}
//////////////////////////////
long sum(int Q[], int n)
{
	int S=0;
	for(int i=0; i<n; i++)
	{
		S += Q[i];
	}
	return S;
}


