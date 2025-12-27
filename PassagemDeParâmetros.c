#include <stdio.h>


int main()
{
    int a = 3;
    dobra_p_valor(a);
    printf("Esse é um exemplo de passagem por valor: ");
    printf("%d\n", a);

    int b = 3;
    dobra_p_referencia(&b);
    printf("Esse é um exemplo de passagem por referência: ");
    printf("%d\n", b);
    return 0;
}

/* 
ao invés de declarar essas funções como int, 
é mais interessante declarar como sendo void
*/

int dobra_p_valor(int x) 
{
    x = x*2;
    return 0;
}

int dobra_p_referencia(int *x)
{
    *x = (*x) * 2;
    return 0;
}