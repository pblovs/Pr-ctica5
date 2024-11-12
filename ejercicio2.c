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
	printf("Palabras sin la a: \n");
	for(int i = 0; i < 8; i++){ //bucle para las palabras

		int contador = 0;
		for (int j = 0; j < strlen(lista_palabras[i]); j++){ //bucle para las letras, strlen te da el numero de letras de la palabra
			
			if(lista_palabras[i][j] == letra){
				contador = 1;
				break; //sale del bucle de letras
			}
		}
		if (contador == 1){
			continue; //pasa a la siguiente palabra
		}
		else {
			printf("%s\n", lista_palabras[i]);
		}
	}

return 0;
}
