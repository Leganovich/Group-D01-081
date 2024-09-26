/* 
*  Lecture_5
*  Task_B2
*  Task: Ввести три числа и найти наибольшее из них
*/



#include <stdio.h>

int a, b, i ,sqr;
int main()
{
	scanf("%d%d", &a, &b);
	if (a <= 100 && b <=100)
	{
		for (i = a; i <= b; i++)
		{ 
			sqr = i*i;
			printf("%d ", sqr);
		}
    }
    else
    printf ("введенные числа вне диапазона от 1 до 100\n");
	return 0;
}
