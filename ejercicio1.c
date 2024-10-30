#include <stdio.h>
#include <stdlib.h>

int main(){

	char array[2][3][4][5][10]; 
	array[0][1][1][2][6] = 45;
	array[1][2][0][4][4] = 4;
	array[0][2][2][4][3] = 12;
	array[1][0][3][3][1] = 34;
	array[0][1][1][2][0] = 125;
	printf("En Europa, en la sede 2, en la categoria de telefonos, del modelo 3, del lote 7 hay %d unidades\n", array[0][1][1][2][6]);
        printf("En America, en la sede 3, en la categoria de televisores, del modelo 5, del lote 5 hay %d unidades\n", array[1][2][0][4][4]);
	printf("En Europa, en la sede 3, en la categoria de ordenadores, del modelo 5, del lote 4 hay %d unidades\n",  array[0][2][2][4][3]);
	printf("En America, en la sede 1, en la categoria de electrodomesticos, del modelo 4, del lote 2 hay %d unidades\n", array[1][0][3][3][1]);
	printf("En Europa, en la sede 2, en la categoria de telefonos, del modelo 3, del lote 1 hay %d unidades\n", array[0][1][1][2][0]);
	//Europa = 0, America = 1
	//Televisores = 0, telefonos = 1, ordenadores = 2, electrodomesticos = 3
}	
