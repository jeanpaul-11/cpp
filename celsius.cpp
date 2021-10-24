#include <stdio.h>


int main() {
	
	printf("\t\tConversor de grados farhrenheit a celsius\n");
	float farhrenheit, celsius, resultado;
	
    printf("\nInserte el valor a convertir: ");
    scanf("%f",& farhrenheit);
    
    celsius = farhrenheit - 32;
    resultado = celsius / 1.8;
    
    printf("\nLa tempereratura en grados Celsius es de: %.1f",resultado);
	
	return 0;
	
}
