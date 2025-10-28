
#include <stdio.h>

// Torre: move apenas para cima 
void moverTorre(int casas) {
    if (casas <= 0) return; // Caso base
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Bispo: movimento diagonal 
// Recursividade
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return; // Caso base
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Rainha: combina torre + bispo 
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}


// Cavalo: movimento em L 
void moverCavalo() {
    int passosVertical = 2;
    int passosHorizontal = 1;

    // Loop externo para o movimento vertical
    for (int i = 0; i < passosVertical; i++) {
        if (i == 1) {
            continue;
        }
        printf("Cima\n");
    }

    // Loop interno para o movimento horizontal
    for (int j = 0; j < passosHorizontal; j++) {
        if (j > 1) break; // Exemplo de controle extra
        printf("Direita\n");
    }

    printf("\n"); // separação
}


// Bispo com loops aninhados (vertical + horizontal)
void moverBispoLoop(int casas) {
    for (int i = 0; i < casas; i++) {
        printf("Cima\n"); // Loop externo = vertical
        for (int j = 0; j < 1; j++) {
            printf("Direita\n"); // Loop interno = horizontal
        }
    }
    printf("\n");
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Torre com recursão
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Bispo com recursão
    printf("Movimento do Bispo (recursivo):\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    // Rainha com recursão
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Cavalo com loops aninhados
    printf("Movimento do Cavalo:\n");
    moverCavalo();

    // Bispo com loops aninhados
    printf("Movimento do Bispo (loops aninhados):\n");
    moverBispoLoop(casasBispo);

    return 0;
}
