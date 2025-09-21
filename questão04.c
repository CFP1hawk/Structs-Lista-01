#include <stdio.h>
struct Aluno {
    char nome[41];
    int matricula;
    float nota;
};

int main() {
    struct Aluno alunos[3];
    int indice_melhor = 0;
    
    printf("Cadastro de Alunos\n");
    for(int i = 0; i < 3; i++) {
        printf("\nAluno %d:\n", i+1);
        printf("Nome: ");
        
        while(getchar() != '\n');
      
        int j = 0;
        char c;
        while((c = getchar()) != '\n' && j < 40) {
            alunos[i].nome[j] = c;
            j++;
        }
        alunos[i].nome[j] = '\0'; 
        
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
 
        if(alunos[i].nota > alunos[indice_melhor].nota) {
            indice_melhor = i;
        }
    }
    
    printf("\nAluno com a maior nota:\n");
    printf("Nome: %s\n", alunos[indice_melhor].nome);
    printf("Matrícula: %d\n", alunos[indice_melhor].matricula);
    printf("Nota: %.2f\n", alunos[indice_melhor].nota);
    
    return 0;
}
