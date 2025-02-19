#include <stdio.h>
#include <time.h>

void soma(int a, int b)
{
    printf("%d + %d = %d\n", a, b, a + b);
}

void multiplica(int a, int b) {
    printf("%d x %d = %d\n", a, b, a * b);
}

// Nova função "subtrai" criada (por fmh@cin.ufpe.br em 17/02/2025 às 11h00)
void subtrai(int a, int b) {
    // Verifica se atende aos requisitos do sistema
    if (b > a){
    // Se não atende aos requisitos
        printf("Atencao: subtracao nao permitida!\n");
    } else {
    // Se atende aos requisitos
        printf("%d - %d = %d\n", a, b, a - b);
    }
}

int main()
{
    char nome[50];
    time_t t;
    struct tm *tm_info;

    // Adição de 2 chamadas de função "subtrai" (por fmh@cin.ufpe.br em 17/02/2025 às 11h00)
    subtrai(5, 3);
    subtrai(5, 13);

    time(&t);
    tm_info = localtime(&t);

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Olá, Estudante!\n");

    printf("Olá, %s!\n", nome);

    printf("%02d/%02d/%04d %02d:%02d:%02d\n",
           tm_info->tm_mday,
           tm_info->tm_mon + 1,
           tm_info->tm_year + 1900,
           tm_info->tm_hour,
           tm_info->tm_min,
           tm_info->tm_sec);

    soma(5, 3);
    return 0;
}