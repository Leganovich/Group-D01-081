/* 
*  Lecture_6
*  Task_с8
*  Task: Составить функцию, которая переводит латинскую строчную букву в  
*  заглавную. И показать пример ее использования. 
*/

#include <stdio.h>

char convert_letter (char let)
{
   if (let >= 'a' && let <= 'z')
      let-= 0x20;
   return let;
}

int main(void)
{
char a=' ';
   for (scanf("%c", &a); a!= '.' ; scanf("%c", &a))
   {
      if (a != '.')
         printf("%c", convert_letter (a));
   }
   return 0;
}