/* 
*  Lecture_5
*  Task_B3
*  Task: Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a до b.
*/
#include <stdio.h>

int a, b, i ,sum;
int main()
{
	scanf("%d%d", &a, &b);
	if (a <= 100 && b <=100)
	{
		for (i = a; i <= b; i++)
		{ 
			sum = sum+i*i;
		}
		printf("%d ", sum);
    }
    else
    printf ("введенные числа вне диапазона от 1 до 100\n");
	return 0;
}
