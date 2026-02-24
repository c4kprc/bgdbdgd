#include <stdio.h>

int main() {
    int h, w;
    
    printf("Введите высоту и ширину: ");
    scanf("%d %d", &h, &w);
    
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
