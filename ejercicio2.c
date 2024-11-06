#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char letra = 'a';
int encontrado;
// Esta fución es la encargada de guardar la lista de las palabras que ya estan definidas, es decir, esta lista esta formada por 8 cadenas [8], las cuales pueden tener 100 caracteres[100].
char lista_palabras[8][100] = {

"Cama",
"Perro",
"Arma",
"Pedro",
"Vim",
"PC",
"Silla",
"Ballena"

};
	for(int i = 0; i < 8; i++){

	int longitud = strlen(lista_palabras[i]);

		for (int j = 0; j < longitud; j++){
			
			if(lista_palabras[i][j] == letra){
						
				encontrado = encontrado - letra;
				lista_palabras[i][j] += encontrado;
				break;
			}
			continue;
		}
		printf("Las palabras sin la letra a son: %s\n", lista_palabras[i]);
	}

return EXIT_SUCCESS;
}
