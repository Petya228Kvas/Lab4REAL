#include <stdio.h>
#define INCH 2.54
int main(void){
    float user, inch, inch_yes;
    int foot;
    printf("Введите высоту в сантиметрах: ");
    scanf("%f", &user);
    while(user > 0){
        inch = user / INCH;
        foot = inch / 12;
        inch_yes= inch - foot*12;
        printf("%.1f см = %d футов, %.1f дюймов\n", user, foot, inch_yes);
        printf("Введите высоту в сантиметрах: ");
        scanf("%f", &user);

    }

    return 0;
}
