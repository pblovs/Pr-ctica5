#include <stdio.h>
#include <stdlib.h>

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
	printf("Temperatura máxima: %.1fºC\n", max);
}

float temperatura_min(float a[10]){//Calcula la temperatura mínima de la semana
	float min = a[0];
	for (int i = 1; i < 7; i++){
		if(a[i] < min){
			min = a[i];
		}
	}
	printf("Temperatura mínima: %.1fºC\n", min);
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

	float array[10];
        char Dias[10] = "Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado", "Domingo";	
	
		for (int i = 0; i < 7; i++){
		
			printf("Ingresa el promedio de la temperatura de cada dia: ");
			scanf("%f", &array[i]);

	}
	float media = promedio_semana(array);
	printf("La temperatura media de la semana es: %.1fºC\n", media);
	temperatura_max(array);
	temperatura_min(array);
	int dias = contador_dias(array);
	printf("Hay %d dia(s) superiores a la media.\n", dias);
	listado_dias(array);

}
