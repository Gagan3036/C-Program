#include <stdio.h>
int main() {
    int i, j, r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    for (i = 1; i <= r; i++) {
        for (j = 1; j <= r - i; j++) {
            printf(" ");
        }
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
