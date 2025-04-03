# 🔍 Busca de Caminhos em Grafos
Este projeto implementa um algoritmo de busca de caminhos em grafos utilizando a busca em profundidade (DFS - Depth-First Search) em linguagem C.

## 🚀 Funcionalidades
📌 Criar um grafo não direcionado com um número definido de vértices e arestas.
🔗 Inserir arestas no grafo manualmente.
🔎 Buscar um caminho entre dois vértices utilizando DFS.
📊 Exibir se há ou não um caminho entre os vértices fornecidos.

## 🛠️ Tecnologias Utilizadas
🖥️ **Linguagem C** - Base do desenvolvimento do algoritmo.
📂 **Matriz de Adjacência** - Estrutura de dados para representação do grafo.
🔍 **Busca em Profundidade (DFS)** - Algoritmo para explorar os caminhos no grafo.

## 📦 Como Instalar e Executar
1️⃣ Clone o repositório:
```sh
git clone https://github.com/seu-usuario/busca-caminho-grafos.git
```
2️⃣ Compile o código utilizando um compilador C, como GCC:
```sh
gcc -o busca_grafos busca_caminho_grafos.c
```
3️⃣ Execute o programa:
```sh
./busca_grafos
```
4️⃣ Insira os dados conforme solicitado pelo programa.

## 📂 Estrutura do Projeto
```
busca-caminho-grafos/
│── src/
│   ├── busca_caminho_grafos.c (Código principal)
│── README.md (Documentação do projeto)
```

## 🎥 Exemplo de Entrada e Saída
📥 Entrada:
```
Digite o número de vértices do grafo: 5
Digite o número de arestas do grafo: 4
Digite as arestas no formato v1-v2:
1-2
2-3
3-4
4-5
Digite o vértice de origem: 1
Digite o vértice de destino: 5
```
📤 Saída:
```
Existe um caminho entre o vértice 1 e o vértice 5.
```

## 📄 Licença
Este projeto está licenciado sob os termos da **MIT License**. Consulte o arquivo [LICENSE](./LICENSE) para mais detalhes.
