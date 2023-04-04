#include <stdio.h>

int main() {
    int month; // переменная для хранения номера месяца
    printf("Введите номер месяца (от 1 до 12): ");
    scanf("%d", &month); // считываем значение переменной month

    switch (month) {
        case 12:
        case 1:
        case 2:
            printf("Время года: Зима\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Время года: Весна\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Время года: Лето\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Время года: Осень\n");
            break;
        default:
            printf("Неверный номер месяца\n");
            break;
    }

    return 0;
}


//Если внутри блока case не будет использован оператор принудительного выхода break, 
//то выполнение программы продолжится и будут выполнены все последующие блоки case, что может привести к некорректному результату. 
//В данном случае, для каждого блока case, мы используем оператор break, чтобы гарантировать правильный результат.