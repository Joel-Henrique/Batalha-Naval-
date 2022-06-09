#include <stdio.h>
#include <stdlib.h> //rand() e srand()
#include<time.h> //time()
#define tam 5
//batalha naval / jogador vs pc
//2 mat
int numaleatorio(int x){
    srand(time(NULL)); 
    return x = rand() % tam;
}
void preenchemat(int mat[tam][tam]){
    for(int i = 0;i <tam;i++)
        for(int j=0;j<tam;j++)
            mat[i][j] = 0;
}
void colocabarco(int jogador,int mat[tam][tam]){ //com q colocar sequencial
    int i,j,barco;
    char horouvert;
    barco = 3;
    if(jogador = 1){
        printf("escolha o local para colocar a ponta do barco");
        scanf("%d %d",&i,&j);
        if((i == 0) || (j == 0)){
            printf("escolha H para horizontal e V para vetical");
            scanf("%c",horouvert);
            if(horouvert = 'H'){
                mat[i][j] = 1;
                mat[i][j+1] = 1;
                mat[i][j+2] = 1;
            }
            else if(horouvert = 'V'){
                mat[i][j] = 1;
                mat[i+1][j] = 1;
                mat[i+2][j] = 1;
            }
        }



    }

}








int main(){
    int matjogador[tam][tam],matpc[tam][tam],jg;
    preenchemat(matjogador);
    preenchemat(matpc);
    jg = 1;
    colocabarco(jg, matjogador);

}
