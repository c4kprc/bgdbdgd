#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char c = (rand() % 26) + 'A';
    int i = rand() % 1000;
    float f = (float)rand() / RAND_MAX * 100.0;
    double d = (double)rand() / RAND_MAX * 100.0;
    printf("значения: символ: %c, число: %d, число с плавающей точкой: %.2f, число с двойной точностью: %.2f\n", c, i, f, d);
    return 0;
}
