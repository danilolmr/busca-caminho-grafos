#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Graph {
    int numVertices;
    int** matrizAdj;
};

struct Graph* criarGrafo(int numVertices) {
    struct Graph* grafo = (struct Graph*)malloc(sizeof(struct Graph));
    grafo->numVertices = numVertices;
    grafo->matrizAdj = (int**)malloc(numVertices * sizeof(int*));
    for (int i = 0; i < numVertices; i++) {
        grafo->matrizAdj[i] = (int*)malloc(numVertices * sizeof(int));
        for (int j = 0; j < numVertices; j++) {
            grafo->matrizAdj[i][j] = 0;
        }
    }
    return grafo;
}

void adicionarAresta(struct Graph* grafo, int origem, int destino) {
    grafo->matrizAdj[origem-1][destino-1] = 1;
    grafo->matrizAdj[destino-1][origem-1] = 1;
}

int buscaEmProfundidade(struct Graph* grafo, int origem, int destino, int visitados[]) {
    if (origem == destino)  return 1;
    visitados[origem-1] = 1;
    for (int i = 0; i < grafo->numVertices; i++) {
        if (grafo->matrizAdj[origem-1][i] && !visitados[i]) {
            if (buscaEmProfundidade(grafo, i+1, destino, visitados))
                return 1;
        }
    }
    return 0;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numVertices, origem, destino, numArestas, v1, v2;

    printf("Digite o número de vértices do grafo: ");
    scanf("%d", &numVertices);

    struct Graph* grafo = criarGrafo(numVertices);

    printf("Digite o número de arestas do grafo: ");
    scanf("%d", &numArestas);

    printf("Digite as arestas no formato v1-v2:\n");
    for (int i = 0; i < numArestas; i++) {
        scanf("%d-%d", &v1, &v2);
        adicionarAresta(grafo, v1, v2);
    }

    printf("Digite o vértice de origem: ");
    scanf("%d", &origem);
    printf("Digite o vértice de destino: ");
    scanf("%d", &destino);

    int* visitados = (int*)malloc(numVertices * sizeof(int));
    for (int i = 0; i < numVertices; i++) {
        visitados[i] = 0;
    }

    if (buscaEmProfundidade(grafo, origem, destino, visitados))
        printf("Existe um caminho entre o vértice %d e o vértice %d.\n", origem, destino);
    else
        printf("Não existe um caminho entre o vértice %d e o vértice %d.\n", origem, destino);

    free(visitados);
    for (int i = 0; i < numVertices; i++) {
        free(grafo->matrizAdj[i]);
    }
    free(grafo->matrizAdj);
    free(grafo);

    return 0;
}
