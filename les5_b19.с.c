/* 
*  Lecture_5
*  Task_19
*  Task: Ввести натуральное число и определить,  
*  верно ли, что сумма его цифр равна 10.
* 
*/


#include <stdio.h>

int main(void)
{
	unsigned int a, numb, sum=0;
	scanf ("%d", &a);
	   while (a>0)
	   {
	      numb = a%10;
		  a = (a-numb)/10;
		  sum += numb;
	   }
	      if (sum == 10)
	         printf ("YES");
	      else
	         printf ("NO");
	   return 0;
}

