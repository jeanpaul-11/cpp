#include<stdio.h>// importar la libreria de entrada y salida de datos

int main(){ 
	
	int numero,c = 1 , total; // declarar las variables 
	
	printf("\n\n\t\tTabla de multiplicar de un numero\n "); // enunciado
	
	printf("\n\t\tDigite el numero: "); scanf("%d",&numero); //Pedir que digite el numero 
	
	while(c <= 10){ // crear la condicion para que se genere el ciclo
		
		total = c * numero; // hacer la operacion
		
		printf("\t\t\n\n%d x %d = %d",numero,c,total); // imprimir las multiplicaciones
		
		c++; // que el contador incremente de 1 en 1
	} 
	
	return 0;
} // fin de programa
