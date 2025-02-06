#include <math.h>
#include <stdio.h>

int main() {
    int n = 1000;
    int sum = 0;
    int i;

    for (i = 3; i < n; i++) {
        sum = sum + (i % 3 && i % 5 ? 0 : i);

        // if (i % 3 == 0) {
        //     sum = sum + i;
        // } else if (i % 5 == 0) {
        //     sum = sum + i;
        // }
    }

    printf("%d", sum);

    return 0;
}
