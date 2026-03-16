#include <stdio.h>

int main() {
    int opcion;
    float cantidad;

    // Tasas de conversion
    float quetzal_dolar = 0.13;
    float quetzal_euro = 0.12;
    float dolar_quetzal = 7.75;
    float euro_quetzal = 8.40;

    printf("=== CONVERSOR DE MONEDAS ===\n");
    printf("1. Quetzales a Dolares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dolares a Quetzales\n");
    printf("4. Euros a Quetzales\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            printf("Resultado: %.2f USD\n", cantidad * quetzal_dolar);
            break;

        case 2:
            printf("Resultado: %.2f EUR\n", cantidad * quetzal_euro);
            break;

        case 3:
            printf("Resultado: %.2f GTQ\n", cantidad * dolar_quetzal);
            break;

        case 4:
            printf("Resultado: %.2f GTQ\n", cantidad * euro_quetzal);
            break;

        default:
            printf("Opcion invalida.\n");
    }

    return 0;
}
