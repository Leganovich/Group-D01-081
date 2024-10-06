/* 
*  Lecture_7
*  Task_d1
*  Task: Составить рекурсивную функцию, печать всех чисел от 1 до N
*/

#include <stdio.h>

int func (int n)
{
    
    if (n == 0) // условие выхода из рекурсии 
        return 0; //выход из функции
    
    else
        //printf("%d ", n); //печатаем значения n по мере заполнения стека функциями
        func( n - 1); // запускаем функию внутри уменьшая n
        printf("%d ", n); //печатаем значения n по мере выполнения фунций в стеке
}

int main(void)
{
  unsigned int numb;
  
  scanf ("%d", &numb);
  
  func(numb);
  
  return 0;
}