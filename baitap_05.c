#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int top, bottom, height, Sht;

	printf("Nhap vao day nho cua hinh thang : ");
	scanf("%d", &top);	
	
	printf("Nhap vao day lon cua hinh thang : ");
	scanf("%d", &bottom);
	
	printf("Nhap vao chieu cao cua hinh thang : ");
	scanf("%d", &height);
	
	Sht = (top + bottom)*height/2;
	printf("Dien tich hinh thang la : %d", Sht);
	getch();
}
