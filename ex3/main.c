#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char stringFrase[100];
    char stringConsoantes[100] = "";
    char stringVogais[100] = "";
    int contaVogal = 0,contaConsoante = 0;
    char resp;
    printf("Informe uma frase\n");
    fgets(stringFrase,100,stdin);
    stringFrase[strlen(stringFrase)-1] = '\0';

    for (int i = 0; i < strlen(stringFrase); ++i) {
        if(isalpha(stringFrase[i])){
            stringFrase[i] = tolower(stringFrase[i]);
            switch (stringFrase[i]) {
                case 'a':
                    stringVogais[contaVogal] = stringFrase[i];
                    contaVogal++;
                    break;
                case 'e':
                    stringVogais[contaVogal] = stringFrase[i];
                    contaVogal++;
                    break;
                case 'i':
                    stringVogais[contaVogal] = stringFrase[i];
                    contaVogal++;
                    break;
                case 'o':
                    stringVogais[contaVogal] = stringFrase[i];
                    contaVogal++;
                    break;
                case 'u':
                    stringVogais[contaVogal] = stringFrase[i];
                    contaVogal++;
                    break;
                default:
                    stringConsoantes[contaConsoante] = stringFrase[i];
                    contaConsoante++;
            }

        }

    }

    printf("Informe V ou C: ");
    resp = getchar();

    if(resp == 'V' || resp == 'v'){
        printf("%s ",stringVogais);
        printf("%s",stringConsoantes);
    } if(resp == 'C' || resp == 'c'){
        printf("%s ",stringConsoantes);
        printf("%s ",stringVogais);
    }
}
