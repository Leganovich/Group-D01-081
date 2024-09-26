/* 
*  Lecture_5
*  Task_20
*  Task: Ввести натуральное число и проверить число на простоту.  
*  
* 
*/


#include <stdio.h>

int main(void)
{
   int a, i;
   scanf ("%d", &a);
      for (i = 2; i<a; i++)
	  {
	     if (a % i == 0)
	     {
	       printf ("NO\n");
	       return 0;
	     }
	  }   
	  if (a == 1)
	     printf ("NO\n");
	  else
	     printf ("YES");
	  return 0;  
	  
	     
}

