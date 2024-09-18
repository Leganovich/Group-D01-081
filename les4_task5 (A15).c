/* 
*  Lecture_4
*  Task_5
*  Task: Уравнение прямой по координатам двух точек*
*/

#include <stdio.h>

int main(void) {
    int x1, y1, x2, y2; //переменные для хранения координат
    float k, b; // переменные для хранения углового коэффициента прямой k
    scanf ("%d%d%d%d", &x1, &y1, &x2, &y2);
    k = (float)(y2 - y1) / (x2 -x1);
    b = (float)y1 - k * x1;
    printf ("%.2f %.2f", k, b);
    return 0;
    
}