#include <stdio.h>

// Função recursiva para mover a Torre para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para mover o Bispo na diagonal (cima e direita)
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Movimento do Cavalo com loops aninhados e controle de fluxo
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    int i, j;
    for (i = 2; i >= 1; i--) { // duas casas para cima
        for (j = 0; j < 2; j++) {
            if (i == 2 && j == 0) {
                printf("Cima\n");
                continue;
            }
            if (i == 1 && j == 0) {
                printf("Cima\n");
                break;
            }
            if (i == 1 && j == 1) {
                printf("Direita\n");
            }
        }
    }
}

// Movimento do Bispo usando loops aninhados (além da versão recursiva)
void moverBispoComLoops() {
    printf("\nMovimento do Bispo com Loops:\n");
    int vert, horiz;
    for (vert = 0; vert < 5; vert++) {      // vertical (cima)
        for (horiz = 0; horiz < 1; horiz++) { // horizontal (direita)
            printf("Cima Direita\n");
        }
    }
}

int main() {
    // Torre: movimento recursivo para a direita
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Bispo: movimento recursivo na diagonal
    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivo(5);

    // Rainha: movimento recursivo para a esquerda
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Cavalo: loops aninhados simulando "L" (duas para cima, uma para direita)
    moverCavalo();

    // Bispo com loops aninhados (extra)
    moverBispoComLoops();

    return 0;
}
