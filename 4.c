/* Задание 4. На вход подается произвольное четырехзначное число
Нужно напечатать среднее арифметическое цифр
Данные на входе: Четырехзначное целое положительное число
Данные на выходе: Вещественное число в формате %.2f
*/

#include <stdio.h>

int main(void)
{
int x;
float average;
 scanf("%d", &x);
 average = ((x / 1000) + ((x % 1000) / 100) + (x / 10 % 10) + (x % 10));
 average /= 4.;
 printf("%.2f", average);
 return 0;
}
