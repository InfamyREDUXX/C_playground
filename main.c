#include <stdio.h>

void validateIfPair(int numero) {
    if (numero % 2 == 0) {
        printf("el numero es %d par\n", numero);
    } else {
        printf("el numero es %d impar\n", numero);
    }
}

int suma(int sumando1, int sumando2) {
    return sumando1 + sumando2;
}

int resta(int sumando1, int sumando2) {
    return sumando1 - sumando2;
}

int multi(int sumando1, int sumando2) {
    return sumando1 * sumando2;
}

int main() {

    char palabra[10];
    printf("Dime una palabra:");
    scanf("%s\n", palabra);
    printf("%s", palabra);


    for (int i = 0; i <= 10; i++) {
        printf("%c", palabra[i]);
    }

    //& -> obtener la direccion de memoria / referencia
    //* -> obtener el valor en memoria

    return 0;

}
