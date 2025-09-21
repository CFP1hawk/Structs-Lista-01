#include <stdio.h>
struct Retangulo {
    float base;
    float altura;
};
float calcularArea(struct Retangulo r) {
    return r.base * r.altura;
}
int main() {
    struct Retangulo ret;
    
    printf("Cálculo da área de um retângulo\n");
    printf("Base: ");
    scanf("%f", &ret.base);
    
    printf("Altura: ");
    scanf("%f", &ret.altura);
    
    float area = calcularArea(ret);
    
    printf("A área do retângulo é: %.2f\n", area);
    
    return 0;
}
