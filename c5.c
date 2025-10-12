#include <stdio.h>

int main(void){
    unsigned long long user, count, count_double, sum;
    
    count = 0;
    sum = 0;
    count_double = 1;
    printf("Введите количество дней для определения экспоненциального заработка(>63 Не считает): ");
    scanf("%d", &user);
    while(count++ < user ){
        count_double = count_double * 2;
        printf("В %d день в получите $%llu\n", count, count_double);
        sum = sum+ count_double;
    }
    printf("В сумме вы получите $%llu\n", sum);
    return 0;
}
