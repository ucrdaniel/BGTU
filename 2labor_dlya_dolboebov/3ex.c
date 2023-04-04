#include <stdio.h>

int main() {
    int num, digit1, digit2;

    printf("Введите двузначное число: ");
    scanf("%d", &num);

    digit1 = num / 10; // первая цифра
    digit2 = num % 10; // вторая цифра

    if (digit1 == digit2) {
        num++; // увеличиваем число на 1
    } else {
        if (digit1 > digit2) {
            num = digit1 * 10; // заменяем вторую цифру нулем
        } else {
            num = digit2 * 10; // заменяем первую цифру нулем
        }
    }

    printf("Результат: %d\n", num);

    return 0;
}

//В данной программе сначала считывается двузначное число, затем определяются его цифры (digit1 и digit2)
//с помощью операций деления нацело и взятия остатка от деления на 10. Затем с помощью вложенных условных операторов if
//проверяется, одинаковы ли цифры в числе. Если цифры одинаковы, то число увеличивается на 1. Если цифры разные, то заменяется большая цифра нулем. 
//Результат выводится на экран.