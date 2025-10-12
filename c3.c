#include <stdio.h>
#define DAY 7
int main(void){
    int user_day, days, weeks;
    printf("Введите количество дней: ");
    scanf("%d",&user_day);
    while(user_day > 0){
        weeks = user_day / DAY;
        days = user_day % DAY;
        printf("%d дней составляют %d недели и %d дня\n", user_day, weeks, days);
        printf("Введите количество дней: ");
        scanf("%d",&user_day);
    }

    return 0;
}
