/* 
*  Lecture_6
*  Task_c4
*  Task: Описать функцию вычисления f(x) по формуле
*  Используя эту функцию для n заданных чисел, вычислить f(x)
*  Среди вычисленных значений найти наибольшее
*/

#include <stdio.h>

int calculate (int x)
{
   int f;
      if (x < 2 && x >= -2) f = x*x;
      else if (x >= 2) f = x*x+4*x+5;
           else if (x < -2) f = 4;
      return f;
}

int main(void)
{
   int a;
   scanf ("%d", &a);
   printf ("%d", calculate(a));
   return 0;
}

