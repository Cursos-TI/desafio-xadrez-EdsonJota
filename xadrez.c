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

    return 0;
}
