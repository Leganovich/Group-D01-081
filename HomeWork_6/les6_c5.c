/* 
*  Lecture_6
*  Task_c5
*  Task: Составить функцию, которая определяет сумму всех чисел 
*  от 1 до N и привести пример ее использования.
*/

#include <stdio.h>

int get_sum (int a)
{
   double b, c, d;
   b = (double)a / 2;
   c = b * a;
   d = b + c;
   return d;
}

int main(void)
{
   int n;
   scanf ("%d", &n);
   printf ("%d\n",get_sum(n)); 
   return 0;	
}

