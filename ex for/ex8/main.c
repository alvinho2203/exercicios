#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,idade,somaIdadeH=0,somaIdadeM=0,somaIdadeTotal=0;
    char sexo;
    float medIdadeH=0, medIdadeM=0, medGeral=0, percH, percM, qtdH=0, qtdM=0;

    for (i=1; i<=10; i++){
        printf("\nDigite seu sexo (M/F) pessoa %d: ",i);
        scanf("%c",&sexo);
        fflush(stdin);

        printf("\nDigite sua idade pessoa %d: ",i);
        scanf("%d",&idade);
        fflush(stdin);

        system("cls");

        somaIdadeTotal =somaIdadeTotal + idade;

        if(sexo == 'm' || sexo == 'M'){
            qtdH++;
            somaIdadeH = somaIdadeH + idade;
        }

        else if(sexo == 'f' || sexo == 'F'){
            qtdM++;
            somaIdadeM = somaIdadeM + idade;
        }
    }
        if( qtdH == 0){
            medIdadeH = 0;
        }
        else {
            medIdadeH = somaIdadeH / qtdH;
        }

        if( qtdM == 0){
            medIdadeM = 0;
        }
        else {
            medIdadeM = somaIdadeM / qtdM;
        }
        medGeral = somaIdadeTotal / 10;
        percH = ((qtdH/100) * 10)*100;
        percM = ((qtdM/100) * 10)*100;

        printf("\nA media de idade total eh: %.2f",medGeral);
        printf("\nA media de idade dos homens eh: %.2f",medIdadeH);
        printf("\nA media de idade das mulheres eh: %.2f",medIdadeM);
        printf("\nO percentual da quantidade de homens entrevistados eh: %.2f por cento",percH);
        printf("\nO percentual da quantidade de mulheres entrevistadas eh: %.2f por cento",percM);

}
