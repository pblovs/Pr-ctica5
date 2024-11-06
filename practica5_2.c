#include <stdio.h>
#include <stdlib.h>

struct Estudiantes{
	double nota_final;
	int pos;
};

float promedio(float array[]){
	

}

int main(){ 
	int cantidad;
	
	printf("Introduce la cantidad de estudiantes para calcular el promedio: ");
	scanf("%d", &cantidad);
	struct Estudiantes persona[cantidad];

	for (int i = 1; i <= cantidad; i++){	
		printf("Introduce la nota final del estudiante número %d: ", i);
		scanf("%lf", &persona[i].nota_final);
	}


	return EXIT_SUCCESS;
}
