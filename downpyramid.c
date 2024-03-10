#include <stdio.h>

int main() {
    int n;
    printf("Enter Number of Rows: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; --i) {
        for (int space = 0; space < n - i; ++space)
            printf("  ");

        for (int j = i; j <= 2 * i - 1; ++j)
            printf("* ");

        for (int j = 0; j < i - 1; ++j)
            printf("* ");

        printf("\n");
    }

    return 0;
}
