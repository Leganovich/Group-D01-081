/* 
*  Lecture_8
*  Task_e13
*  Task: Считать массив из 10 элементов и отобрать в другой массив все числа, 
*  у которых вторая с конца цифра (число десятков) – ноль. 
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


void selectionArr (int size, int a[], int b[]) //функция выбора и печати значений с числом десятков 0
{
   for(int i=0; i<size; i++)
   {
      int s = 0;
      s = (a[i] / 10 ) % 10;
         if (s == 0)
         {
             b[i] = a[i];
             printf("%d ", b[i]);
         }
             
   }
}

int main()
{
    int arr1[SIZE];
    int arr2[SIZE] = {0};
    inputArr(SIZE,arr1);
    selectionArr(SIZE,arr1, arr2);
    return 0;
}
