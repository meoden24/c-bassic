#include <bits/stdc++.h>

struct data
{
	char hoten[100];
	int luong, tuoi;
};

void input(data s[], FILE *f);
int main() 
{
	data s[100];
	char c[1000];
	FILE *fp;
	fp = fopen("C:\\INPUT.txt", "w");
	if (fp==NULL) 
	{ 
	   printf("Khong mo duoc tap tin"); 
	   exit(0); 
	}
	input(s,fp);
	
	fclose(fp);
	
	fp = fopen("C:\\INPUT.txt", "r");
	while(fscanf(fp,"%s",c) != EOF)
	{
		printf("%s",c);
	} 
	//printf("%s",fgets(c,200,fp));
	
	fclose(fp);
	return 0;
}

void input(data s[], FILE *f)
{
	int i=0, m;
	for(i;;i++){
	
	fflush(stdin);
	printf("Nhap ten: ");
	gets(s[i].hoten);
	m = (int) *s[i].hoten;
	//printf("%d",m);
	if(m==0) break;
	fprintf(f,"Ho Ten: %s \t",s[i].hoten);
	
	printf("Nhap tuoi: ");
	scanf("%d", &s[i].tuoi);
	fprintf(f,"Tuoi: %d \t", s[i].tuoi);
	getchar();
	printf("Nhap luong: ");
	scanf("%d", &s[i].luong);
	fprintf(f,"Luong: %d \t", s[i].luong);
	printf("\n");
	fprintf(f,"\n");
	}
	
	
}
