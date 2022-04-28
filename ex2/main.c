#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char stringNome[100];
  char palavra[100] = "";
  char nomeReverso[100] = "";
  int x = 0;
  int contaNomes = 0;



  printf("Informe um nome\n");
  fgets(stringNome,100,stdin);
  stringNome[strlen(stringNome)-1] = '\0';
  int controler = strlen(stringNome);

  for(int i=strlen(stringNome); i >= 0 ; --i){

      if(stringNome[i] == ' '){

        for(int j=i+1; j < controler; j++){

            palavra[x] = stringNome[j];
            x++;

        }

      strcat(nomeReverso," ");
      strcat(nomeReverso,palavra);
      contaNomes++;
      memset(palavra, 0, 100);
      x = 0;
      controler = strlen(stringNome)-(strlen(stringNome)-i);
    }
    if(i == 0){
      for(int j=i; j<controler; j++){
        palavra[x] = stringNome[j];
        x++;
      }

      strcat(nomeReverso," ");
      strcat(nomeReverso,palavra);
      contaNomes++;
      memset(palavra, 0, 100);
      x = 0;
      controler = strlen(stringNome)-(strlen(stringNome)-i);
    }
  }

  printf("Nome: %s\n", nomeReverso);
  printf("Quantidade de palavras %d\n", contaNomes);

}
