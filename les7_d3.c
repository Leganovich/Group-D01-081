/* 
*  Lecture_7
*  Task_d3
*  Task: Дано целое не отрицательное число N. Выведите все его цифры по одной,
*  в обратном порядке, разделяя их пробелами или новыми строками. 
*  Составить рекурсивную функцию.
*/

#include <stdio.h>

int func (int n)
{
    int res;
    res = n % 10;
    printf("%d ", res);
    if (n < 10)  
        return 0;
    else
        
        func (n / 10);
}

int main(void)
{
  unsigned int numb;
  
  scanf ("%d", &numb);
  
  func(numb);
  
  return 0;
}