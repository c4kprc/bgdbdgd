#include <stdio.h>

int main() {
    FILE *file;
    int numbers[100];
    int count = 0;
    
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Не удалось открыть файл\n");
        return 1;
    }
    
    while (fscanf(file, "%d", &numbers[count]) == 1) {
        count++;
    }
    
    fclose(file);
    
    printf("Массив из файла:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}
