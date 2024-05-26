#include <stdio.h>

int main() {
    int numero;
    int pares = 0;
    int impares = 0;

    printf("Digite uma sequência de números inteiros não negativos (termine com -2):\n");

    for (;;) {
        scanf("%d", &numero);

        if (numero == -2) {
            break; // Saia do loop quando -2 for inserido
        }

        if (numero < 0) {
            printf("Número negativo detectado. Por favor, insira apenas números não negativos.\n");
            continue; // Ignorar números negativos
        }

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}
