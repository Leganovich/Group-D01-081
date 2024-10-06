/* 
*  Lecture_7
*  Task_d6
*  Task: Дана строка заканчивающаяся символом точка '.'  
*  Напечатать строку наоборот. Реализуйте рекурсивную функцию,
*  которая считывает и печатает строку наоборот.
*/

#include <stdio.h>

void reverseString(void)
{
char c;
    if ((c = getchar()) != '.')
        reverseString();
    if (c != '.')
        putchar(c);
}

int main()
{
reverseString();
return 0;
}

