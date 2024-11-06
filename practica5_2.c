#include <stdio.h>
#include <stdlib.h>
#define Nota_aprob 5.0

struct Estudiantes{
	double nota_final;
	int pos;
};

float num_aprobados(float array[100], int cant){

	int aprobados = 0;
	for (int i = 0; i < cant; i++){
		
		if (array[i] >= Nota_aprob){
		aprobados++;
		}
	}
	return aprobados;
}
float num_suspensos(float array[100], int cant){

	int suspensos = 0;
	for (int i = 0; i < cant; i++){

		if (array[i] <= Nota_aprob){
		suspensos++;
		}
	}
	return suspensos;
}

float promedio(float array[100], int cant){
	float suma = 0;
	for (int i = 0; i < cant; i++){
	
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
	for (int i =0 ; i < cantidad; i++){
	
	notas[i] = persona[i].nota_final;
	}

	printf("El promedio de las notas de los estudiantes es: %f\n", promedio(notas, cantidad));
	printf("El número de estudiantes aprobados es: %f\n", num_aprobados(notas, cantidad));
	printf("El número de estudiantes suspensos es: %f\n", num_suspensos(notas, cantidad));

	return EXIT_SUCCESS;
}
