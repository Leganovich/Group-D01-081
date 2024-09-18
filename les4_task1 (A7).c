/* 
*  Lecture_4
*  Task_1
*  Task: Ввести два числа и вывести их в порядке возрастания
*/

#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b) 
       printf("%d %d\n", b, a);
    else 
       printf("%d %d\n", a, b);
    return 0;
}