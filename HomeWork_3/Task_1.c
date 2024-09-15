/* 
*  Lecture_3
*  Task_1
*  Task: Найти сумму трех вводимых чисел
*/

#include <stdio.h>
int main() {
    int a, b, c; // переменные для хранения вводимых чисел
    int sum; // переменные для хранения результата
    printf("Введите три целых числа через пробел и нажмите Enter\n");
    scanf("%d%d%d", &a, &b, &c); //
    //printf("%d %d %d\n", a, b, c); 
    sum = a+b+c; 
    printf("%d+%d+%d=%d", a, b, c, sum); 
    getchar();
    getchar();
    return 0;
}
