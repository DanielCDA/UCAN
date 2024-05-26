
#include <stdio.h>

int main() {
    int numero, i;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    printf("A representacao binaria de %d e: ", numero);
    
    // Determina o número de bits necessário para representar o número
    int bits = sizeof(int) * 8;
    
    // Use um loop for para imprimir os bits da representação binária
    for (i = bits - 1; i >= 0; i--) {
        int bit = (numero >> i) & 1;
        printf("%d", bit);
    }
    
    printf("\n");
    
    return 0;
}

