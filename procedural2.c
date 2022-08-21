/*
Efetuar a leitura de três valores numéricos (representados pelas variáveis A, B e C) e processar o
cálculo da equação completa de segundo grau, utilizando a fórmula de Bhaskara (considerar para
a solução do problema todas as possíveis condições para delta: delta < O - não há solução real,
delta> O - há duas soluções reais e diferentes e delta= O - há apenas uma solução real). Lembre-
-se de que é completa a equação de segundo grau que possui todos os coeficientes A, B e C
diferentes de zero. O programa deve apresentar respostas para todas as condições estabelecidas
para delta.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int bhaskara()
{
    int A, B, C, delta, x, x1, x2;
    printf("Insira o valor de A: ");
    scanf("%d", &A);
    printf("Insira o valor de B: ");
    scanf("%d", &B);
    printf("Insira o valor de C: ");
    scanf("%d", &C);
    delta = pow(B, 2) - 4 * A * C;
    printf("Delta: %d\n", delta);
    x1 = (-B + sqrt(delta)) / 2 * A;
    x2 = (-B - sqrt(delta)) / 2 * A;

    if (delta < 0)
    {
        printf("Delta < 0, não há soluçao real\n");
    }

    if (delta > 0)
    {
        printf("há duas soluções reais e diferentes:\n");
        printf("Solução 1: %d\n", x1);
        printf("Solução 2: %d\n", x2);
    }

    if (delta = 0)
    {
        printf("há apenas uma solução real\n");
        printf("Solução: %d\n", x1);
    }
}

int main()
{
    bhaskara();
    return 0;
}