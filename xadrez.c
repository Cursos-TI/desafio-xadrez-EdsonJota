#include <stdio.h>

int main() {

    // torre anda pro lado
    int t = 0;
    printf("Movimento da Torre:\n");
    for(t = 0; t < 5; t++) 
    {
        printf("Direita\n"); // vai pra direita
    }

    // bispo sobe na diagonal
    int b;
    b = 0;
    printf("\nMovimento do Bispo:\n");
    while(b < 5)
    {
        printf("Cima Direita\n");
        b = b + 1;
    }

    // rainha vai pra esquerda agora
    int r;
    r = 0;
    printf("\nMovimento da Rainha:\n");
    do{
        printf("Esquerda\n");
        r++;
    }while(r<8); // acho que é isso

    // agora o cavalo
    // ele anda tipo em L

    printf("\nMovimento do Cavalo:\n");

    int i, j;
    for(i = 0; i < 1; i++) // só faz uma vez, pq é um L
    {
        j = 0;
        while(j < 2) // duas pra baixo
        {
            printf("Baixo\n");
            j++;
        }

        printf("Esquerda\n"); // uma pra esquerda
    }

    return 0;
}
