/* 
*  Lecture_8
*  Task_e12
*  Task: Считать массив из 10 элементов и отсортировать   
*  первую половину по возрастанию, а вторую – по убыванию.
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


void swapArr(int* a, int* b) // функция свап для замены значений двух соседних ячеек местами
{
	int temp = *a; // временная переменная, присваиваем значение ячейки a через указатель
	      *a = *b; // ячейке a присваиваем значение ячейки b, через указатель 
	      *b = temp; // ячейке b присваиваем значение из временнной переменной, через указатель 
}


void reversArr(int size, int arr[]) // функция для замены значений с первого по последний друг с другом во всем массиве
{
	for(size_t i=0; i<size/2; i++)
	{
	    swapArr(arr+i, arr+size-1-i);
	}
    return;
}



void chooseSortArray(int size, int arr[]) // Сортировка выбором
{
    int nMin=0;
    for(int i = 0; i < size-1 ; i++ )
    {
        nMin = i;        
        for (int j = i+1; j < size; j++)
        {
            if( arr[j] < arr[nMin] )
            {
                nMin = j;
            }
        }
        if(nMin != i)
        {
            swapArr(&arr[i], &arr[nMin]);
        }   
    }
}


void printArr (int size, int arr[]) // вывод значений массива на экран
{
	for(int i=0; i<size; i++)
	    printf("%d ", arr[i]);
	printf("\n");	
}


int main()
{
    int arr[SIZE];
    inputArr(SIZE,arr);
    chooseSortArray(SIZE/2, arr + 0*SIZE/2); // сортируем первую половину массива
    chooseSortArray(SIZE/2, arr + 1*SIZE/2); // сортируем вторую половину массива
    reversArr(SIZE/2, arr + 1*SIZE/2); // реверс второй половины массива
    printArr(SIZE,arr);
    return 0;
}
