#include <bits/stdc++.h> // KI?M TRA KHÔNG ÐU?C DÙNG THU VI?N NÀY


int main() 
{
		FILE *fp;
		//mở tập tin để ghi
		fp= fopen("C:\INPUT.txt","w");
		if(fp==NULL)
		{
			printf("khong mo duoc tap tin");
			exit(0);
		}
		char s[200];
			fgets(s,200,stdin);
	
			fputs(s,fp);
		fclose(fp);
		
		
	
		// mở tập tin để đọc
		
		fp= fopen("C:\INPUT.txt","r");
		// in ra màn hình
		
			char so[200];
		printf("Du lieu vua nhap vao file la: ");
			while( fscanf(fp,"%s", so) != EOF){
				printf("%s ", so);
			}
			printf("\n" );
				
				
				
		// tinh tong binh phuong
	
		int t ; 
		fseek( fp, 0, SEEK_SET ); 
		printf("tong binh phuong: ");
			while( fscanf(fp,"%s", so) != EOF){
				t += atoi(so)*atoi(so);
			}printf("%d", t);
		fclose(fp);
		getchar();
	return 0;
}
