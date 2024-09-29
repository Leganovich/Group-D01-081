/* 
*  Lecture_6
*  Task_c2
*  Task:Составить функцию, возведение числа N в степень P. 
*  int power(n, p) и привести пример ее использования.
*/

#include <stdio.h>
#include <math.h>

int power(int n, int p)
{
   return pow(n,p);
}

int main(void)
{
   int a, b;
   scanf ("%d%d", &a, &b);
   printf ("%d", power(a,b));
   return 0;
}


