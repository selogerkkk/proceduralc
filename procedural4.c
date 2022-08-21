/*
Ler três valores inteiros representados pelas variáveis A, B e C e apresentar os valores lidos
dispostos em ordem crescente. Dica: utilizar tomada de decisão sequencial e as ideias trabalhadas
nos exercícios "g" (propriedade distributiva) e "f' (troca de valores) do capítulo 3.
*/

#include <stdio.h>

int crescentOrder(void)
{
    int a, b, c;
    printf("Insira o valor A: ");
    scanf("%d", &a);
    printf("Insira o valor B: ");
    scanf("%d", &b);
    printf("Insira o valor C: ");
    scanf("%d", &c);
    if (a > b)
    {
        if (b > c)
        {
            printf("%4d%4d%4d\n", c, b, a);
        }
        else
        {
            if (a > c)
            {
                printf("%4d%4d%4d\n", b, c, a);
            }
            else
            {
                printf("%4d%4d%4d\n", b, a, c);
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (a > c)
            {
                printf("%4d%4d%4d\n", c, a, b);
            }
            else
            {
                printf("%4d%4d%4d\n", a, c, b);
            }
        }
        else
        {
            printf("%4d%4d%4d\n", a, b, c);
        }
    }
}

int main()
{
    crescentOrder();
    return 0;
}