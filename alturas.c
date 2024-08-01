#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void limpar_entrada1() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

int main(){

    int n, menores16;
    double media, soma, porc16;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char nomes[n][50];
    int idades[n];
    double alturas[n];

    for (int i = 0; i < n; i++) {
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        fgets(nomes[i], 50, stdin);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }

    soma = 0;
    menores16 = 0;
    media = 0;

    for (int i = 0; i < n; i++) {
        soma = soma + alturas[i];
        if (idades[i] < 16) {
           menores16++;
        }
    }

    media = (double) soma / n;

    if (menores16 > 0) {
       porc16 = (double) menores16 / n * 100.0;
    }

    printf("Altura média: %.2lf\n", media);
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", porc16);
    for (int i = 0; i < n; i++) {
        if (idades[i] < 16) {
            printf("%s\n", nomes[i]);
        }
    }


return 0;
}
