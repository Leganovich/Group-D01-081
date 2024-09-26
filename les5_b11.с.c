/* 
*  Lecture_5
*  Task_11
*  Task: Ввести целое число и «перевернуть» его, 
*  так чтобы первая цифра стала последней и т.д
*/

#include <stdio.h>

int main()
{
int a, b=0;
scanf ("%d", &a); 
   while (a>0)
   {
      b = b * 10 + a % 10;
      a /= 10;
   }
printf("%d", b);
return 0;
}