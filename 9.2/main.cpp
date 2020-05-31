#include <stdio.h>
#include <conio.h>
#include <string.h> //<= Phai co thu vien string.h

//Prototype
void nhapChuoi(char a[]);
void xuatChuoi(char a[]);
void standardString(char a[]);//Xoa khoang trang bi thua!
void deleteTextSpacing(char a[]);//Xoa khoang trang giua cac tu!
void extractText(char a[]);//Trich xuat ki tu!
void vach();

main()
{
	char a[100];;
	nhapChuoi(a);
	xuatChuoi(a);
	standardString(a);
	deleteTextSpacing(a);
	extractText(a);
}

void vach()
{
	printf("\n");
	for(int i=0; i<80; i++)
		printf("/");
}

void nhapChuoi(char a[])
{
	printf("\n\n\tNHAP CHUOI\n");
	printf("\n\tNhap chuoi: ");
	gets(a);
}

void xuatChuoi(char a[])
{
	printf("\n\tXuat chuoi: [%s]\n", a);
}

void standardString(char a[])
{
	int demTruoc=0;//Luu so ki tu "_" nam o truoc chuoi!
	int demSau=0;//Luu so ki tu "_" nam o sau chuoi!
	int j=0;
	char b[100];
	vach();
	printf("\n\n\tXOA CAC KHOANG TRANG BI THUA\n");
	//Xoa khoang trang o dau chuoi!
	{
		for(int i=0; i<strlen(a); i++)
		{
			if(a[i]==char(32))
				demTruoc++;
			else
			{
				for(int i=0; i<strlen(a); i++)
					a[i]=a[i+demTruoc];
				break;
			}
		}
	}
	//Xoa khoang trang o phia cuoi chuoi!
	{
		for(int i=strlen(a)-1; i>0; i--)// -1 de loai null cuoi chuoi
		{
			if(a[i]==char(32))
				demSau++;
			else
			{
				a[i+1]=char(00);
				break;
			}
		}	
	}
	//Xoa khoang trang bi thua o giua cac tu!
	//Phuong phap tach chuoi a -> b.
	{
		for(int i=0; i<strlen(a); i++)
		{
			if(a[i]!=char(32))
				b[j++]=a[i];
			if(a[i]==char(32) && a[i+1]!=char(32))
				b[j++]=char(32);
		}
	}
	//Xuat chuoi vua xu li!
	xuatChuoi(b);
}

void deleteTextSpacing(char a[])
{
	int j=0, dem=0;
	char b[100];
	vach();
	printf("\n\n\tXOA TAT CA KHOANG TRANG TRONG CHUOI\n");
	for(int i=0; i<=strlen(a); i++)
		if(a[i]!=char(32))
			b[j++]=a[i];
	xuatChuoi(b);
}

void extractText(char a[])
{
	char kiTuDau[100], kiTuCuoi[100], kiTuPos[100];
	int n;//So luong ki tu muon trich xuat!
	int h=0, j=0, k=0, pos;//Tang size cho chuoi!
	//
	vach();
	printf("\n\n\tTRICH XUAT KI TU DAU/CUOI/VI TRI\n");
	//Nhap vao so ki tu muon trich xuat!
	do
	{
		printf("\n\tNhap vao so n ki tu muon trich: ");
		scanf("%d", &n);
	} while(n>strlen(a));//So luong ki tu muon trich xuat phai nho hon do dai chuoi a!
	//Trich xuat ki tu dau!
	{
		for(int i=0; i<n; i++)
			kiTuDau[h++]=a[i];
		kiTuDau[h]=char(00);
	}
	//Trich xuat ki tu cuoi!
	{
		for(int i=strlen(a)-n; i<strlen(a); i++)
			kiTuCuoi[j++]=a[i]; 
		kiTuCuoi[j]=char(00);
	}
	xuatChuoi(kiTuDau);
	xuatChuoi(kiTuCuoi);
	//Trich xuat ki tu tai vi tri da yeu cau!
	{
		do
		{
			printf("\n\tChon vi tri muon trich xuat trong chuoi: pos = ");
			scanf("%d", &pos);//pos vi tri trich xuat!
			printf("\n\tNhap vao so n ki tu muon trich: ");
			scanf("%d", &n);
		} while (pos<=0 || pos>strlen(a));
		for(int i=pos; i<pos+n; i++)
			kiTuPos[k++]=a[i];
		kiTuPos[k]=char(00);
	}
	//Xuat!
	xuatChuoi(kiTuPos);
}
//
//
//
//
//
//
//
//
