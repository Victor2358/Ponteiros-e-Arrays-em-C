#include <stdio.h>

int main()
{
    int notas[] = {5, 8, 4, 4, 6, 10};
    int total = 0;
    for (int i = 0; i <= 5; i++)
    {
        total = total+notas[i];
        printf("%d\n", total);
    }
    return 0;
}