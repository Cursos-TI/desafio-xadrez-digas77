#include <stdio.h>

void moverTorre(int casas){
    if (casas > 0){
        moverTorre(casas - 1);
        printf("Torre foi para a Direita\n");
    }
}
void moverBispo(int casas){
    if (casas > 0){
        moverBispo(casas - 1);
        printf("Bispo foi na diagonal pra cima e a direita! \n");
    }
}

int main  (){
    moverTorre(5);
    moverBispo(5);
    int movimentocompleto = 1;
    

    for(int k = 0; k <= 7; k++){
        printf("Rainha foi para a Esquerda\n");
    }

    while (movimentocompleto--)
    {
        for (int i = 0; i <= 1; i++)
        {
            printf("Cavalo foi para Baixo\n");
        }
        printf("Cavalo foi para a Direita\n");
    }
    




    return 0;
}
