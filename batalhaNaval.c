#include <stdio.h>

int main(){
    // inicialização direta
    int tabuleiro[10][10] = {0};

    // navio horizontal
    for (int k = 0; k < 3; k++)
    {
        tabuleiro[3][k] = 3; 
    }

    // navio vertical
    for (int k = 0; k < 3; k++)
    {
        tabuleiro[k][9] = 3; 
    }
    
    // exibindo os navios
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }
    
    return 0;
}
