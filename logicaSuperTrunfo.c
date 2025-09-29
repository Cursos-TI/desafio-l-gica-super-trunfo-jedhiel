#include <stdio.h>

int main() {
    // Estrutura simples das cartas
    char nome1[20] = "Brasil";
    char nome2[20] = "Argentina";

    int populacao1 = 213, area1 = 8516, pib1 = 22000, dens1 = 25;
    int populacao2 = 45, area2 = 2780, pib2 = 5000, dens2 = 16;

    int escolha1, escolha2;
    int valor1_c1, valor1_c2, valor2_c1, valor2_c2;
    int soma1, soma2;

    printf("=== SUPER TRUNFO ===\n");
    printf("Carta 1: %s\n", nome1);
    printf("Carta 2: %s\n", nome2);

    // Primeiro atributo
    printf("\nEscolha o primeiro atributo:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Densidade Demográfica\n");
    scanf("%d", &escolha1);

    // Segundo atributo (não pode repetir)
    printf("\nEscolha o segundo atributo:\n");
    if (escolha1 != 1) printf("1 - População\n");
    if (escolha1 != 2) printf("2 - Área\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - Densidade Demográfica\n");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2 || escolha1 < 1 || escolha1 > 4 || escolha2 < 1 || escolha2 > 4) {
        printf("\nOpção inválida! Reinicie o jogo.\n");
        return 0;
    }

    // Pega valores do primeiro atributo
    switch (escolha1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = dens1; valor1_c2 = dens2; break;
    }

    // Pega valores do segundo atributo
    switch (escolha2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = dens1; valor2_c2 = dens2; break;
    }

    // Calcula soma
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    // Mostra resultado
    printf("\n=== RESULTADO ===\n");
    printf("%s: Atributo1 = %d | Atributo2 = %d | Soma = %d\n", nome1, valor1_c1, valor2_c1, soma1);
    printf("%s: Atributo1 = %d | Atributo2 = %d | Soma = %d\n", nome2, valor1_c2, valor2_c2, soma2);

    if (soma1 > soma2)
        printf("\nVencedor: %s!\n", nome1);
    else if (soma2 > soma1)
        printf("\nVencedor: %s!\n", nome2);
    else
        printf("\nEmpate!\n");

    return 0;
}
