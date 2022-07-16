#include <stdio.h>
#include <string.h>

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

void exercise2() {
    /*
     * 1.- Greet user
     * 2.- Request name
     * 3.- Greet user with its name
     */
    char greeting[30];
    printf("What is your name?:");
    scanf("%s", greeting);
    printf("Welcome, %s", greeting);
}

int main() {

    char str1ch1 = 'H';
    char str1ch2 = 'o';
    char str1ch3 = 'l';
    char str1ch4 = 'a';
    char str1ch5 = ' ';

    char str2ch1 = 'H';
    char str2ch2 = 'o';
    char str2ch3 = 'l';
    char str2ch4 = 'a';
    char str2ch5 = 's';

    if (str1ch1 == str2ch1) {
        printf("H is true\n");
    } else {
        printf("H is false\n");
    }
    if (str1ch2 == str2ch2) {
        printf("o is true\n");
    } else {
        printf("o is false\n");
    }
    if (str1ch3 == str2ch3) {
        printf("l is true\n");
    }
    else {
        printf("l is false\n");
    }
    if (str1ch4 == str2ch4) {
        printf("a is true\n");
    }
    else {
        printf("a is false\n");
    }
    if (str1ch5 == str2ch5) {
        printf("s is true");
    }
    else {
        printf("s is false");
    }

        /*
         * 1.- Ask for user's name
         * 2.- Greet user only if their name is "Bob" or "Alice"
         */

        /*
         * 1.- Compare the first string with the second string
         * 2.- if strings match then "true", if not, "false"

        char ch1[3] = "bob";
        char ch2[5] = "alice";
        */


        //& -> obtener la direccion de memoria / referencia
        //* -> obtener el valor en memoria

        return 0;

}
