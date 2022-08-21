/*
Efetuar a leitura de um valor numérico inteiro que esteja na faixa de valores de 1 até 9. O
programa deve apresentar a mensagem "O valor está na faixa permitida", caso o valor informado
esteja entre 1 e 9. Se o valor estiver fora da faixa, o programa deve apresentar a mensagem "O
valor está fora da faixa permitida".
*/
#include <stdio.h>

int numberRange(void)
{
    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);
    if (num >= 1 && num <= 9)
    {
        printf("O valor está na faixa permitida");
    }
    else
    {
        printf("O valor está fora da faixa permitida");
    }
}

int main()
{
    numberRange();
    return 0;
}