#include <stdio.h>

int main()
{
    FILE *nome_arquivo;
    char linha[100];

    nome_arquivo = fopen("arquivo.txt", "w"); 
    // fopen == file open
    if (nome_arquivo == NULL)
    {
        printf("Erro na abertura!\n");
        return 0;
    }
    fprintf(nome_arquivo, "hello world\n");
    fclose(nome_arquivo);
    
    
    
    nome_arquivo = fopen("arquivo.txt", "a");
    if (nome_arquivo == NULL)
    {
        printf("Erro na abertura!\n");
        return 0;
    }
    fprintf(nome_arquivo, "bye world\n");
    fclose(nome_arquivo);
    
    
    nome_arquivo = fopen("arquivo.txt", "r");
    
    while (fgets(linha, sizeof(linha), nome_arquivo) != NULL) // fgets == file gets
    {
        printf("%s", linha);  // Imprime cada linha
    }
    
    return 0;
}