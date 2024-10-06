/* 
*  Lecture_7
*  Task_d9
*  Task: Дано натуральное число N. Вычислите сумму его цифр. 
*  Необходимо составить рекурсивную функцию.
*/

#include <stdio.h>

int sum_digits (int n)
{
    if (n == 0)  
        return 0;
    else
        n = (n % 10) + sum_digits (n / 10);
        return n;
}



int main(void)
{
    unsigned int N;
  
    scanf ("%d", &N);
  
    printf("%d ", sum_digits(N));
  
    return 0;
}