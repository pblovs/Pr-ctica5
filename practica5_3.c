#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tienda{
	char nombre[20];
	int stock;
};

int main(){

	int cant;
	printf("Introduce el número de productos a gestionar (max. 10): ");
	scanf("%d", &cant);

	struct tienda productos[10];

	for (int i=0; i<cant; i++){
		printf("Introduce el nombre del producto: ");
		scanf(" %s", productos[i].nombre);
		printf("Stock: ");
		scanf(" %d", &productos[i].stock);
	}

	for (int i=0; i<cant; i++){
		printf("Hay %d unidades de %s\n", productos[i].stock, productos[i].nombre);
	}

	char nombre_buscado[20];
	int cantidad_añadida;

	while (1) {

		printf("¿Desea reabastecer algún producto? (1 = si, 0 = no): ");
		int respuesta;
		scanf("%d", &respuesta);

		if (respuesta == 0) {
			break;
		}

		else {

			printf("Ingrese el nombre del producto a reabastecr: ");
			scanf("%s", nombre_buscado);

			for (int i = 0; i < cant; i++) {
				if (strcmp(productos[i].nombre, nombre_buscado) == 0) {
					printf("Cantidad a añadir: ");
					scanf("%d", &cantidad_añadida);
					productos[i].stock += cantidad_añadida;
					printf("Ahora hay %d de %s.\n", productos[i].stock, productos[i].nombre);
				}
			}
		}
	}
}
