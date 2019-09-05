#include <stdio.h>
#include <conio2.h>
#include <time.h>

int main()
{
    clock_t Tempo1;
    clock_t Tempo2;
    int Valor;
    int Validacao;
    int Saque = 0;

    printf("Informe o valor: ");

    while(Valor != 13)
    {
        Tempo1 = clock();
        Tempo2 = 0;

        while((Tempo2 - Tempo1) < 5000) // 5000 = 5 Segundos
        {
            Validacao = 0;
            Tempo2 = clock();

            if(kbhit())
            {
                Validacao = 1;
                Valor = getche();

                if(Valor==13)
                {
                    break;
                }
                else
                {
                    Saque = Saque*10+(Valor-48);
                }
                break;
            }
            else
            {
                Validacao=0;
            }
        }
        if(Validacao == 0)
        {
            printf("\n\nTempo excedido!\n");
            Saque = 0;
            break;
        }
    }
    printf("\nValor: %d\n", Saque);
}
