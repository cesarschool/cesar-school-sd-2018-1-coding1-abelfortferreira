#include <stdio.h>
/**
 * Escreva uma função que encontra a primeira letra que não se repete em uma
 * sentença.
 * Função: char firstNonRepeatingChar(char[] sentence, int length)
 * Input:
 * - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
 * - length: tamanho do array - número de caracteres
 * Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
 */
char firstNonRepeatingChar (char sentence[], int length)
{
    printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);

    for (int i = 0; i < length; ++i) {

        int repete = 0;

        for (int j = i + 1; j < length; ++j) {
    	    if (sentence[i] == sentence[j]) {
    			repete = 1;
    			break;
    		} else {
                repete = 0;
    		}
        }

        for (int j = 0; j < i; ++j) {
    	    if (sentence[i] == sentence[j]) {
    		    repete = 1;
    		    break;
    	    } else {
                repete = 0;
    		}
        }

        if (repete == 0) {
            printf("A primeira letra que não se repete é: ");
    	    printf("%c", sentence[i]);
    	    return sentence[i];
        } else if (repete == 1) {
            printf("Todas as letras se repetem.\n");
            return sentence[i];
        }
    }

    printf("\nfirstNonRepeatingChar::END\n");
    return -1;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");

    firstNonRepeatingChar("cesar", 5);
    firstNonRepeatingChar("arara", 5);

    return 0;
}
