#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <windows.h>

int main()
{
    double vlr_Imp,multa,num_Reg, num_Meses;
    int sair;

    do{
    printf("\nEntre com o numero de registro do imovel: ");
    scanf("%lf", &num_Reg);
    printf("\nDigite o valor do imposto: ");
    scanf("%lf", &vlr_Imp);
    printf("\nDigite o numero de meses em atraso: ");
    scanf("%lf", &num_Meses);

    if (vlr_Imp <= 50){
        multa = vlr_Imp * num_Meses * 0.01;
        printf("\nO numero de registro do imovel eh: %.0lf",num_Reg);
        printf("\nO valor de imposto desse imovel eh: %.2lf R$",vlr_Imp);
        printf("\nTem %.0lf meses de atraso!",num_Meses);
        printf("\nO valor da multa eh de: %.2lf R$\n",multa);
        Sleep(6000);
        system("cls");
        printf("\nDeseja sair(0- Não e 1 - Sim): \n");
        scanf("%d", &sair);
        system("cls");
    }
    else if(vlr_Imp>50 && vlr_Imp<=180){
        multa = vlr_Imp * num_Meses * 0.02;
        printf("\nO numero de registro do imovel eh: %.0lf",num_Reg);
        printf("\nO valor de imposto desse imovel eh: %.2lf R$",vlr_Imp);
        printf("\nTem %.0lf meses de atraso!",num_Meses);
        printf("\nO valor da multa eh de: %.2lf R$\n",multa);
        Sleep(6000);
        system("cls");
        printf("\nDeseja sair(0- Não e 1 - Sim): \n");
        scanf("%d", &sair);
        system("cls");
    }
    else if(vlr_Imp>180 && vlr_Imp<=500){
        multa = vlr_Imp * num_Meses * 0.04;
        printf("\nO numero de registro do imovel eh: %.0lf",num_Reg);
        printf("\nO valor de imposto desse imovel eh: %.2lf R$",vlr_Imp);
        printf("\nTem %.0lf meses de atraso!",num_Meses);
        printf("\nO valor da multa eh de: %.2lf R$\n",multa);
        Sleep(6000);
        system("cls");
        printf("\nDeseja sair(0- Não e 1 - Sim): \n");
        scanf("%d", &sair);
        system("cls");
    }
    else if(vlr_Imp>500 && vlr_Imp<=1200){
        multa = vlr_Imp * num_Meses * 0.07;
        printf("\nO numero de registro do imovel eh: %.0lf",num_Reg);
        printf("\nO valor de imposto desse imovel eh: %.2lf R$",vlr_Imp);
        printf("\nTem %.0lf meses de atraso!",num_Meses);
        printf("\nO valor da multa eh de: %.2lf R$\n",multa);
        Sleep(6000);
        system("cls");
        printf("\nDeseja sair(0- Não e 1 - Sim): \n");
        scanf("%d", &sair);
        system("cls");
    }
    else if(vlr_Imp>1200){
        multa = vlr_Imp * num_Meses * 0.1;
        printf("\nO numero de registro do imovel eh: %.0lf",num_Reg);
        printf("\nO valor de imposto desse imovel eh: %.2lf R$",vlr_Imp);
        printf("\nTem %.0lf meses de atraso!",num_Meses);
        printf("\nO valor da multa eh de: %.2lf R$\n",multa);
        Sleep(6000);
        system("cls");
        printf("\nDeseja sair(0- Não e 1 - Sim): \n");
        scanf("%d", &sair);
        system("cls");
    }


    }while(sair == 0);




}
