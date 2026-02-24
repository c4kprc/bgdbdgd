#include <stdio.h>

int main() {
    int num1 = 25;
    int num2 = 10;
    int raznost = num1 - num2;
    float chastnoe = (float)num1 / num2;
    
    printf("Разность: %d\n", raznost);
    printf("Частное: %.2f\n", chastnoe);
    return 0;
}
