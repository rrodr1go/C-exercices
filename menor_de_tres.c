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

int no1, no2, no3, menor;

printf("Primeiro valor: ");
scanf("%d", &no1);
printf("Segundo valor: ");
scanf("%d", &no2);
printf("Terceiro valor: ");
scanf("%d", &no3);

menor = no1;

if (no1 < no2 && no1 < no3) {
    menor = no1;
}
else if (no2 < no3) {
    menor = no2;
}
else {
    menor = no3;
}

printf("MENOR = %d", menor);

return 0;
}
