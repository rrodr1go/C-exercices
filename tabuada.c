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
   int n, i, produto;

   printf("Deseja a tabuada para qual valor? ");
   scanf("%d", &n);

   for (i = 1; i <= 10; i++){
       produto = n * i;
       printf("%d x %d = %d\n", n, i, produto);
   }
return 0;
}
