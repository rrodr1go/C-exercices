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

double a, b, c, delta, x1, x2;

printf("Coeficiente a: ");
scanf("%lf", &a);
printf("Coeficiente b: ");
scanf("%lf", &b);
printf("Coeficiente c: ");
scanf("%lf", &c);

delta = b * b - 4.0 * a * c;

if (a == 0 || delta < 0) {
    printf("Esta equacao nao possui raizes reais.\n");

}
else {
    x1 = (double)(-b + sqrt(delta)) / (2.0 * a);
    x2 = (double)(-b - sqrt(delta)) / (2.0 * a);
    printf("X1 = %.4lf\n", x1);
    printf("X2 = %.4lf\n", x2);
}

return 0;
}
