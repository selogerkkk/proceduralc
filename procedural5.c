/* Exercícios de Fixação (q)
Escrever um programa que possibilite calcular a área total em metros de uma residência com os
cômodos sala, cozinha, banheiro, dois quartos, área de serviço, quintal, garagem, entre outros,
que podem ser fornecidos ao programa. O programa deve solicitar a entrada do nome, da
largura e do comprimento de um determinado cômodo. Em seguida, deve apresentar a área do
cômodo lido e também uma mensagem solicitando ao usuário a confirmação de continuar
calculando novos cômodos. Caso o usuário responda "NÃO", o programa deve apresentar o
valor total acumulado da área residencial.
*/
#include <stdio.h>

int area()
{
    char nome;
    int largura, comprimento, area;
    char resposta;
    int total = 0;

    while (resposta != 'n')
    {
        printf("Insira o nome do cômodo: ");
        scanf("%s", &nome);

        printf("Insira a largura do cômodo: ");
        scanf("%d", &largura);

        printf("Insira o comprimento do cômodo: ");
        scanf("%d", &comprimento);

        area = largura * comprimento;

        printf("Área do cômodo: %d\n", area);
        printf("Deseja continuar calculando? (s/n): ");
        scanf("%s", &resposta);
        total += area;
    }
    printf("Total da área: %d m²\n", total);
}

int main()
{
    area();
    return 0;
}