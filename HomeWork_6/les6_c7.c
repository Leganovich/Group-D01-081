/* 
*  Lecture_6
*  Task_c7
*  Task: Составить функцию, которая переводит число N из 
*  десятичной системы счисления в P-ичную систему счисления.
*/

#include <stdio.h>
#include <math.h>

unsigned int conversion (unsigned int numb, unsigned int base)
{
	int i, res = 0;
    for (i = 0; numb >= 1; i++)
    { 
        res+=(numb % base) * pow(10., i); 
        numb/=base; 
    }
    return res;
}

int main(void)
{
   int N, P;
   scanf ("%d%d", &N, &P);
      if (N < 0 || P < 2 || P >9 )
         printf ("Error");
      else
         printf ("%d\n",conversion(N,P)); 
   return 0;	
}

