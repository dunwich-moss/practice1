#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b;
    printf("Введите два числа: ");
    scanf("%d %d", &a, &b);
    printf("Сумма: %d", a + b);
    printf("Разность: %d", a - b);
    printf("Произведение: %d", a * b);
    printf("Целочисленное деление: %d", a / b);
    return 0;
}

