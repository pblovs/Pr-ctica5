#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BAJA_EX 5

struct tienda{
	char nombre[20];
	int stock;
};

int main(){

	int cant;
	printf("Introduce el número de productos a gestionar (max. 10): ");
	scanf("%d", &cant);
	while (cant > 10){
		printf("¡MÁXIMO 10!\n");
		return 0;
	}

	struct tienda productos[10];

	for (int i=0; i<cant; i++){ //guardamos los datos 
		printf("Introduce el nombre del producto: ");
		scanf(" %s", productos[i].nombre);
		printf("Stock: ");
		scanf(" %d", &productos[i].stock);
	}

	for (int i=0; i<cant; i++){ //imprime todos los datos
		printf("Hay %d unidades de %s\n", productos[i].stock, productos[i].nombre);
	}
	
	char nombre_buscado[20];
	int cantidad_añadida;

	while (1) {

		printf("\n¿Desea reabastecer algún producto? (1 = si, 0 = no): ");
		int respuesta;
		scanf("%d", &respuesta);

		if (respuesta == 0) {
			break;
		}

		else {

			printf("Ingrese el nombre del producto a reabastecr: ");
			scanf("%s", nombre_buscado);

			for (int i=0; i<cant; i++) {
				if (strcmp(productos[i].nombre, nombre_buscado) == 0) {
					printf("Cantidad a añadir: ");
					scanf("%d", &cantidad_añadida);
					productos[i].stock += cantidad_añadida;
					printf("Ahora hay %d de %s.\n", productos[i].stock, productos[i].nombre);
				}
			}
		}
	}
	
	for (int i=0; i<cant; i++){
		if (productos[i].stock < BAJA_EX){
			printf("Hay baja existencia de %s - %d unidades\n", productos[i].nombre, productos[i].stock);
		}
	}
	
	printf("\nIntroduce el nombre del producto a buscar: ");
	scanf("%s", nombre_buscado);
	int encontrado;
	for (int i=0; i<cant; i++) {
		if (strcmp(productos[i].nombre, nombre_buscado) != 0){ 
			encontrado = 0;
		}
		else if (strcmp(productos[i].nombre, nombre_buscado) == 0){
			encontrado = 1;
		}
	}
}
