/* 
*  Lecture_4
*  Task_8
*  Task: Ввести пять чисел и  вывести наименьшее из них
*/

#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, max, min, sum;
    scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);
    min = a < b ? a : b;
    min = min< c ? min: c;
    min = min< d ? min: d;
    min = min< e ? min: e;
    printf("%d", min);
    return 0;
}