/* 
*  Lecture_8
*  Task_e1
*  Task: Ввести c клавиатуры массив из 5 элементов,
*  найти среднее арифметическое всех элементов массива
*/

#include <stdio.h>
#include <inttypes.h>

#define SIZE 5 // количество элементов (ячеек) в массиве

int inputArr(int size, int arr[]) //функция для ввода значений в массив
{
    int i;
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    return i;
}

/*
void printArr (int size, int arr[]) // вывод значений массива на экран
{
	for(int i=0; i<size; i++)
	    printf("%5d", arr[i]); // %5d - под каждое значение выделяем 5 позиций при печати
	printf("\n");	
}
*/


double averageArr(int size, int arr[]) //функция вычисления среднего арифметического значений в массиве
{
    int sum=0;
    double average=0;
    for (int i= 0; i < size; i++)
    {
        sum+=arr[i];
        average = (double)sum/size;
    }
    return average;
}

int main()
{
    int arr[SIZE];
    inputArr(SIZE,arr);
    //printArr(SIZE,arr);
    printf("%.3f\n", averageArr(SIZE,arr)); // вывод на экран среднего арифметического (3 знака после запятой)
    return 0;
}
