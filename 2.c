#include <stdio.h>

int main() {
    int UPPER_LIMIT = 4000000;
    int sum = 0, a = 1, b = 1;

    while (a < UPPER_LIMIT) {
        if (!(a % 2)) {
            sum = sum + a;
        }

        b = a + b;
        a = b - a;
    }

    printf("%d", sum);
    // 1089154
}

