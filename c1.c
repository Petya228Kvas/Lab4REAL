#include <stdio.h>
#define TIME 60
int main(void){
    
    int user_min, hours, minuts;
    printf("Введите время в минутах(для выхода <= 0): ");
    scanf("%d", &user_min);
    while(user_min > 0){
        hours = user_min/TIME;
        minuts=user_min%TIME;
        printf("Правильное время %d часов и %d минут\n", hours, minuts);
        printf("Введите время в минутах(для выхода <= 0): ");
        scanf("%d", &user_min);
        
    }

    return 0;
}
