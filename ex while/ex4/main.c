#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <windows.h>

int main()
{
    int numOpe, qtdFunc, qtdPecasTotal=0, qtdPecas,i;//salario minimo setado pra 950
    double salario = 950,folhaTotal=0;
        printf("Quantos funcionarios tem a empresa: ");
        scanf("%d", &qtdFunc);
        system("cls");

    for(i=1;i<=qtdFunc;i++){
        printf("\nQual seu numero de operario: ");
        scanf("%d", &numOpe);
        printf("Quantas pecas voce fabricou nesse mes: ");
        scanf("%d", &qtdPecas);

        if(qtdPecas <=30){
             salario = salario;
             folhaTotal = folhaTotal  + salario;
             qtdPecasTotal = qtdPecasTotal + qtdPecas;
             printf("\nO funcionario %d ganha %.2lf R$",numOpe,salario);
             Sleep(5000);
             system("cls");
        }
        else if(qtdPecas>30 && qtdPecas <=35){
            salario = salario + ((qtdPecas - 30)*(0.03 * salario));
            folhaTotal = folhaTotal  + salario;
            qtdPecasTotal = qtdPecasTotal + qtdPecas;
            printf("\nO funcionario %d ganha %.2lf R$",numOpe,salario);
            Sleep(5000);
            system("cls");
        }
        else if(qtdPecas > 35){
            salario = salario + ((qtdPecas - 30)*(0.05 * salario));
            folhaTotal = folhaTotal  + salario;
            qtdPecasTotal = qtdPecasTotal + qtdPecas;
            printf("\nO funcionario %d ganha %.2lf R$",numOpe,salario);
            Sleep(5000);
            system("cls");
        }

      }

      printf("\nA folha total de pagamento da empresa eh: %.2lf R$",folhaTotal);
      printf("\nO total de pecas fabricadas foi de: %d",qtdPecasTotal);

}



