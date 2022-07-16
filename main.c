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
    int numeros[] = {193, 586, 15, 77, 24, 762, 3, 1092, 85, 497};

    int sumando1 = 452;
    int sumando2 = 996;
    int resultado;

    printf("");
    resultado = suma(1236, 972);
    printf("suma %d", suma(1236, 972));

    return 0;

}
