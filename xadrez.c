#include <stdio.h>

int main() {
    int casasTorre = 3;
    int casasBispo = 2;
    int casasRainha = 3;
    int movimentosCavalo = 2;

    // ================= TORRE =================
    printf("=== Torre ===\n");
    // recursividade simulada com while
    int t = casasTorre;
    while (t > 0) {
        printf("Cima\n");
        t = t - 1; // chamada recursiva "manual"
    }
    printf("\n");

    // ================= BISPO =================
    printf("=== Bispo ===\n");
    int b = casasBispo;
    while (b > 0) {
        for (int i = 0; i < b; i++) {       // movimento vertical
            for (int j = 0; j < b; j++) {   // movimento horizontal
                printf("Diagonal: Cima e Direita\n");
            }
        }
        b = b - 1; // simula a recursão diminuindo
    }
    printf("\n");

    // ================= RAINHA =================
    printf("=== Rainha ===\n");
    int r = casasRainha;
    while (r > 0) {
        printf("Direita\n");
        printf("Diagonal: Cima e Direita\n");
        r = r - 1; // recursão manual
    }
    printf("\n");

    // ================= CAVALO =================
    printf("=== Cavalo ===\n");
    for (int i = 0; i < movimentosCavalo; i++) {
        for (int j = 0; j < 3; j++) {
            if (j < 2) {
                printf("Cima\n");     // duas casas para cima
            } else {
                printf("Direita\n"); // uma casa para a direita
            }
        }
    }
    printf("\n");

    return 0;
}
