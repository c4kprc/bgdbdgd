#include <stdio.h>

int main() {
    int n;
    
    printf("Сколько раз вывести Hello World? ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Hello World!\n");
    }
    
    return 0;
}
