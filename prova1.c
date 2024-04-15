#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {

    int portaEscolhida, portaVazia;
    char opcao, s, n;

    srand(time(NULL));

    int portaPremiada = rand() % 4;
    printf("Escolha uma porta de 1 a 3: ");
    scanf("%d", &portaEscolhida);

    if(portaEscolhida == portaPremiada){
        printf("\nVocê ganhou!");
    } else {
      portaVazia = 0; 
        printf("\nO apresentador abriu a porta: %d", portaVazia);
        printf("\nDeseja trocar de porta? 1 para sim e 2 para não: ");
        scanf(" %c", &opcao);
            if(opcao == '2'){ 
                printf("Você perdeu. A porta premiada era: %d\n", portaPremiada);
            } else if(opcao == '1') { 
                printf("Escolha uma porta de 1 a 3 \n");
                scanf("%d", &portaEscolhida);
                srand(time(NULL));
                int portaPremiada = rand() % 4;
                    if(portaEscolhida == portaPremiada) {
                     printf("Você ganhou!\n");
                    } else if(portaEscolhida == portaVazia){
                        printf("Você perdeu, a porta premiada era a %d", portaPremiada);
                    }
            }
    }
    return 0;
}
