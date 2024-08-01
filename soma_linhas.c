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

    int N, M;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &N);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &M);

    double mat[N][M];

    for (int i = 0; i < N; i++) {
        printf("Digite os elementos da %da. linha:\n", i+1);
        for (int j = 0; j < M; j++) {
            scanf("%lf", &mat[i][j]);
        }
    }

    double vet[N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            vet[i] = vet[i] + mat[i][j];
        }
    }

    printf("VETOR GERADO:\n");
    for (int i = 0; i < N; i++) {
        printf("%.1lf\n", vet[i]);
    }


return 0;
}
