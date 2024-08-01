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
   int idade, cont;
   double media, soma;

   media = 0;

   printf("Digite as idades:");
   scanf("%D", &idade);
   soma = 0;
   cont = 0;

   while (idade >= 0){
        soma = (double) soma + idade;
        cont++;
        scanf("%d", &idade);
    }

   if (cont == 0){
        printf("IMPOSSIVEL CALCULAR");
   }
   else {
    media = (double) soma / cont;

    printf("MEDIA = %.2lf", media);
   }

return 0;
}
