/* 
*  Lecture_7
*  Task_d4
*  Task: Дано натуральное число N. Выведите все его цифры по одной,  
*  в прямом порядке, разделяя их пробелами или новыми строками. 
*  Необходимо реализовать рекурсивную функцию.
*/

#include <stdio.h>

void print_num (int num)
{
    int res;
    if (num < 10)
    {
       printf ("%d ", num);
       return;
    }
    else
       res = num % 10;
       print_num (num/10);
       printf ("%d ", res);
       
}

int main(void)
{
  unsigned int N;
  scanf ("%d", &N);
  print_num(N);
  return 0;
}