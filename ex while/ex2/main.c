#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <windows.h>

int main()
{
    int vto_cand1=0, vto_cand2=0, vto_cand3=0, vto_branc=0, vto_nulo=0,voto,vencedor,eleitores=0,qtd_vto_vencedor=0;

    do{
        printf("\nEntre com o seu voto (1- Candidato 1, 2- Candidato 2, 3- Candidato 3, 4- Voto nulo, 0- Voto em branco, -1 - Sair): ");
        scanf("%d", &voto);
        eleitores++;

        system("cls");

        if (voto == 1){
            vto_cand1++;
        }
        else if (voto == 2){
            vto_cand2++;
        }
        else if (voto == 3){
            vto_cand3++;
        }
        else if (voto == 0){
            vto_branc++;
        }
        else if (voto == 4){
            vto_nulo++;
        }

        if (vto_cand1> vto_cand2 && vto_cand1>vto_cand3){
            vencedor = 1;
            qtd_vto_vencedor = vto_cand1;
        }
        else if (vto_cand2> vto_cand1 && vto_cand2>vto_cand3){
            vencedor = 2;
            qtd_vto_vencedor = vto_cand2;
        }
        else if (vto_cand3> vto_cand1 && vto_cand3>vto_cand2){
            vencedor = 3;
            qtd_vto_vencedor = vto_cand3;
        }

    }while(voto != -1);

        printf("\nO candidato vencedor foi o Candidato %d e obteve %d votos!",vencedor,qtd_vto_vencedor);
        printf("\nO numero de votos nulos foi: %d",vto_nulo);
        printf("\nO numero de votos em branco foi: %d",vto_branc);
        printf("\nO numero de eleitores foi de: %d",eleitores);

}
