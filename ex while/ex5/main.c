#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <windows.h>
int main()
{
    int sair;
    double nota, media;
    char conceito[30];

    do{
        printf("Entre com a nota do aluno: ");
        scanf("%lf", &nota);

        if (nota>=90){
          char conceito[]= "OTIMO";
          printf("\n\nO conceito do aluno foi %s!!",conceito);
          Sleep(5000);
          system("cls");
        }
        else if (nota>=75 && nota<90){
          char conceito[]= "BOM";
          printf("\n\nO conceito do aluno foi %s!!",conceito);
          Sleep(5000);
          system("cls");
        }
        else if (nota>=60 && nota<75){
          char conceito[]= "REGULAR";
          printf("\n\nO conceito do aluno foi %s!!",conceito);
          Sleep(5000);
          system("cls");
        }
        else if (nota<60){
          char conceito[]= "INSUFICIENTE";
          printf("\n\nO conceito do aluno foi %s!!",conceito);
          Sleep(5000);
          system("cls");
        }

        printf("Deseja sair(1- SIM e 2- NAO): ");
        scanf("%d",&sair);
        system("cls");


    }while(sair != 1);
}
