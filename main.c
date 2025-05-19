#include <stdio.h>

float calculateY(int x[], int N, int y[], int M) {
    int k1 = 0, k2 = 0;
    int p1 = 1, p2 = 1;

   
    for (int i = 0; i < N; i++) {
        if (x[i] > 0) {
            p1 *= x[i];
            k1++;
        }
    }

   
    for (int i = 0; i < M; i++) {
        if (y[i] > 0) {
            p2 *= y[i];
            k2++;
        }
    }

  
    if (k1 == 0 || k2 == 0) {
        printf("Помилка: кількість позитивних елементів у масиві дорівнює 0\n");
        return 0.0;
    }

    return (float)(p1 + p2) / (k1 * k2);
}

int main() {
    int x[] = {2, -3, 5, 1, -1};
    int y[] = {-4, 6, 2, -2};
    int N = sizeof(x) / sizeof(x[0]);
    int M = sizeof(y) / sizeof(y[0]);

    float result = calculateY(x, N, y, M);
    printf("Результат Y = %.2f\n", result);

    return 0;
}
