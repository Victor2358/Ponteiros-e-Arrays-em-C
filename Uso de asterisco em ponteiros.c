#include <stdio.h>

int main()
{
    int a = 5;
    printf("%d\n", a);

    int *ptr;
    ptr = &a;
    *ptr = 10;

    int ptr2 = &a;
     int *ptr2 = 15; // Isso roda, mas não faz sentido para o PC


    printf("%d\n", *ptr);
    printf("%d\n", a);
    printf("%d\n", ptr2);

    // Linhas 12, 13 e 18 propositalmente não fazem sentido
    return 0;
}