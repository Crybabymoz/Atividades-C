#include<stdio.h>
#include<stdlib.h>
//calculando a media
//prim = nota da prova, seg e ter = nota do trabalho e + 10 = atividades (nao contando as 2 piores notas)
int main(){
//Declaração das variáveis
    float nprova, ntrab1, ntrab2, medtrab, medatv;
    float atv[9];
    int i, soma, media;
    soma=0;
//Entrada de dados: entre com as notas de prova, trabalho e atividades
    scanf("%f",&nprova);
    scanf("%f",&ntrab1);
    scanf("%f",&ntrab2);
    
    medtrab = (ntrab1 + ntrab2) / 2;
    for (i = 0; i <= 9; i++) {
       scanf("%f", &atv[i]);
    }
    for(i = 0; i <= 9; i++) {
       soma = soma + atv[i];
    }
    media = ((nprova + medtrab) + soma) / 4; 
//Saída
    printf("%d\n", media);
  
  return 0;
}