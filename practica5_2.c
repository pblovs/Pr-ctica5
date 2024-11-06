#include <stdio.h>
#include <stdlib.h>

struct Estudiantes{
	double nota_final;
	int pos;
};

float promedio(float array[100], int cant){
	float suma = 0;
	for (int i = 1; i <= cant; i++){
	
		suma= suma + array[i];
	}
	return suma /cant;
}

int main(){ 
	int cantidad;
	
	printf("Introduce la cantidad de estudiantes para calcular el promedio: ");
	scanf("%d", &cantidad);
	struct Estudiantes persona[cantidad];

	for (int i = 0; i < cantidad; i++){	
		printf("Introduce la nota final del estudiante número %d: ", i);
		scanf("%lf", &persona[i].nota_final);
	}
	float notas[100];
	for (int i = 0; i < cantidad; i++){
	
	notas[i] = persona[i].nota_final;
	}

	printf("El promedio de las notas de los estudiantes es: %f\n", promedio(notas, cantidad));

	return EXIT_SUCCESS;
}
