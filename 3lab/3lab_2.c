#include <stdio.h>

int main() {
    int n, first, last;
    
    printf("Введите натуральное число: ");
    scanf("%d", &n); // считываем число с консоли
    
    first = n; // сохраняем исходное число в переменной first
    while (first >= 10) { // вычисляем старший разряд числа
        first /= 10;
    }
    
    last = n % 10; // вычисляем младший разряд числа
    
    printf("Старший разряд: %d, Младший разряд: %d\n", first, last); // выводим результат
    
    if (first == last) {
        printf("Старший и младший разряды числа равны\n");
    } else {
        printf("Старший и младший разряды числа не равны\n");
    }
    
    return 0; // завершаем программу
}