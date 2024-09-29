/* 
*  Lecture_6
*  Task_c3
*  Task:Написать функцию, которая возвращает среднее  
*  арифметическое двух переданных ей аргументов
*/

#include <stdio.h>

int middle(int a, int b)
{
   return(a + b)/2;
}

int main(void)
{
   int numb_1, numb_2;
   scanf ("%d%d", &numb_1, &numb_2);
   printf ("%d", middle(numb_1,numb_2));
   return 0;
}


