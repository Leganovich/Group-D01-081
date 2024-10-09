/* 
*  Lecture_8
*  Task_e2
*  Task: Ввести c клавиатуры массив из 5 элементов,
*  найти минимальный из них.
*/

#include <stdio.h>
#include <inttypes.h>

#define SIZE 5

int inputArr(int size, int arr[]) //функция для ввода значений в массив
{
    int i;
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
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

int Min (int size, int arr[]) // функция поиска минимального значения массива входные аргументы len - размер массива и arr[]- сам массив
{
	 int min = arr[0];  // предпологаем что минимальное значение это первый элемент массива
	 for (int i= 1; i < size; i++) // 
	 {
		 if (arr[i]<min) // в течении цикла сравниваем значение i того элемента массива с min
		    min = arr[i]; // если значение в ячейке меньше записываем его в min
	 }
	 return min; // вернуть минимальное значение
}


int main()
{
    int arr[SIZE];
    inputArr(SIZE,arr);
    //printArr(SIZE,arr);
    printf ("%d\n", Min(SIZE, arr)); // вызов функций поиск минимального значения, передаем размер массива и сам массив
    return 0;
}