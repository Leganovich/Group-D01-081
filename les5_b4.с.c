/* 
*  Lecture_5
*  Task_B4
*  Task: Ввести целое число и определить, верно ли, что в нём ровно 3 цифры
*/

#include <stdio.h>

int main(void) 
{
    int abc;
    scanf("%d", &abc);
    if (abc >=100 && abc <= 999) 
       printf("YES");
    else 
       printf("NO");
    return 0;
}