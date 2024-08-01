#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void limpar_entrada1() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto1(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

int main(){

    int n;
    double media, soma;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for (int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }
    printf("\nVALORES = ");
    for (int i = 0; i < n; i++){
        printf("%.1lf ", vet[i]);
    }

    soma = 0;
    media = 0;

    for (int i = 0; i < n; i++){
        soma = soma + vet[i];
    }

    media = soma / n;

    printf("\nSOMA = %.2lf", soma);
    printf("\nMEDIA = %.2lf", media);


return 0;
}
