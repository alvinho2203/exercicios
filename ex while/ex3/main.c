#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <windows.h>

int main()
{
    int tv_onoff=0, emi1=0, emi2=0, emi3=0, emi4=0, emi_total,emissora,qtd_pessoas,qtd_pessoas_total=0,sair;
    double pc1,pc2,pc3,pc4;

    do{

        printf("Voce esta assistindo tv(1-Sim e 2-Nao): ");
        scanf("%d", &tv_onoff);

        if(tv_onoff == 1){
            system("cls");
            printf("\nQual emissora esta assistindo(4, 5, 7, 12): ");
            scanf("%d", &emissora);
            printf("\nQuantas pessoas estao assistindo: ");
            scanf("%d", &qtd_pessoas);
            system("cls");

            if(emissora == 4){
                qtd_pessoas_total = qtd_pessoas_total + qtd_pessoas;
                emi1 = emi1 + qtd_pessoas;
            }
            else if (emissora == 5){
                qtd_pessoas_total = qtd_pessoas_total + qtd_pessoas;
                emi2 = emi2 + qtd_pessoas;
            }
            else if (emissora == 7){
                qtd_pessoas_total = qtd_pessoas_total + qtd_pessoas;
                emi3 = emi3 + qtd_pessoas;
            }
            else if (emissora == 12){
                qtd_pessoas_total = qtd_pessoas_total + qtd_pessoas;
                emi4 = emi4 + qtd_pessoas;
            }
            else{
                printf("Opcao Invalida!!");
            }

            pc1 = (emi1 * 100) / qtd_pessoas_total;
            pc2 = (emi2 * 100) / qtd_pessoas_total;
            pc3 = (emi3 * 100) / qtd_pessoas_total;
            pc4 = (emi4 * 100) / qtd_pessoas_total;

            printf("Acabou a pesquisa (1- Sair e 2-Continuar): ");
            scanf("%d", &sair);
            system("cls");

        }


    }while(sair != 1);

    printf("A emissora 4 teve %lf porcento do total da audiencia!!\n",pc1);
    printf("A emissora 5 teve %lf porcento do total da audiencia!!\n",pc2);
    printf("A emissora 7 teve %lf porcento do total da audiencia!!\n",pc3);
    printf("A emissora 12 teve %lf porcento do total da audiencia!!\n",pc4);



}
