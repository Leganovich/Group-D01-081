/* 
*  Lecture_5
*  Task_16
*  Task: Составить программу для вычисления НОД с помощью алгоритма Евклида. 
*  Даны два натуральных числа. Найти наибольший общий делитель. 
* 
*/
#include <stdio.h>

int main ()
{
  int a, b;
  scanf ("%d%d", &a, &b);
  while (a>0 && b>0)
  {
  a > b ? a%=b :(b%=a);
  }
  printf ("%d\n", !a ? b : a); 
  return 0;
}
