#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void) {
    char stringNome[100];
    char letra = 'a';
    char lastName[100] = "";
    char firstName[100] = "";
    int i;
    int j;
    int x = 0;

    printf("Informe um nome\n");
    fgets(stringNome,100,stdin);
    stringNome[strlen(stringNome)-1] = '\0';

    for (i = 0; i < strlen(stringNome); ++i) {
        letra = stringNome[i];
        if(letra == ' '){
            break;
        }
        firstName[i] = letra;
    }
    firstName[i+1] = '\0';

    for (int k = strlen(stringNome); k >= 0 ; --k) {
        if(stringNome[k] == ' '){
            for (int j = k; j <= strlen(stringNome); j++) {
                letra = stringNome[j];
                lastName[x] = toupper(letra);
                x++;
            }
            break;
        }
    }

    strcat(lastName,", ");
    strcat(lastName,firstName);
    printf("%s",lastName);



}

