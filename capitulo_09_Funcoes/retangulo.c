#include <stdio.h>
#include <math.h>


float diagonalRetangulo(float base, float altura) {
    float x;

    x = sqrt((base * base) + (altura * altura));

    return x;
}

float baseRetangulo(float base, float altura) {
    float area;
    area =  base * altura;
    return area;
}

float perimetroRetangulo(float base, float altura) {
    float perimetro;
    perimetro  = (base + base) + (altura + altura);
    return perimetro;
}

int main() {
    float base, altura;
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    float diagonal = diagonalRetangulo(base, altura);
    float area = baseRetangulo(base, altura);
    float perimetro = perimetroRetangulo(base, altura);
    printf("Diagonal = %.2f\n", diagonal);
    printf("Area = %.2f\n", area);
    printf("Perimetro = %.2f\n", perimetro);






    return 0;
}
