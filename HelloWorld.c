/* Урок 1 введение в си, задание 1, Привет, мир! */

#include <stdio.h> //заголовочный файл — основной способ подключить к программе типы данных, структуры, прототипы функций, перечисляемые типы и макросы, используемые в другом модуле

int main (void) //главная функция main(), которая вернет в качестве значения целое число, (void) - аргумент функции, в данном случае void означает что аргумент отсутствует
{
  printf ("Hello, World!\n"); //функция вывода текста в консоль
  return 0; //выход из функции
}