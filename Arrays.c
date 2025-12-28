#include <stdio.h>

int main()
{
    int notas[] = {5, 8, 3, 10, 6};
    double temperatura[] = {2.5, 7.9, 15.8, 28.9};
    printf("Mostrando uma temperatura: %.3f\n", temperatura[1]);

    printf("%zu É o tamanho de uma única nota (em bytes)\n", sizeof(notas[0]));
    printf("%zu É o tamanho de todas as notas (em bytes)\n", sizeof(notas));
    printf("%zu É o tamanho de uma única temperatura (em bytes)\n", sizeof(temperatura[0]));
    printf("%zu É o tamanho de todas as temperaturas (em bytes)\n", sizeof(temperatura));

    int n = sizeof(notas) / sizeof(notas[0]);

    printf("Vamos fazer um for com notas + array:");
    for (int i = 0; i < n; i++)// Se o último não existe, oque ele mostra?
    {
        printf("%d ", notas[i]);
    }
    printf("\n");

    return 0;
}