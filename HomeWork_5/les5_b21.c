/* 
*  Lecture_5
*  Task_21
*  Task: Дан текст состоящий из английских букв и цифр, 
*  заканчивается символом «.»  
*  Перевести все заглавные английские буквы в строчные.
*/


#include <stdio.h>

int main(void)
{
char a=' ';
   for (scanf("%c", &a); a!= '.' ; scanf("%c", &a))
   {
      if (a >= 'A' && a <= 'Z')
         a+= 0x20;
      if (a != '.')
         printf("%c", a);
   }
   return 0;
	     
}

