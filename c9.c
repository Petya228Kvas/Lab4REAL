#include <stdio.h>
void temperatures(double x);
int main(void){
    double user;
    printf("Введите температуру в фаренгейтах(или q для выхода): ");
    while(scanf("%lf", &user) == 1){
        temperatures(user);
        printf("Введите температуру в фаренгейтах(или q для выхода): ");
        
    }
    return 0;
}

void temperatures(double far){
    double celsius;
    double kelvin;
    const double DIVISION = 5.0/9.0;
    const double POINT = 32.0;
    const double DIFFERENCE_KELVIN = 273.16;
    celsius = DIVISION*(far - POINT);
    kelvin = celsius + DIFFERENCE_KELVIN;
    printf("Фаренгейт: %.2lf, Цельсий: %.2lf, Кельвин: %.2lf\n", far, celsius, kelvin);


}
