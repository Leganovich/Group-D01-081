/* 
*  Lecture_5
*  Task_5
*  Task: Ввести целое число и найти сумму его цифр.
*/
#include <stdio.h>

int main(void)
{
   int input, sum;
   scanf ("%d", &input);
   for( ; input >0; input/=10) 
   sum = sum + input % 10;
   printf("%d\n", sum);
   return 0;
}
