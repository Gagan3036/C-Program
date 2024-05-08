#include<stdio.h>
#include<math.h>
int main(void){
    double num;
    double rounds_off;
    printf("Enter floating numbers: ");
    scanf("%lf",&num); 
    rounds_off = ceil(num);
    printf("Round Off: %.2lf\n",rounds_off);
    return 0;
}