/* 
*  Lecture_5
*  Task_7
*  Task: Ввести целое число и определить, верно ли, что в его записи есть 
*  две одинаковые цифры, НЕ обязательно стоящие рядом.
*/
#include <stdio.h>

int main()
{ 
int a, other_nums, num;
scanf ("%d", &a);
   while (a>0)
   {
    num = a % 10; //первая цифра
    other_nums= a / 10; //уменьшаем число на 1 цифру
      while (other_nums > 0)
      {
         if(num == other_nums % 10) // если первая цифра равна второй цифре
         {
           printf ("YES\n");
           return 0;
         }
         other_nums /=10;
      }
      a/= 10;
   }  
   printf ("NO\n");
   return 0;
}
