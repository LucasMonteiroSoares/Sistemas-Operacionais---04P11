// Lucas Monteiro Soares - 10417881
// Matteo Porcare - 10418276

#include <stdio.h>
#include <stdlib.h>

struct reg {
    int conteudo;
    struct reg *prox;
};

typedef struct reg celula;

void imprimir_lista(celula *inicio) {  // Adicionar *
    celula *atual = inicio;  // Adicionar *
    while (atual != NULL) {
        printf("%d -> ", atual->conteudo);
        atual = atual->prox;
    }
    printf("NULL\n");
}

void remover_lista(celula *inicio) {  // Adicionar *
    celula *atual = inicio;  // Adicionar *
    celula *prox;  // Adicionar *

    while (atual != NULL) {
        prox = atual->prox;
        printf("Removendo elemento: %d\n", atual->conteudo);
        free(atual);
        atual = prox;
    }
}

int main() {
    // Cria��o das tr�s c�lulas
    celula *primeira = (celula *)malloc(sizeof(celula));  // Adicionar *
    celula *segunda = (celula *)malloc(sizeof(celula));   // Adicionar *
    celula *terceira = (celula *)malloc(sizeof(celula));  // Adicionar *

    primeira->conteudo = 10;
    primeira->prox = segunda;

    segunda->conteudo = 20;
    segunda->prox = terceira;

    terceira->conteudo = 30;
    terceira->prox = NULL;

    printf("Imprimindo elementos da lista...\n");
    imprimir_lista(primeira);

    printf("Removendo elementos da lista...\n");
    remover_lista(primeira);

    printf("Todos os elementos foram removidos com sucesso.\n");

    return 0;
}
