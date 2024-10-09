/* 
*  Lecture_8
*  Task_e4
*  Task: Считать массив из 10 элементов и найти в нем  
*  два максимальных элемента и напечатать их сумму.
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

int max (int size, int arr[]) // функция поиска максимального значения массива входные аргументы size - размер массива и arr[]- сам массив
{
	 int max = arr[0];  // предпологаем что чтомаксимальное значение - это первый элемент массива
	 for (int i= 1; i < size; i++) // запускаем цикл, перебор от первой ячейки массива до последней
	 {
		 if (arr[i]>max) // в течении цикла сравниваем значение i того элемента массива с max
		    max = arr[i]; // если значение в ячейке больше записываем его в max
	 }
	 return max; // вернуть минимальное значение
}

int max2 (int size, int arr[]) // функция поиска второго максимального (предмаксимум) значения max2 < max
{
     int max2 = arr[0];  
	 for (int i= 1; i < size; i++) 
	 {
	     if (arr[i] > max2 && arr[i] < max(size, arr))
		     max2 = arr[i]; 
	 }
	 return max2; 
}

int sumMax (int size, int arr[]) // функция суммы максимума и предмаксимума 
{
    int sum = 0;
    sum = max(size,arr) + max2(size,arr);
    return sum;
}


/*
void printArr (int size, int arr[]) // вывод значений массива на экран
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
    //printf("%d\n", max(SIZE,arr)); 
    //printf("%d\n", max2(SIZE,arr));
    printf("%d\n", sumMax(SIZE,arr));
    return 0;
}