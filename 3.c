/* Задание 3. Ввести два числа и найти их разность
Нужно напечатать разность двух чисел
Данные на входе: Два целых числа через пробел
Данные на выходе: Одно целое число
*/

#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d-%d=%d", a, b, a - b);
    return 0;
}