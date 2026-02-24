#include <stdio.h>

int main() {
    int a = 100;
    int b = 30;
    int c = 15;
    int sum = a + b + c;
    float average = sum / 3.0;
    
    printf("Сумма: %d\n", sum);
    printf("Среднее: %.2f\n", average);
    return 0;
}
