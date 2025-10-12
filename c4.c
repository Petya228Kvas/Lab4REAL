#include <stdio.h>
#define FOOT 30.48
#define INCH 2.54
int main(void){
    float user, inch;
    int foot;
    printf("Введите высоту в сантиметрах: ");
    scanf("%f", &user);
    while(user > 0){
        inch = user / INCH;
        foot = user / FOOT;
        printf("%.1f см = %d футов, %.1f дюймов\n", user, foot, inch);
        printf("Введите высоту в сантиметрах: ");
        scanf("%f", &user);

    }

    return 0;
}
