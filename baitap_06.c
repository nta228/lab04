#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int a,b,c,tong,diemtb;

	printf("\nnhap diem toan : ");
	scanf("%d", &a);	
	
	printf("\nnhap diem ly : ");
	scanf("%d", &b);
	
	printf("\nnhap diem hoa : ");
	scanf("%d", &c);
	
    tong=a+b+c;
    diemtb=tong/3;
	printf("\ntong diem cua 3 mon la : %d", tong);
	printf("\ndiem trung binh cua 3 mon la : %d", diemtb);
	getch();
}
