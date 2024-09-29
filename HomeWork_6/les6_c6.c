/* 
*  Lecture_6
*  Task_c6
*  Task: Определить количество зерен на N-ой клетке 
*  
*  
*/

#include <stdio.h>
#include <math.h>

unsigned long long get_quant (unsigned int a)
{
   unsigned long long grains = 0;
      if (a>1)      
         grains = pow(2,a-1);
      else
	     grains = a; 
   return grains;
}

int main(void)
{
   int n;
   scanf ("%d", &n);
      if (n < 1 || n > 64)
         printf ("Error");
      else
         printf ("%llu\n",get_quant(n)); 
   return 0;	
}

