#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    
    printf("Введите первую строку: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;
    
    printf("Введите вторую строку: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;
    
    if (strcmp(str1, str2) == 0) {
        printf("Strings match\n");
    } else {
        printf("Strings differ\n");
    }
    
    return 0;
}
