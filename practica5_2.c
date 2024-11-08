#include <stdio.h>
#include <stdlib.h>
#define Nota_aprob 5.0

struct Estudiantes{
	double nota_final;
	int pos;
};

float nota_min(float array[100], int cant){

	float min = array[0];
	for (int i = 1; i < cant; i++){
		if(array[i] < min){
		min = array[i];
		}
	}
	return min;
}

float nota_max(float array[100], int cant){ //Calcula la nota máxima de los estudiantes
	
	float max = array[0];
	for (int i = 1; i < cant; i++){
		if(array[i] > max){
		max = array[i];
		}
	}
	return max;
}

int num_aprobados(float array[100], int cant){ //Calcula el número de estudiantes aprobados

	int aprobados = 0;
	for (int i = 0; i < cant; i++){
		
		if (array[i] >= Nota_aprob){
		aprobados++;
		}
	}
	return aprobados;
}
int num_suspensos(float array[100], int cant){ //Calcula el número de estudiantes suspensos

	int suspensos = 0;
	for (int i = 0; i < cant; i++){

		if (array[i] < Nota_aprob){
		suspensos++;
		}
	}
	return suspensos;
}

float promedio(float array[100], int cant){ //Calcula el promedio de las notas de los estudiantes
	float suma = 0;
	for (int i = 0; i < cant; i++){
	
		suma= suma + array[i];
	}
	return suma /cant;
}

float notas_promedio(float array[100], int cant, float prom){

	for (int i = 0; i < cant; i++){
		if(array[i] > prom){
                
			printf("Notas encima de la media %.1f\n", array[i]);
		}
        }
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

	printf("El promedio de las notas de los estudiantes es: %.1f\n", promedio(notas, cantidad));

	float media = promedio(notas, cantidad);

	printf("El número de estudiantes aprobados es: %d\n", num_aprobados(notas, cantidad));
	printf("El número de estudiantes suspensos es: %d\n", num_suspensos(notas, cantidad));
	printf("La nota máxima es %.1f\n", nota_max(notas, cantidad));
	printf("La nota minima es %.1f\n", nota_min(notas, cantidad));
	printf("Notas por encima de la media:\n");
	notas_promedio(notas, cantidad, media);
	return EXIT_SUCCESS;
}
