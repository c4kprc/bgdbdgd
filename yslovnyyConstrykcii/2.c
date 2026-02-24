#include <stdio.h>

int main() {
    int num = 15;
    
    if (num < 10 || num > 20) {
        printf("Outside the boundary (10..20)\n");
    } else {
        printf("Inside the boundary\n");
    }
    
    return 0;
}
