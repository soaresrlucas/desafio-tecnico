#include <stdio.h>

int main() {
    int consulta, anterior = 1, maisAnterior = 0, soma, pertence = 0;
    scanf("%d", &consulta);
    while (maisAnterior < consulta) {
        soma = anterior + maisAnterior;
        maisAnterior = anterior;
        anterior = soma;
        if(consulta == anterior || consulta == maisAnterior) {
            pertence = 1;
            break;
        }
    }
    if(pertence == 0 && consulta != 0) {
        printf("O numero %d nao pertence a sequencia de Fibonacci", consulta);
    } else
        printf("O numero %d pertence a sequencia de Fibonacci", consulta);
    
    return 0;
}