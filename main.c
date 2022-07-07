#include <stdio.h>

int main() {
    int numeros[]={193, 586, 15, 77, 24, 762, 3, 1092, 85, 497};

    int numero = numeros[0];
    for(int numero=0; numero<9;numero++){
        if (numero%2==0){
            printf("par\n");
        }
        else {
            printf("impar\n");
        }
    }



    return 0;
}
