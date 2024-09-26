/* 
*  Lecture_5
*  Task_12
*  Task: Организовать ввод натурального числа с клавиатуры.  
*  Программа должна определить наименьшую и наибольшую цифры, которые входят в 
*  состав данного натурального числа.
*/
#include <stdio.h>

int main()
{ 
int a, other_nums, num, max=0, min=9;
scanf ("%d", &a);
   while (a>0)
   {
    num = a % 10; //первая цифра
       if (num <= min) 
          min = num;
       if (num >= max)    
          max = num;
         
    a/= 10;
   }  
   printf ("%d %d\n", min, max);
   return 0;
}
