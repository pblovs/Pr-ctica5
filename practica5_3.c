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

	
}
