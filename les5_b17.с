/* 
*  Lecture_5
*  Task_17
*  Task: Ввести натурально число и напечатать все числа от 10 до 
*  введенного числа - у которых сумма цифр равна произведению цифр  
* 
*/
#include <stdio.h>

int main ()
{
  int a, i, buff, numb, sum, mult;
  scanf ("%d", &a);
     for (i = 10; i<= a; i++)
     {
     buff = i;
	 sum = 0;
	 mult = 1;
	 
	    while (buff>0)
	     {
		    numb =buff % 10;
	        buff = (buff - numb) / 10; 
	        sum += numb;
            mult *= numb;
         }
            if (sum == mult)
               printf ("%d ", i);
              
              
      }
      
     
  return 0;
}
