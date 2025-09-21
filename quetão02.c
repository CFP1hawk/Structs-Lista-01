#include <stdio.h>
struct Produto {
    char nome[31];
    float preco;
    int quantidade;
};
int main() {
    struct Produto produtos[5];
    int indice_mais_caro = 0;
    
    printf("Cadastro de Produtos\n");
    for(int i = 0; i < 5; i++) {
        printf("\nProduto %d:\n", i+1);
        printf("Nome: ");
        while(getchar() != '\n');

        int j = 0;
        char c;
        while((c = getchar()) != '\n' && j < 30) {
            produtos[i].nome[j] = c;
            j++;
        }
        produtos[i].nome[j] = '\0';
        
        printf("Preço: ");
        scanf("%f", &produtos[i].preco);
        
        printf("Quantidade em estoque: ");
        scanf("%d", &produtos[i].quantidade);

        if(produtos[i].preco > produtos[indice_mais_caro].preco) {
            indice_mais_caro = i;
        }
    }
    
    printf("\nProduto mais caro:\n");
    printf("Nome: %s\n", produtos[indice_mais_caro].nome);
    printf("Preço: R$ %.2f\n", produtos[indice_mais_caro].preco);
    printf("Quantidade: %d\n", produtos[indice_mais_caro].quantidade);
    
    return 0;
}
