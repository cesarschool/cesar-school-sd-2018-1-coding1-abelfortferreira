#include <stdio.h>
#include <stdbool.h>

/**
 * Escreva uma função que analisa uma dada palavra ou frase, retornando se a mesma é um palíndromo ou não.
 *
 * Função: bool isPalindrome (char[] sentence, int length)
 * Input:
 * - sentence: array de caracteres em minúsculo da palavra ou frase a ser analisada.
 * - length: tamanho do array - número de caracteres
 * Output: true se a sentença é um palídromo, falso caso negativo.
 */

bool isPalindrome (char sentence[], int length) {
    printf("\nisPalindrome::START: %s, %d\n", sentence, length);

    bool palindcheck = true;

    if (length % 2 == 0) {
        int metade = length - 1;
        for (int i = 0; i < metade; i++) {
            if (sentence[i] != sentence[length - 1 - i]) {
                palindcheck = false;
            }
        }
    } else if (length % 2 != 0) {
        int metade = (length - 1) / 2;
        for (int i = 0; i < metade; i++) {
            if (sentence[i] != sentence[length - 1 - i]) {
                palindcheck = false;
            }
        }
    }

    if (palindcheck == true) {
        printf("É palíndromo.");
    } else {
        printf("Não é palíndromo.");
    }

    printf("\nisPalindrome::END\n");

    if (palindcheck == true) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: Palindrome ###\n");

    // true cases
    isPalindrome("ana", 3);
    isPalindrome("esse", 4);
    isPalindrome("osso", 4);
    isPalindrome("rapar", 5);
    isPalindrome("omississimo", 11);

    // false cases
    isPalindrome("cesar", 5);
    isPalindrome("school", 6);
    isPalindrome("Jubileu", 7);

    return 0;
}
