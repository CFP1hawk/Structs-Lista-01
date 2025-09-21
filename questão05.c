#include <stdio.h>
struct Contato {
    char nome[51];
    char telefone[16];
    char email[41];
};
int main() {
    struct Contato contatos[3];
    char c;
    
    printf("Agenda de Contatos\n");
    for(int i = 0; i < 3; i++) {
        printf("\nContato %d:\n", i+1);
        
        printf("Nome: ");
        int j = 0;
        while((c = getchar()) != '\n' && j < 50) {
            contatos[i].nome[j++] = c;
        }
        contatos[i].nome[j] = '\0';
      
        printf("Telefone: ");
        j = 0;
        while((c = getchar()) != '\n' && j < 15) {
            contatos[i].telefone[j++] = c;
        }
        contatos[i].telefone[j] = '\0';

        printf("Email: ");
        j = 0;
        while((c = getchar()) != '\n' && j < 40) {
            contatos[i].email[j++] = c;
        }
        contatos[i].email[j] = '\0';
    }
    
    printf("\n=== AGENDA DE CONTATOS ===\n");
    for(int i = 0; i < 3; i++) {
        printf("\nContato %d:\n", i+1);
        printf("Nome: %s\n", contatos[i].nome);
        printf("Telefone: %s\n", contatos[i].telefone);
        printf("Email: %s\n", contatos[i].email);
    }
    return 0;
}
