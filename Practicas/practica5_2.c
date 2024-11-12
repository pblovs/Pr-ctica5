#include <stdio.h>
#include <stdlib.h>
#define Nota_aprob 5.0 //Se define que la nota para aprobar es un 5

struct Estudiantes{ //Estructura que sigue Estudiantes
	double nota_final;
	int pos;
};

float nota_min(float array[100], int cant){ //Calcula la nota miníma de los estudiantes

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
		aprobados++; //Recoge las notas que sean igual o mayor que 5, y los cuenta para saber cuantos alumnos han aprobado, y eso devuelve
		}
	}
	return aprobados;
}
int num_suspensos(float array[100], int cant){ //Calcula el número de estudiantes suspensos

	int suspensos = 0;
	for (int i = 0; i < cant; i++){

		if (array[i] < Nota_aprob){
		suspensos++; //Recoge las notas que sean menor que 5 y los cuenta para saber cuantas notas menor que 5 hay, y eso es lo que devuelve.
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

float notas_promedio(float array[100], int cant, float prom){ //Calcula el promedio de las notas

	for (int i = 0; i < cant; i++){
		if(array[i] > prom){
                
			printf("Notas encima de la media %.1f\n", array[i]);
		}
        }
}

int main(){ 
	int cantidad;
	
	printf("Introduce la cantidad de estudiantes para calcular el promedio: "); //Recoge la cantidad de estudiantes dados por el usuario
	scanf("%d", &cantidad);
	struct Estudiantes persona[cantidad];

	for (int i = 0; i < cantidad; i++){ //Recoge las notas finales de los estudiantes, que el usuario da y los guarda en &persona, que sigue la estructura predefinida de Estudiantes.
		printf("Introduce la nota final del estudiante número %d: ", i);
		scanf("%lf", &persona[i].nota_final);
	}
	float notas[100]; //Guarda las notas finales en persona.nota_final
	for (int i =0 ; i < cantidad; i++){
	
	notas[i] = persona[i].nota_final;
	}

	printf("El promedio de las notas de los estudiantes es: %.1f\n", promedio(notas, cantidad));

	float media = promedio(notas, cantidad); //Extrae el promedio de las notas, que tiene guardado, para usarlos en la nota por encima de la media.

	printf("El número de estudiantes aprobados es: %d\n", num_aprobados(notas, cantidad));
	printf("El número de estudiantes suspensos es: %d\n", num_suspensos(notas, cantidad));
	printf("La nota máxima es %.1f\n", nota_max(notas, cantidad));
	printf("La nota minima es %.1f\n", nota_min(notas, cantidad));
	notas_promedio(notas, cantidad, media);
	return EXIT_SUCCESS;
}
