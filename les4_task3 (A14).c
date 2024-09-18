/* 
*  Lecture_4
*  Task_3
*  Task: Ввести трехзначное число, напечатать максимальную цифру из числа
*/
#include <stdio.h>

int main(void)
{
   unsigned int abc, a, b, c, max;
   scanf ("%d", &abc);
   a = abc / 100;
   b = (abc / 10) - a*10;
   c = abc % 10;
   max = a>b ? a : b;
   max = max> c ? max : c;
   printf("%d\n", max);
   return 0;
}
