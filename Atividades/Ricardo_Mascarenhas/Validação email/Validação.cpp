/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descri��o: Valida��o de email
**********************************************************/
#include <stdio.h>
#include <string.h>

int main(void) {

  char email[50]={"ricardo@hotmail.com"};
  int tam=strlen(email);
  int arroba = 0, ponto = 0, antesPonto = 0, depoisPonto = 0, i;

  for (i = 0; i < tam; i++) {
    char c = email[i];
    if(c == '@') {
      if (arroba)
        break; // n�o pode ter uma segunda @
      arroba = 1;
      if (i < 3)
        break; // se @ vier antes de 3 caracteres, erro
    }
    else if (arroba) { // se j� encontrou @
      if (ponto) { // se j� encontrou . depois de @
        depoisPonto++;
      }
      else if(c == '.') {
        ponto = 1;
        if (antesPonto < 3) {
          break; // se . depois de @ vier antes de 3 caracteres, erro
        }
      }
      else {
        antesPonto++;
      }
    }
  } // for

  if (i == tam && depoisPonto > 1)
    printf("Valido");
  else
    printf("Invalido");
}
