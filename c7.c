#include <stdio.h>

void kub(double x);

int main(void){
    double user;
    printf("Введите число для вычесления куба: ");
    scanf("%lf", &user);
    kub(user);
    return 0;
}
void kub(double x){
    printf("Число %lf в кубе = %lf\n", x, x*x*x);

}
