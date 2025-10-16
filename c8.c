#include <stdio.h>

int main(void){
    int user2;
    int user1;
    int result;
    printf("Введите целое число, котрое будет вторым операндом: ");
    scanf("%d", &user2);
    printf("Введите первый операнд: ");
    scanf("%d", &user1);
    printf("%d %% %d равно %d\n", user1, user2, user1 % user2);
    while(user1 > 0){
        printf("Введите следующее число для первого операда(<= 0 выход): ");
        scanf("%d", &user1);
        printf("%d %% %d равно %d\n", user1, user2, user1 % user2);
        printf("!END!\n");
    }

    return 0;
}
