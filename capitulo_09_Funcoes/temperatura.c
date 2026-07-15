#include <stdio.h>

float TemperaturaCelsius(float Fah) {
    float Celsius = 0.0;
    Celsius = 5.0/9.0 * (Fah - 32.0 );
    return Celsius;

}


int main () {
    float Fahrenheit, TemperaturaC = 0.0;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &Fahrenheit);

    TemperaturaC = TemperaturaCelsius(Fahrenheit);

    printf("Temperatura em Celsius: %.2f\n", TemperaturaC);












    return 0;
}