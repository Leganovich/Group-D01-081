/* 
*  Lecture_7
*  Task_d5
*  Task: Перевести натуральное число в двоичную систему счисления. 
*  Необходимо реализовать рекурсивную функцию. 
*/

#include <stdio.h>

void print_num (int num)
{
    int res;
    if (num > 1) 
        print_num (num / 2);
    printf("%d", num % 2);
}

int main(void)
{
  unsigned int N;
  
  scanf ("%d", &N);
  
  print_num(N);
  
  return 0;
}
