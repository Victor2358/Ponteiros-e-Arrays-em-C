#include <stdio.h>

int main()
{
    int numeros[] = {1, 2, 3, 4, 5, 6};
    dobrar_valor(&numeros[3]);
    printf("%d\n", numeros[3]);
    return 0;
}


void dobrar_valor(int *x)
{
    *x = (*x) * 2;
}
