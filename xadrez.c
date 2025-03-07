#include <stdio.h>

void moverTorre(int casas){
    if (casas > 0){
        moverTorre(casas - 1);
        printf("Torre foi para a Direita\n");
    }
}

int main  (){
    moverTorre(5);
    int movimentocompleto = 1;
    
    for (int j = 0; j <= 2; j++){
        printf("Bispo foi para a Diagonal á Direita \n");
    }

    for(int k = 0; k <= 7; k++){
        printf("Rainha foi para a Esquerda\n");
    }

    while (movimentocompleto--)
    {
        for (int i = 0; i <= 1; i++)
        {
            printf("Cavalo foi para Cima\n");
        }
        printf("Cavalo foi para a Direita\n");
    }
    




    return 0;
}
