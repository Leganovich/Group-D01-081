/* 
*  Lecture_2
*  Task_4.2
*  Task: Доказать тождество A<->B =(A&&B)||(!A&&!B), сотавить таблицу истинности
*/

#include <stdio.h>
int main() {
    printf("A<->B =(A&&B)||(!A&&!B)\n");
    printf("\n");
    printf("| A | B | A<->B |\n");
    printf("| 0 | 0 |   1   |\n");
    printf("| 0 | 1 |   0   |\n");
    printf("| 1 | 0 |   0   |\n");
    printf("| 1 | 1 |   1   |\n");
    printf("=\n");
    printf("| A | B | !A | !B | A&&B | !A&&B!| (A&&B)||(!A&&!B) |\n");
    printf("| 0 | 0 | 1  | 1  |  0   |   1   |       1          |\n");
    printf("| 0 | 1 | 1  | 0  |  0   |   0   |       0          |\n");
    printf("| 1 | 0 | 0  | 1  |  0   |   0   |       0          |\n");
    printf("| 1 | 1 | 0  | 0  |  1   |   0   |       1          |\n");
return 0;
}
