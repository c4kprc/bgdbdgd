#include <stdio.h>

int main() {
    double a, b, result;
    char op;
    int run = 1;
    
    printf("Введите 'q' для выхода)\n");
    
    while (run) {
        printf("\nВведите выражение : ");
        if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
            char c;
            scanf(" %c", &c);
            if (c == 'q') {
                run = 0;
                continue;
            }
            printf("Ошибка ввода\n");
            while (getchar() != '\n');
            continue;
        }
        
        switch (op) {
            case '+':
                result = a + b;
                printf("%.2f + %.2f = %.2f\n", a, b, result);
                break;
            case '-':
                result = a - b;
                printf("%.2f - %.2f = %.2f\n", a, b, result);
                break;
            case '*':
                result = a * b;
                printf("%.2f * %.2f = %.2f\n", a, b, result);
                break;
            case '/':
                if (b != 0) {
                    result = a / b;
                    printf("%.2f / %.2f = %.2f\n", a, b, result);
                } else {
                    printf("Ошибка: деление на ноль\n");
                }
                break;
            default:
                printf("Неверный оператор\n");
        }
    }
    
    printf("До свидания!\n");
    return 0;
}
