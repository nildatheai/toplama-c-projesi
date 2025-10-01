#include <stdio.h>

int main() {
    int a, b;
    printf("Birinci sayi: ");
    scanf("%d", &a);
    printf("Ikinci sayi: ");
    scanf("%d", &b);
     // scanf sonrası ENTER'ı temizle
    while ((getchar()) != '\n');

    printf("Toplam: %d\n", a + b);

    // Çıkmadan önce ENTER bekle
    getchar();

    return 0;
}
