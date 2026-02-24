#include <stdio.h>

int main() {
    int a, b;
    
    printf("Введите два целых числа (a b): ");
    scanf("%d %d", &a, &b);
    
    if (b == 0) {
        printf("Ошибка: деление на ноль\n");
    } else {
        printf("%d / %d = %.2f\n", a, b, (float)a / b);
    }
    
    return 0;
}