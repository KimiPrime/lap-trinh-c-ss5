#include <stdio.h>

int main(){
	int n;
	int i;
	do {
		printf("nhap mot so nguyen tu 1 den 10");
		scanf("%d",&n);
		if (n<1 || n>10){
			printf("so ban vua nhap khong hop le vui long nhap lai\n");
		}
	} while (n<1 || n>10);
	printf("bang cuu chuong cua %d\n",n);
	for (i=1; i<= 10; i++ ){
		printf("%d x %d = %d\n", n, i, n*i);
	}
	return 0;
}
