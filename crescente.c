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

    int x, y;

printf("Digite dois numeros:");
scanf("%d", &x);
scanf("%d", &y);


while (x != y) {
   if (x > y) {
    printf("DECRESCENTE!\n");
    }
    else {
    printf("CRESCENTE!\n");
    }

   printf("Digite outros dois numeros:");
    scanf("%d", &x);
    scanf("%d", &y);
}
return 0;
}
