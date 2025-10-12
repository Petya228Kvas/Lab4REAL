#include <stdio.h>

int main(void){
    int number, current, count;
    printf("Введите целое число: ");
    scanf("%d", &number);
    count = 0;
    printf("Числа до вашего числа и +10: \n");
    while(count <= number +10){
        printf("%d\n", count);
        count++;

    }
    

    return 0;
}
