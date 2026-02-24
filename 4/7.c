#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    
    printf("Сколько случайных чисел? ");
    scanf("%d", &n);
    
    int arr[n];
    srand(time(NULL));
    
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    
    printf("Случайный массив:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
