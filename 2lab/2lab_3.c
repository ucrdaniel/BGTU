#include <stdio.h>
#include <math.h>

int main() {
    // Объявляем переменные для длин сторон треугольника, полупериметра и высоты
    float a, b, c, s, p, h;
    
    // Запрашиваем у пользователя длины сторон треугольника и считываем их
    printf("Введите длины сторон треугольника: ");
    scanf("%f %f %f", &a, &b, &c);
    
    // Проверяем, равны ли все три стороны друг другу
    if (a == b && b == c) {
        printf("Треугольник равносторонний.\n");
        // Если да, то находим высоту треугольника и выводим ее
        h = sqrt(3)/2 * a;
        printf("Высота треугольника: %f\n", h);
    }
    // Иначе, проверяем, равны ли две стороны друг другу
    else if (a == b || b == c || c == a) {
        printf("Треугольник равнобедренный.\n");
        // Если да, то находим полупериметр треугольника и выводим его
        p = (a + b + c)/2;
        printf("Полупериметр треугольника: %f\n", p);
    }
    // Иначе, треугольник разносторонний
    else {
        printf("Треугольник разносторонний.\n");
        // Находим наибольшую сторону и выводим ее
        if (a > b && a > c)
            printf("Наибольшая сторона: %f\n", a);
        else if (b > a && b > c)
            printf("Наибольшая сторона: %f\n", b);
        else
            printf("Наибольшая сторона: %f\n", c);
    }
    
    // Завершаем программу
    return 0;
}