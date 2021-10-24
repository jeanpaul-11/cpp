#include <stdio.h>
#include <conio.h>

main(){
	
	printf("\n\n\n\t\t---Operaciones basicas aritmeticas para dos numeros---\n\n");
	int num1,num2,sum,rest,mult,div,mod;													//declaracion de las variables
	
	printf("\t\tdigite el primer numero: ");       											//captura de datos
	scanf("%d",&num1);
	printf("\n\t\tdigite el segundo numero: ");
	scanf("%d",&num2);
	
	sum = num1 + num2;																		//proceso
	rest = num1 - num2;
	mult = num1 * num2;
	div = num1 / num2;
	mod = num1 % num2;
	
	
	printf("\n\n\n\tLa suma de los dos numeros es: %d",sum);								//salida de informacion
	printf("\n\n\n\tLa resta de los dos numeros es: %d",rest);
	printf("\n\n\n\tLa multiplicacion de los dos numeros es: %d",mult);
	printf("\n\n\n\tLa division de los dos numeros es: %d",div);
	printf("\n\n\n\tEl residuo de %d/%d es: %d\n\n",num1,num2,mod);
	
}
