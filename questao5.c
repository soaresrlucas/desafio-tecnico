#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    int fim, aux, tam;
    char palavra[20];
    scanf("%s", palavra);

    tam = strlen(palavra);

    fim = tam - 1;
    for(int i = 0; i < tam/2; i++){
        aux = palavra[i];
        palavra[i] = palavra[fim];
        palavra[fim] = aux;
        fim--;
    }

    printf("%s\n", palavra);
    return 0;
}