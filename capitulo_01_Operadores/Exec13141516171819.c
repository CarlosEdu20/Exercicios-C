#include <stdio.h>
#include <math.h>

void main() {
    float a, b, h;
    printf("Digite o cateto A: ");
    scanf("%f", &a);
    printf("Digite o cateto B: ");
    scanf("%f", &b);
    h = sqrt(a*a + b*b);
    printf("O valor da hipotenusa é %f", h);

    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    char minuscula  =  letra + 32;
    printf("%c", minuscula);


    int numero;
    printf("Digite um numero de três digitos: ");
    scanf("%d", &numero);
    int ultimo_numero  =  numero % 10;
    int penultimo_numero = (numero / 10) % 10;
    int primeiro_numero = (numero / 100) % 10;

    printf("O numero digitado foi %d%d%d", ultimo_numero, penultimo_numero, primeiro_numero);

    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    int deslocamamento = num << 1;
    int deslocamentodiv = num >> 1;
    printf("O resultado é %d", deslocamamento);
    printf("O resultado é %d", deslocamentodiv);

    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    int complemento =  ~num;
    printf("O complemeto é %d", complemento);

    int numero, deslocamento;

    // Leitura dos dois números
    printf("Digite o primeiro número (valor a ser deslocado): ");
    scanf("%d", &numero);

    printf("Digite o segundo número (quantidade de bits para deslocar): ");
    scanf("%d", &deslocamento);

    // Operações de deslocamento
    int esquerda = numero << deslocamento;
    int direita  = numero >> deslocamento;

    // Exibindo os resultados
    printf("\nDeslocamento à esquerda (%d << %d): %d\n", numero, deslocamento, esquerda);
    printf("Deslocamento à direita  (%d >> %d): %d\n", numero, deslocamento, direita);

    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    int ouExclusivo = num1 ^ num2;
    int ouBit = num1 | num2;
    int eBit =  num1 & num2;
    printf("Operação Ou exlusivo %d\n", ouExclusivo);
    printf("Operação OU %d\n", ouBit);
    printf("Operação and %d", eBit);







}