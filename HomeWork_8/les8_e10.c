/* 
*  Lecture_8
*  Task_e10
*  Task: Считать массив из 12 элементов и 
*  выполнить циклический сдвиг ВПРАВО на 4.
*/

#include <stdio.h>
#include <inttypes.h>

#define SIZE 12 // количество элементов (ячеек) в массиве

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
	    printf("%5d", arr[i]); 
	printf("\n");	
}


void shiftArrRight (int size, int arr[], int s) // функция для сдвига массива вправо на "s" ячеек
{
    for (int i = 0; i < s; i++)
    {
        int tmp = arr[size-1]; 
	    for (size_t i = size-1; i > 0; --i)
	        {
	        arr[i] = arr[i-1];
	        }
	    arr[0] = tmp;
	}    
}


int main()
{
    int arr[SIZE];
    int shiftCell = 4;
    inputArr(SIZE, arr);
    //printArr(SIZE, arr);
    shiftArrRight(SIZE, arr, shiftCell);
    printArr(SIZE, arr);
    return 0;
}
