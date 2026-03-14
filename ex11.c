#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    printf("Введите число: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Число четное");
    } else {
        printf("Число нечетное");
    }
    return 0;
}