#include <stdio.h>
#include "function_mige.c"
int ehValido(char c);
void salvarTabuleiro(char matriz[3][3], char nomeArquivo[]);

int main(int argc, char *argv[])
{
    char matriz[3][3];
    int i, j;
    int pos = 2;

    if(argc != 11)
    {
        printf("Uso incorreto.\n");
        return 1;
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            matriz[i][j] = argv[pos][0];

            if(ehValido(matriz[i][j]) == 0)
            {
                printf("Somente X e O.\n");
                return 1;
            }

            pos++;
        }
    }

    salvarTabuleiro(matriz, argv[1]);

    return 0;
}
