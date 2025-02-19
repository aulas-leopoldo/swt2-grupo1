#include <stdio.h>
#include <time.h>

void soma(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

void multiplica(int a, int b) {
    printf("%d x %d = %d\n", a, b, a * b);
}

int main() {
    time_t t;
    struct tm *tm_info;

    time(&t);
    tm_info = localtime(&t);

    printf("Olá, Estudante!\n");

    printf("%02d/%02d/%04d %02d:%02d:%02d\n",
            tm_info->tm_mday,
            tm_info->tm_mon + 1,
            tm_info->tm_year + 1900,
            tm_info->tm_hour,
            tm_info->tm_min,
            tm_info->tm_sec);

    soma(5, 3);
    multiplica(5, 3);
    return 0;
}
