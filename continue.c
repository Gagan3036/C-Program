#include<stdio.h>
int main() {
    /*Continue statements:- skip iteration of any loop and bring the control 
    to the next iteration*/
    int i;
    for ( i = 1; i <= 10; ++i) {
        if (i % 2 == 0) {
            continue; // Skip numbers which are divisible by 2
        }
        printf("%d\n", i);
    }
}
