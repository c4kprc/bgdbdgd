#include <stdio.h>

int main() {
    int num;
    
    printf("Введите число: ");
    scanf("%d", &num);
    
    if (num == 0) {
        printf("Zero\n");
    } else if (num > 0) {
        printf("Positive\n");
    } else {
        printf("Negative\n");
    }
    
    return 0;
}
