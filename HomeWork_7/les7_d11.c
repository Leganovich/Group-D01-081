/* 
*  Lecture_7
*  Task_d11
*  Task: Дано натуральное число N. Посчитать количество «1» в двоичной записи числа.
*  Составить рекурсивную функцию. 
*/

#include <stdio.h>

int count;

int get_count (int num)
{
    if (num > 1) 
        get_count (num / 2);
    if (num % 2 == 1)
    count ++;
    return count;
}

int main(void)
{
  unsigned int N;
  
  scanf ("%d", &N);
  
  get_count(N);
  
  printf("%d", count); 

  return 0;
}