/* 
*  Lecture_4
*  Task_9
*  Task: Ввести три числа и определить, верно ли, что они вводились в порядке возрастания.
*/
#include <stdio.h>

int main(void) {
   int a, b, c;
   scanf ("%d%d%d", &a, &b, &c);
   if (a < b && b < c) printf("YES");
      else printf("NO");
   return 0;
}
