#include <stdio.h>
#include "sumar.h"
#include "restar.h"
#include "multiplicar.h"
#include "dividir.h"

int main(int argc, char const * argv[]) {
    int a, b;
    printf("Ingrese 1er numero: ");
    scanf("%d", &a);
    printf("Ingrese 2do numero: ");
    scanf("%d", &b);
    printf("La suma es: %d\n", sumar(a,b));
    printf("La resta es: %d\n", restar(a,b));
    printf("La multiplicacion es: %d\n", multiplicar(a,b));
    printf("La division es: %.2f\n", dividir(a,b));
    return 0;
}