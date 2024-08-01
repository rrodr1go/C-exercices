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

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    int vet[n];

    for (int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\nNUMEROS NEGATIVOS:\n");

    for (int i = 0; i < n; i++) {
        if (vet[i] < 0) {
            printf("%d\n", vet[i]);
        }
    }

return 0;
}
