#include <stdio.h>
#include <stdlib.h>

float promedio_semana(float a[10]){ //Calcula el promedio de la temperatura de la semana
	
	float total = (a[1] + a[2] + a[3] + a[4] + a[5] + a[6] + a[7]) /7; 
	
	return total;
}

float temperatura_max(float a[10]){ //Calcula la temperatura máxima de la semana
	float max = a[1];
	for (int i = 2; i <= 7; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	printf("Temperatura máxima: %f\n", max);
}

float temperatura_min(float a[10]){//Calcula la temperatura mínima de la semana
	float min = a[1];
	for (int i = 2; i <= 7; i++){
		if(a[i] < min){
			min = a[i];
		}
	}
	printf("Temperatura mínima: %f\n", min);
}

int main(){

	float array[10]; 
	
		for (int i = 1; i <= 7; i++){
		
			printf("Ingresa el promedio de la temperatura de cada dia: ");
			scanf("%f", &array[i]);

	}
	promedio_semana(array);
	temperatura_max(array);
	temperatura_min(array);

	int contador;

	        for(int i = 1; i <=7; i++){
			if (array[i] > promedio_semana(array)){

				contador++;
			}
		}
		
		printf("Número de días con temperaturas superiores al promedio: %d\n", contador);
}
