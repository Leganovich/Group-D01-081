/* 
*  Lecture_3
*  Task_3
*  Task: Найти разность двух вводимых чисел
*/

#include <stdio.h>
int main() {
    int a, b; // переменные для хранения вводимых чисел 
    int raz; // переменные для хранения результата
    printf("Введите два целых числа через пробел и нажмите Enter\n");
    scanf("%d%d", &a, &b);
    //printf("%d %d\n", a, b); 
    raz = a-b; 
    printf("%d", raz); 
    getchar();
    getchar();
    return 0;
}
