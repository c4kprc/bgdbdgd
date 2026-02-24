#include <stdio.h>

int main() {
    int a, b;
    
    printf("Введите два числа (a и b): ");
    scanf("%d %d", &a, &b);
    
    printf("Нечётные числа от %d до %d:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
