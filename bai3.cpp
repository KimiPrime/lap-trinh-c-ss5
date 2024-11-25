#include <stdio.h>

int main(){
	int n;
	int i;
	int sum = 0;
	do {
        printf("nhap mot so nguyen duong ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("khong phai so nguyen duong vui long nhap lai.\n");
        }
    } while (n <= 0);
    for (i = 1; i <= n; i++) {
        sum += i;
    }
        printf("tong so nguyen duong tu 1 den %d la: %d\n", n, sum);
        
        return 0;
}
