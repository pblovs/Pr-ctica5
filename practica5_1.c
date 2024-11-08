#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dias{
	float temperatura;
	char nombre[10];
};

float promedio_semana(float a[10]){ //Calcula el promedio de la temperatura de la semana
	float suma = 0;
	for (int i = 0; i<7; i++){
		suma = suma + a[i];
	}
	float promedio = suma / 7;
	return promedio;
}

float temperatura_max(float a[10]){ //Calcula la temperatura máxima de la semana
	float max = a[0];
	for (int i = 1; i < 7; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	return max;
}

float temperatura_min(float a[10]){//Calcula la temperatura mínima de la semana
	float min = a[0];
	for (int i = 1; i < 7; i++){
		if(a[i] < min){
			min = a[i];
		}
	}
	return min;
}

int contador_dias(float a[10]){
	int contador = 0;
	for (int i = 0; i < 7; i++){
		if (a[i] > promedio_semana(a)){
			contador ++;
		}
	}
	return contador;
}

float listado_dias(float a[10]){
	printf("Dias con temperaturas por debajo del promedio:\n");
	for (int i = 0; i < 7; i++){
		if (a[i] < promedio_semana(a)){
			printf("%.1fºC\n", a[i]);
		}
	}
}

int main(){

	struct dias semana[7];

	strcpy(semana[0].nombre, "Lunes");
	strcpy(semana[1].nombre, "Martes");
	strcpy(semana[2].nombre, "Miércoles");
	strcpy(semana[3].nombre, "Jueves");
	strcpy(semana[4].nombre, "Viernes");
	strcpy(semana[5].nombre, "Sábado");
	strcpy(semana[6].nombre, "Domingo");

	for (int i=0; i<7; i++){
		printf("Temperatura media del %s: ", semana[i].nombre);
		scanf(" %1f", &semana[i].temperatura);
	}

	float temperaturas[10];
	for (int i=0; i<7; i++){
		temperaturas[i] = semana[i].temperatura;
	}


	float media = promedio_semana(temperaturas);
	printf("La temperatura media de la semana es: %.1fºC\n", media);
	printf("Temperatura máxima: %.1fºC\n", temperatura_max(temperaturas));
	printf("Temperatura mínima: %.1fºC\n", temperatura_min(temperaturas));
	int dias = contador_dias(temperaturas);
	printf("Hay %d dia(s) superiores a la media.\n", dias);
	listado_dias(temperaturas);

	return 0;

}