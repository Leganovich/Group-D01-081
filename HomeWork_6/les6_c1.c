/* 
*  Lecture_6
*  Task_c1
*  Task: Составить функцию, модуль числа и привести пример ее использования.
*/

#include <stdio.h>

int get_mod (int a)
{
	return( a >= 0 ? a : -a);
}

int main()
{
	int numb;
	scanf ("%d", &numb);
	printf ("%d", get_mod(numb));
	return 0;
}

