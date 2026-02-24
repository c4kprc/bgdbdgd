#include <stdio.h>

int main() {
    int grade;
    
    printf("Введите оценку (0-100): ");
    scanf("%d", &grade);
    
    if (grade >= 90 && grade <= 100) {
        printf("Отлично\n");
    } else if (grade >= 75 && grade <= 89) {
        printf("Хорошо\n");
    } else if (grade >= 50 && grade <= 74) {
        printf("Нормально\n");
    } else if (grade >= 0 && grade <= 49) {
        printf("Плохо\n");
    } else {
        printf("Неверная оценка\n");
    }
    
    return 0;
}
