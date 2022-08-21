/*
Ler os valores de quatro notas escolares bimestrais de um aluno representadas pelas variáveis
N1, N2, N3 e N4. Calcular a média aritmética (variável MD1) desse aluno e apresentar a
mensagem "Aprovado" se a média obtida for maior ou igual a 7; caso contrário, o programa deve
solicitar a quinta nota (nota de exame, representada pela variável NE) do aluno e calcular uma
nova média aritmética (variável MD2) entre a nota de exame e a primeira média aritmética. Se o
valor da nova média for maior ou igual a cinco, apresentar a mensagem "Aprovado em exame";
caso contrário, apresentar a mensagem "Reprovado". Informar também, após a apresentação das
mensagens, o valor da média obtida pelo aluno.
*/

#include <stdio.h>

int mediaNota()
{
    int n1, n2, n3, n4, md1, ne, md2;
    printf("Insira a nota 1: ");
    scanf("%d", &n1);
    printf("Insira a nota 2: ");
    scanf("%d", &n2);
    printf("Insira a nota 3: ");
    scanf("%d", &n3);
    printf("Insira a nota 4: ");
    scanf("%d", &n4);

    md1 = (n1, n2, n3, n4) / 4;
    if (md1 >= 7)
    {
        printf("Aprovado\n");
    }
    else
    {
        printf("Insira a nota extra: ");
        scanf("%d", &ne);
        md2 = (md1 + ne) / 2;
        if (md2 >= 5)
        {
            printf("Aprovado em exame\n");
            printf("Sua média: %d", md2);
        }
        else
        {
            printf("Reprovado\n");
            printf("Sua média: %d", md2);
        }
    }
}

int main()
{
    mediaNota();
    return 0;
}