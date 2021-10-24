#include <stdio.h>
#include <conio.h>

main(){//Inicio Programa

	printf("\n------------------------------------------------------------------------------\n\n");
	printf("\t\t--DEFINITIVA DE N ESTUDIANTES Y PROMEDIO DEL CURSO--\n");
	//Declaración Variables
	int N,d,c=1;
	float n1,n2, n3,n4,sum1, sum2, sum3;
	float sum4, def, prom, notaG;
	
	/*
	n1,n2,n3,n4         ==> Variables para las 4 notas
	N                   ==> Numero de estudiantes
	d                   ==> Ciclo for
	def                 ==> Definitiva del estudiante
	prom                ==> Promediando la nota del curso
	notaG               ==> Promedio del curso
	sum1,sum2,sum3,sum4 ==> Promediando de cada nota
	*/
	
	printf("\n\tDigite la cantidad de estudiantes a evaluar: ");
	scanf("%d",&N);
	
	for(d=1;d<=N;d++){ //Incio ciclo FOR

		printf("\n\tDigite la PRIMERA nota del estudiante %d: ",d);              
		scanf("%f",&n1);
		printf("\tDigite la SEGUNDA nota del estudiante %d: ",d);
		scanf("%f",&n2);
		printf("\tDigite la TERCERA nota del estudiante %d: ",d);
		scanf("%f",&n3);
		printf("\tDigite la CUARTA nota del estudiante %d: ",d);
		scanf("%f",&n4);
		
		sum1 = n1*0.10;
		sum2 = n2*0.20;                                          
		sum3 = n3*0.30;
		sum4 = n4*0.40;
		
		def = sum1+sum2+sum3+sum4;
		
		printf("\n------------------------------------------------------------------------------");
		printf("\n\t\t\tDefinitiva del estudiante %d: %.1f",d,def);
		printf("\n------------------------------------------------------------------------------\n");
		
		prom = prom+def;                                                           
		notaG = prom/N;
		
	}//Fin ciclo FOR
	
	printf("\n==============================================================================");
	printf("\t\t\t              Promedio del curso: %.1f",notaG);
	printf("\n==============================================================================\n\n");
	
}//Fin Programa
