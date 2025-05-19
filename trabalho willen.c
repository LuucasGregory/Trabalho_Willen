#include <stdio.h>

int main() {
    int tamanho;
    printf("Digite o número de notas:\n");
    scanf("%d", &tamanho);

    int notas[tamanho];
    for (int i = 0; i < tamanho; i++) {
        printf("Digite a nota %d:\n", i + 1);
        scanf("%d", &notas[i]);
    }
    int soma = 0;
    printf("Notas digitadas:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Nota %d: %d\n", i + 1, notas[i]);
        soma += notas[i];
    }
    float media = (float)soma / tamanho;
    printf("Média das notas: %.2f\n", media);

    return 0;
}
 
