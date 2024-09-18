/* 
*  Lecture_4
*  Task_A12
*  Task: Ввести трехзначное число, напечатать сумму цифр
*/

#include <stdio.h>

int main(void)
{
   unsigned int abc, a, b, c, prod;
   scanf ("%d", &abc);
   a = abc / 100;
   b = (abc / 10) - a*10;
   c = abc % 10;
   prod = a + b + c;
   printf("%d\n", prod);
   return 0;
}
