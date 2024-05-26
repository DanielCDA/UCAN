#include <stdio.h>

int main() {
    int numero;
    int pares = 0;
    int impares = 0;

    printf("Digite uma sequ�ncia de n�meros inteiros n�o negativos (termine com -2):\n");

    for (;;) {
        scanf("%d", &numero);

        if (numero == -2) {
            break; // Saia do loop quando -2 for inserido
        }

        if (numero < 0) {
            printf("N�mero negativo detectado. Por favor, insira apenas n�meros n�o negativos.\n");
            continue; // Ignorar n�meros negativos
        }

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de n�meros pares: %d\n", pares);
    printf("Quantidade de n�meros �mpares: %d\n", impares);

    return 0;
}
