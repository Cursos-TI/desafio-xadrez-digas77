#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++){
        printf("Torre foi para a Direita\n");//Imprime a direção do movimento
    }
    
    for (int j = 0; j <= 2; j++){
        printf("Bispo foi para a Diagonal á Direita \n");
    }

    for(int k = 0; k <= 8; k++){
        printf("Rainha foi para a Esquerda\n");
    }
    

    return 0;
}
