#include <stdio.h>

int main() {
    int select;
    float num1, num2, result;

    printf("Nhap so thu nhat: ");
    scanf("%f", &num1);
    printf("Nhap so thu hai: ");
    scanf("%f", &num2);

    do {
        printf("\nmay tinh sieu cap vip pro\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &select);

        switch (select) {
            case 1:
                result = num1 + num2;
                printf("tong: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("hieu: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("tich: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("thuong: %.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf(" Khong the chia cho 0\n");
                }
                break;
            case 5:
                printf("thoat khoi may tinh\n");
                break;
            default:
                printf("xin vui long chon lai trong khoang 1 - 5 \n");
        }
    } while (select != 5);

    return 0;
}
