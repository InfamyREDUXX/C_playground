#include <stdio.h>

int main() {

    /* DRY version
    * 1.- Compare the first string with the second string
    * 2.- if strings match then "true", if not, "false"
    */

    char str1[10] = "Hola";
    char str2[10] = "Holas";

    for (int i = 0; i <= 10; i++) {
        char a = str1[i];
        char b = str2[i];

        if (a == b) {
            printf("%c and %c is true\n", a, b);
        } else {
            printf("%c and %c is false\n", a, b);
        }

        //check para no imprimir de mas
        if(a == 0) {
            break;
        }
    }
    //0 false - 1 true

    //& -> obtener la direccion de memoria / referencia
    //* -> obtener el valor en memoria

    return 0;

}
