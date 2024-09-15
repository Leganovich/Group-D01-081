/* 
*  Lecture_3
*  Task_5
*  Task: Найти произведение чисел в трехзначном числе
*/

#include <stdio.h>
int main() {

    unsigned int abc, a, b, c; // переменные для вводимого числа и хранения цифр из числа
    int prod; // переменные для хранения результата
    printf("Введите трехзначное положительное целое число и нажмите Enter\n");
    scanf ("%d", &abc);
    a = abc / 100;
    b = (abc / 10) - a*10;
    c = abc % 10;
    prod = a*b*c; 
    printf("%u", prod); 
    getchar();
    getchar();
    return 0;
}
