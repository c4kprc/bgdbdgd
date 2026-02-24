#include <stdio.h>

int main() {
    float a = 12.5;
    float b = 2.3;
    
    int celaya_chast = (int)(a / b);
    float ostatok = a - (celaya_chast * b);
    
    printf("Остаток: %.2f\n", ostatok);
    return 0;
}