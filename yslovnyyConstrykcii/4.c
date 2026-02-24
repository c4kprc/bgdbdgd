#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Введите три числа: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a == b && b == c) {
        printf("All numbers are equal\n");
    } else {
        int min = a;
        if (b < min) min = b;
        if (c < min) min = c;
        printf("Самое маленькое число: %d\n", min);
    }
    
    return 0;
}
