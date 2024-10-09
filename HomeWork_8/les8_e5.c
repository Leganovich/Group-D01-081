/* 
*  Lecture_8
*  Task_e5
*  Task: Считать массив из 10 элементов и посчитать 
*  сумму положительных элементов массива.
*/

#include <stdio.h>
#include <inttypes.h>

#define SIZE 10 // количество элементов (ячеек) в массиве

int inputArr(int size, int arr[]) //функция для ввода значений в массив
{
    int i;
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    return i;
}

int sumPositiv (int size, int arr[]) // функция суммы положительных элементов массива
{
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        if (arr[i] > 0)
           sum += arr[i];
    }    
    return sum;
}


/*
void printArr (int size, int arr[]) // функция для вывода значений массива на экран
{
	for(int i=0; i<size; i++)
	    printf("%5d", arr[i]); // %5d - под каждое значение выделяем 5 позиций при печати
	printf("\n");	
}
*/

int main()
{
    int arr[SIZE];
    inputArr(SIZE,arr);
    //printArr(SIZE,arr);
    printf("%d\n", sumPositiv(SIZE,arr));
    return 0;
}