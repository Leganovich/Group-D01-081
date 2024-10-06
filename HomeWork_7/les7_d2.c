/* 
*  Lecture_7
*  Task_d2
*  Task: Составить рекурсивную функцию, которая определяет сумму всех чисел от 1 до N
*/

#include <stdio.h>

int get_sum (int n)
{
    if (n == 0) 
        return 0; 
    else
        return  n + get_sum(n - 1);
}


int main(void)
{
    int numb;
  
    scanf ("%d", &numb);
  
    printf("%d\n ", get_sum(numb));
  
    return 0;
}
