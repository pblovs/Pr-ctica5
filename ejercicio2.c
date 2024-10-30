#include <stdio.h>
#include <stdlib.h>

int main(){
char letra = 'a';

// Esta fución es la encargada de guardar la lista de las palabras que ya estan definidas, es decir, esta lista esta formada por 8 cadenas [8], las cuales pueden tener 100 caracteres[100].
char lista_palabras[8][100] = {

"Hola",
"Señor"
"Burro",
"Pedro",
"Vim",
"Casa",
"Silla",
"Ballena"

};
	for(int i = 0; i < 8; i++){
		if(lista_palabras[i] == letra){
		continue;

			}else printf("Las palabras sin la letra a son: %s\n", lista_palabras[i]);
	}		
return EXIT_SUCCESS;
}
