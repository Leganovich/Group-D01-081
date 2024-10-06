/* 
*  Lecture_7
*  Task_d8
*  Task: Составить рекурсивную функцию, 
*  Выведите все числа от A до B включительно, в порядке возрастания,
*  если A < B, или в порядке убывания в противном случае.
*/

#include <stdio.h>

void get_numb(int a, int b)
{
    if (a == b) 
        return;
    
    if (a < b)
    {
        printf ("%d ", a);
        get_numb (a+1, b);
    }
    
    else if (a > b)
    {
        printf ("%d ", a);
        get_numb (a-1, b);
    }
    
}


int main(void)
{
    int A, B;
  
    scanf ("%d%d", &A, &B);
  
    get_numb(A, B);
    
    printf ("%d ", B);
  
    return 0;
}
