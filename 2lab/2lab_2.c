#include <stdio.h>
#include <math.h>

int main() {
    // Объявляем переменные a и b и запрашиваем их значения у пользователя
    float a, b;
    printf("Введите значения переменных a и b: ");
    scanf("%f %f", &a, &b);

    // Вычисляем значение функции с помощью условной операции
    float result = (a > b && b >= 0) ? (a - 2*b) : (a <= 0 && b < 0) ? ((a < 0) ? -a : a) : -b;

    // Выводим результат
    printf("Результат: %f\n", result);

    // Завершаем программу
    return 0;
}