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
	while (cant > 10){
		printf("¡MÁXIMO 10!\n");
		return 0;
	}

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
	
	while(1){

		int respuesta;
		printf("¿Desea reabastecer algún producto?\n");
		printf("Si = 1, No = 0\n");
		scanf("%d", &respuesta);

		if (respuesta == 0){
			break;
		}
		else {
			cant++;
			printf("Introduce el nombre del nuevo producto: ");
			scanf("%s", productos[cant].nombre);
			printf("Stock: ");
			scanf("%d", &productos[cant].stock);
		}
	}

	for (int i=0; i<cant; i++){ 
		printf("Hay %d unidades de %s\n", productos[i].stock,productos[i].nombre);
	}
			


	
}
