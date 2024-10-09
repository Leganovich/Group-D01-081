/* 
*  Lecture_8
*  Task_e9
*  Task: Считать массив из 10 элементов и 
*  выполнить циклический сдвиг ВПРАВО на 1.
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


void shiftArrRight (int size, int arr[]) // функция сдвиг массива в право на 1 элемент
{
	int tmp = arr[size-1]; // временная переменная, для записи значения из последней ячейки масссива
	//сохраняем что бы не затереть значение при запуске цикла
	// далее запускаем цикл и идем с конца к началу массива, переприсвая значения из левой ячейки 
	// в правую (из предпоследней в последнюю) и т.д.
	for (size_t i = size-1; i > 0; --i)
	    arr[i] = arr[i-1];
	//по завершению цикла, самой левой ячейке (нулевой) присваиваем значение записанное во временной переменной
	arr[0] = tmp; 
}

int main()
{
    int arr[SIZE];
    inputArr(SIZE, arr);
    //printArr(SIZE, arr);
    shiftArrRight(SIZE, arr);
    printArr(SIZE, arr);
    return 0;
}