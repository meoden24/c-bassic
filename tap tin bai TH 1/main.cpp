#include <bits/stdc++.h> // KI?M TRA KH�NG �U?C D�NG THU VI?N N�Y


int main() 
{
		FILE *fp;
		//m? t?p tin d? ghi
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
		
		
	
		// m? t?p tin d? d?c
		// T?O 1 FILE VAN B?N ? ? C c� t�n l� INPUT.TXT
		fp= fopen("C:\INPUT.txt","r");
		// in ra m�n h�nh
		
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
