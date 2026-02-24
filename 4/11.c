#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    
    printf("Вводите строки (пустая строка - выход):\n");
    
    while (1) {
        printf("> ");
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = 0;
        
        if (strlen(str) == 0) {
            break;
        }
        
        for (int i = 0; i < strlen(str); i++) {
            printf("%c", toupper(str[i]));
        }
        printf("\n");
    }
    
    return 0;
}