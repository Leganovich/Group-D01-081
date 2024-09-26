/* 
*  Lecture_5
*  Task_8
*  Task: Ввести целое число и определить, верно ли, что все его цифры четные.
*/

#include <stdio.h>

int main()
{ 
int a, num, flag=0;
scanf ("%d", &a);
   while (a>0)
   {
    num = a % 10; 
      if (num % 2 != 0)
         flag = 1;
         a /= 10;
   }  
   if (flag == 0)
         printf ("YES\n");
   else
      printf ("NO\n");
   return 0;
}
