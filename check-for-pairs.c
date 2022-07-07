#include <stdio.h>

void validateIfPair(int numero) {
    if (numero % 2 == 0) {
        printf("el numero es %d par\n", numero);
    } else {
        printf("el numero es %d impar\n", numero);
    }
}

int main() {
    int numeros[] = {193, 586, 15, 77, 24, 762, 3, 1092, 85, 497};

    printf("%X\n", &numeros[0]);
    printf("%X\n", &numeros[0]+1);

    for (int i = 0; i <= 9; i++) {
        int numero = numeros[i];
        printf("%d : %X\n",i, &numeros[i]);
    }
    return 0;
}
