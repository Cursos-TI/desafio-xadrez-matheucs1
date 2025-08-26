#include <stdio.h>

// Simula o movimento da Torre para a direita usando recursão
void moverTorre(int passos)
{
    if (passos <= 0)
        return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Simula o movimento da Rainha para a esquerda usando recursão
void moverRainha(int passos)
{
    if (passos <= 0)
        return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Simula o movimento do Bispo na diagonal (cima e direita)
// Combina recursão com loops aninhados para representar o deslocamento
void moverBispo(int linhas, int colunasPorLinha)
{
    if (linhas <= 0)
        return;

    for (int coluna = 0; coluna < colunasPorLinha; coluna++)
    {
        printf("Cima Direita\n");
    }

    moverBispo(linhas - 1, colunasPorLinha);
}

// Simula o movimento do Cavalo em "L" (duas casas para cima e uma para a direita)
// Utiliza loops aninhados e controle de fluxo com continue/break
void moverCavalo(int quantidadeMovimentos)
{
    printf("\nMovimento do Cavalo:\n");

    for (int movimento = 0; movimento < quantidadeMovimentos; movimento++)
    {
        int cima = 0;
        int direita = 0;

        while (1)
        {
            if (cima < 2)
            {
                printf("Cima\n");
                cima++;
                continue;
            }

            if (direita < 1)
            {
                printf("Direita\n");
                direita++;
                break;
            }
        }
    }
}

int main()
{
    printf("A partida começou!\n");

    // Movimento da Torre: 5 casas para a direita
    int casasTorre = 5;
    printf("\nMovimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimento do Bispo: 5 linhas, 1 coluna por linha (diagonal)
    int linhasBispo = 5;
    int colunasBispo = 1;
    printf("\nMovimento do Bispo:\n");
    moverBispo(linhasBispo, colunasBispo);

    // Movimento da Rainha: 8 casas para a esquerda
    int casasRainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Movimento do Cavalo: 2 movimentos em "L"
    int movimentosCavalo = 2;
    moverCavalo(movimentosCavalo);

    return 0;
}