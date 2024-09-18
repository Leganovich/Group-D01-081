/* 
*  Lecture_4
*  Task_6
*  Task: Above, less, equal
*/
#include <stdio.h>

int main() {
   //char str[3][6] = {"Above", "Less", "Equal"};
   int a, b;
   scanf ("%d%d", &a, &b);
   if (a > b)
      printf("Above");
   else if (a < b)
      printf("Less");
   else 
   printf("Equal");
   return 0;
}
