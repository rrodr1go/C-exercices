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
   int x, y, i, troca, soma;

   printf("Digite dois numeros:\n");
   scanf("%d", &x);
   scanf("%d", &y);

   if (x > y) {
    troca = x;
    x = y;
    y = troca;
   }

   soma = 0;
   for (i = x+1; i < y; i++){
    if (i % 2 != 0){
    soma = soma + i;
    }
   }

   printf("SOMA DOS IMPARES = %d", soma);

return 0;
}
