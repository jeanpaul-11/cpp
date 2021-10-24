#include <stdio.h>
#include <conio.h>

main(){
	printf("realizar una conevrison de METROS a centimetro, milimetros, decametros, Km, millas yardas, pies, pulgadas y millas nauticas\n");
	int cm, mm, dac, km, millas, yardas, pies, pul, mn, num_1;
	
	printf("\ninserte el valor de M a convertir: ");
	scanf("%d",&num_1);
	
	cm = num_1 * 100;
	mm = num_1 * 1000;
	dac = num_1 / 10;
	km = num_1 / 1000;
	millas = num_1 / 1609;
	yardas = num_1 * 1093;
	pies = num_1 * 1 /0.3048;
	pul = num_1 * 39.37;
	mn = num_1 / 1.852;
	
	printf("\nA centimetros es: %d\n",cm);
	printf("A milimetros es: %d\n",mm);
	printf("A decametros es: %d\n",dac);
	printf("A kilometros es: %.1d\n",km);
	printf("A millas nauticas es: %d\n",millas);
	printf("A yardas es: %d\n",yardas);
	printf("A pies es: %d\n",pies);
	printf("A pulgadas es: %d\n",pul);
	printf("A millas nauticas es: %.1d\n",mn);
	
	

}
