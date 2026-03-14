#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int x;
    printf("Введите число:");
    scanf("%d", &x);
    if (x>0) {
        printf("%d\n",x*x);
    } else if ("%d\n",x<0) {
        printf("%d\n"-x);
    } else {
        printf(0);
    }

}
