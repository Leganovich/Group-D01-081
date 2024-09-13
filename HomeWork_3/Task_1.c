/* 
*  Lecture_3
*  Task_1
*  Task: Enter three numbers, their sum and product
*/

#include <stdio.h>
int main() {
    int a, b, c; // переменные для вводимых чисел
    int sum; //переменная для расчетов
    printf("Введите через пробел три целых числа\n");
    scanf("%d%d%d", &a, &b, &c); // функция считывания данных, в фунцию передается адрес переменных через &
    printf("%d %d %d\n", a, b, c); 
    sum = a+b+c; 
    printf("%d+%d+%d=%d", a, b, c, sum); 
    return 0;
}
