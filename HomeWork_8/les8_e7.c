/* 
*  Lecture_8
*  Task_e7
*  Task: Считать массив из 10 элементов и выполнить инверсию отдельно для 1-ой 
*  и 2-ой половин массива.
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


void printArr (int size, int arr[]) // вывод значений массива на экран
{
	for(int i=0; i<size; i++)
	    printf("%d ", arr[i]); // %5d - под каждое значение выделяем 5 позиций при печати
	printf("\n");	
}


void swap(int* a, int* b) // функция свап для замены значений двух соседних ячеек местами
{
	int temp = *a; // временная переменная, присваиваем значение ячейки a через указатель
	   *a = *b; // ячейке a присваиваем значение ячейки b, через указатель 
	   *b = temp; // ячейке b присваиваем значение из временнной переменной, через указатель 
}



void reversArr(int size, int arr[]) // функция для замены значений с первого по последний друг с другом во всем массиве
{
	for(size_t i=0; i<size/2; i++)
	{
	//swap(&arr[i], &arr[size-1-i]);
    swap(arr+i, arr+size-1-i);
    }
    return;
}



int main()
{
    int arr[SIZE];
    inputArr(SIZE, arr);
    //printArr(SIZE, arr);
    reversArr(SIZE/2, arr + 0*SIZE/2); // реверс первой половины массива
    reversArr(SIZE/2, arr + 1*SIZE/2); // реверс второй половины массива
    printArr(SIZE, arr);
    return 0;
}