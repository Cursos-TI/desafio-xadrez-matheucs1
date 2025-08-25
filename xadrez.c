#include <stdio.h>

int main() {
    printf("A partida começou!\n");
    
    // Movimento da Torre 5 casas para a direita usando for
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo 5 casas na diagonal para cima e à direita usando while
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Movimento da Rainha 8 casas para a esquerda usando do-while
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    // Movimento do Cavalo duas casas para baixo e uma para a esquerda
    // Usando loops aninhados for externo e while interno
    int movimentosCavalo = 1; // Número de movimentos em "L" que o Cavalo fará
    int passosBaixo = 2;
    int passosEsquerda = 1;

    printf("\nMovimento do Cavalo:\n");

    // Loop externo para cada movimento completo em "L"
    for (int movimento = 0; movimento < movimentosCavalo; movimento++)
    {
        // Primeiro, duas casas para baixo
        int contadorBaixo = 0;
        while (contadorBaixo < passosBaixo)
        {
            printf("Baixo\n");
            contadorBaixo++;
        }

        // Depois, uma casa para a esquerda
        for (int contadorEsquerda = 0; contadorEsquerda < passosEsquerda; contadorEsquerda++)
        {
            printf("Esquerda\n");
        }
    }

    return 0;
}