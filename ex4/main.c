#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void) {
    char stringFrase[100] = "";
    char stringFraseFormatada[100] = "";
    char stringFraseInvertida[100] = "";
    int i;
    int x = 0;

    printf("Informe uma frase\n");
    fgets(stringFrase,100,stdin);
    stringFrase[strlen(stringFrase)-1] = '\0';

    for (i = 0; i < strlen(stringFrase); ++i) {
        if(isalpha(stringFrase[i]) || isdigit(stringFrase[i])){
            stringFraseFormatada[x] = tolower(stringFrase[i]);
            x++;
        }

    }
    stringFraseFormatada[x+1] = '\0';
    printf("frase formatada: %s\n",stringFraseFormatada);
    x = 0;
    for (int k = strlen(stringFraseFormatada)-1; k >= 0 ; --k) {
        stringFraseInvertida[x] =  stringFraseFormatada[k];
        x++;
    }
    printf("frase invertida: %s\n",stringFraseInvertida);

    if(strcmp(stringFraseInvertida, stringFraseFormatada) == 0){
        printf("Eh palindromo");
    } else{
        printf("Nao eh palindromo");
    }


}