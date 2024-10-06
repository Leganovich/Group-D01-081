/* 
*  Lecture_7
*  Task_d10
*  Task: Дано натуральное число n ≥ 1. Проверьте, является ли оно простым. 
*  Программа должна вывести слово YES, если число простое или NO в противном случае. 
*  Необходимо составить рекурсивную функцию.
*/

#include <stdio.h>

int is_prime(int n, int delitel)
{
    if (n == delitel)
        return 1;
    if ((n > 1) && (n % delitel != 0))
        return is_prime (n, delitel + 1);
    else
        return 0;
}



int main(void)
{
    unsigned int N, D = 2;
  
    scanf ("%d", &N);
  
    is_prime(N, D) ? printf("YES") : printf("NO");
  
    return 0;
}
