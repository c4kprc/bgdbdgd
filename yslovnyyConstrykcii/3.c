#include <stdio.h>

int main() {
    int num = 7;
    
    switch (num) {
        case 3:
            printf("Число 3 входит в набор [3, 7, 9]\n");
            break;
        case 7:
            printf("Число 7 входит в набор [3, 7, 9]\n");
            break;
        case 9:
            printf("Число 9 входит в набор [3, 7, 9]\n");
            break;
        default:
            printf("Число %d не входит в набор [3, 7, 9]\n", num);
    }
    
    return 0;
}
