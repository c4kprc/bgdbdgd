#include <stdio.h>
int main() {
    float one_dim[] = {1.5, 2.3, 4.7, 3.1, 5.8};
    int size = 5;
    float sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += one_dim[i];
    }
    
    printf("Сумма элементов одномерного массива: %.2f\n", sum);
    
    int two_dim[3][4] = {
        {5, 2, 8, 1},
        {9, 4, 3, 7},
        {6, 0, 2, 4}
    };
    
    int max = two_dim[0][0];
    int min = two_dim[0][0];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (two_dim[i][j] > max) max = two_dim[i][j];
            if (two_dim[i][j] < min) min = two_dim[i][j];
        }
    }
    
    printf("Максимум в двумерном массиве: %d\n", max);
    printf("Минимум в двумерном массиве: %d\n", min);
    
    return 0;
}