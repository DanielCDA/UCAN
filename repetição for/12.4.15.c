
#include <stdio.h>

int main() {
    int numero, i;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    printf("A representacao binaria de %d e: ", numero);
    
    // Determina o n�mero de bits necess�rio para representar o n�mero
    int bits = sizeof(int) * 8;
    
    // Use um loop for para imprimir os bits da representa��o bin�ria
    for (i = bits - 1; i >= 0; i--) {
        int bit = (numero >> i) & 1;
        printf("%d", bit);
    }
    
    printf("\n");
    
    return 0;
}

