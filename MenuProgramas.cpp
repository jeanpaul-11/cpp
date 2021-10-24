#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

//void programas secuenciales
void  operacionesArimeticas();
void conversorFaC();
void notas();
void cincoproductos();
void hospital();
//void anidados
void definitiva3Notas();
void votacion();
void parOimpar();
void positivoOnegativo();
void salarioDelEmpeleado();
//void ciclos For
void defintivaEstudiante();
void factorial();
void sumadeNumerosNaturales();
void sumadeNumerosPareseImpares();
void TablasdeMultiplicar();
//void ciclos while
void FacturaNproductos();
void nomina();
void DefinitvasEstudiantes();
void Tablas();
void Factorial();
//void Marco
void marco1();
void gotoxy(int x,int y);

main(){
	system("color 70");
	marco1();
	gotoxy(36,11);printf("BIENVENID@S");
	getch();
	system("cls");
	marco1();
	gotoxy(13,2);  printf("TECNOLOGO EN ANALISIS Y DESARROLLO DE SISTEMAS DE INFORMACION");
    gotoxy(36,6);  printf("APRENDICES");
    gotoxy(32,11); printf("Harol Esneider Melo");
    gotoxy(31,12); printf("Jean Paul Canon Cadena");
    gotoxy(39,14); printf("FICHA");
    gotoxy(38,15); printf("2080800");
    gotoxy(37,19); printf("INSTRUCTOR");
    gotoxy(30,20); printf("Alexander Mendoza Monaga");
    getch();
	system("cls");
	xx:
	system("cls");
	marco1();
	char op, op1,op2,op3,op4;
	
	/*
	op  ==> Opción del menú principal
	op1 ==> Opción de programas secuenciales
	op2 ==> Opción de programas anidados
	op3 ==> Opción de programas ciclos repetitivos for
	op4 ==> Opción de programas ciclos repetitivos while
	*/
	gotoxy (20,6); printf("-----MENU PRINCIPAL DE PROGRAMAS C/C++-----");		
	printf("\n\n\n\n\t\t\t1. Programas secuenciales");
    printf("\n\t\t\t2. Programas anidados");
    printf("\n\t\t\t3. programas de ciclo repititivos for");
    printf("\n\t\t\t4. programas de ciclo repititivos while");
    printf("\n\t\t\t5. Salir del programa");
    printf("\n\n\n\t\t\tSeleciona una opcion: ");
    scanf("%s",&op);
    
    switch(op){ //incio del swtch principal
                  
    	case '1': 
		          
		          aa:
		          system("cls");	
		          marco1();
		          gotoxy (25,6); printf("-----PROGRAMAS SECUENCIALES-----");
    	          printf("\n\n\n\n\t\t\t    a. Operaciones Aritmeticas");
    		      printf("\n\t\t\t    b. Conversor grados F a C");
    			  printf("\n\t\t\t    c. Notas Estudiantes");
    			  printf("\n\t\t\t    d. Factura cinco productos");
    	          printf("\n\t\t\t    e. Presupuesto Hospital");
    	          printf("\n\t\t\t    f. salir al menu principal");
    	          printf("\n\n\n\t\t\t    Selecciona una opcion: ");
    	          scanf("%s",&op1);
    	          
    	          		switch(op1){//incio switch programas secuenciales
    	          		    case 'a': 
						    	system("cls");
								operacionesArimeticas();						
								printf("\t\t\tPulse cualquier tecla para salir...");
								getch();
								goto aa;
							break;
							case 'b':
								system("cls");
								conversorFaC();
								printf("\t\t\tPulse cualquier tecla para Salir...");	
								getch();
								goto aa;
							break;
							case 'c':
								system("cls");	
    	          		        notas();
    	          		        printf("\t\t\tPulse cualquier tecla para Salir...");	
								getch();
								goto aa;
							break;
							case 'd':
								system("cls");
								cincoproductos();
								printf("\t\t\tPulse cualquier tecla para Salir...");	
								getch();
								goto aa;
							break;
							case 'e':
								system("cls");
								hospital();		
    	          				printf("\t\t\tPulse cualquier tecla para Salir...");
    	          				getch();
								goto aa;
							break;
							case 'f':
							      printf("\n\t\t\t   Volviendo al menu principal...");
								  getch();
								  goto xx;
							break;
							default:
								printf("\n\t\t--->Error al digitar la opcion vuelva a intentarlo");
							    getch();
								goto aa;	  	
    	          			break; //break del case A         
    	                }//FIN switch programas secuenciales
    	                  
    	case '2':  
    	        bb:
    	        system("cls");
    	        marco1();
		          gotoxy (28,6); printf("-----PROGRAMAS ANIDADOS-----\n");
    	          printf("\n\n\n\t\t\t     a. Defintiva de 3 Notas");
    		      printf("\n\t\t\t     b. Votacion");
    			  printf("\n\t\t\t     c. si es Par o Impar");
    			  printf("\n\t\t\t     d. Positivo o Negativo");
    	          printf("\n\t\t\t     e. Salario de Empleado");
    	          printf("\n\t\t\t     f. salir al menu principal");
    	          printf("\n\n\t\t\t     Seleccione una opcion: ");
    	          scanf("%s",&op2);
				  			switch(op2){//incio switch 2 programas anidados
				  					case 'a':
				  					 	system("cls");
										definitiva3Notas();
										printf("\n\n\t\t\tPulse cualquier tecla para Salir...");	
										getch();
										goto bb;
				  			        break;
				  			        case 'b':
				  			        	system("cls");
										votacion();
										printf("\t\t\tPulse cualquier tecla para Salir...");	
										getch();
										goto bb;
									break; 
									case 'c':
										system("cls");
										parOimpar();
										printf("\n\n\t\t\tPulse cualquier tecla para Salir...");	
										getch();
										goto bb;
									break;
									case 'd':
										system("cls");
										positivoOnegativo();
										printf("\t\t\tPulse cualquier tecla para Salir...");	
										getch();
										goto bb;
									break;
									case 'e':
									    system("cls");
										salarioDelEmpeleado();
										printf("\n\n\t\t\tPulse cualquier tecla para Salir...");	
										getch();
										goto bb;
									break;
									case 'f':
										printf("\n\t\t\t   Volviendo al menu principal...");	
										getch();
										goto xx;
									break;
									default:
									     printf("\n\t\t--->Error al digitar la opcion vuelva a intentarlo");
										 getch();
										 goto bb;		
									}//fin switch 2 programas anidadas
		case '3':
				cc:
				system("cls");
    	        marco1();
				gotoxy (27,6); printf("-----PROGRAMAS CICLOS FOR-----");
    	        printf("\n\n\n\t\t\t    a. Definitivas de estudiantes");
    		    printf("\n\t\t\t    b. Factorial");
    			printf("\n\t\t\t    c. Suma de numeros Natuarles");
    			printf("\n\t\t\t    d. Suma de impares y pares");
    	        printf("\n\t\t\t    e. Tablas de Multiplicar");
    	        printf("\n\t\t\t    f. Salir al menu principal");
    	        printf("\n\n\t\t\t    Seleccione una opcion: ");
    	        scanf("%s",&op3);
				
						switch(op3){//inicio switch programa ciclos for
						case 'a':
							system("cls");
							defintivaEstudiante();
							printf("\t\t\tPulse cualquier tecla para Salir...");	
							getch();
							goto cc;
						break;
						case 'b':
							system("cls");
							factorial();
							printf("\t\t\tPulse cualquier tecla para Salir...");	
							getch();
							goto cc;
						break;	
						case 'c':
							system("cls");
							sumadeNumerosNaturales();
							printf("\t\t\tPulse cualquier tecla para Salir...");	
							getch();
							goto cc;
						break;
						case 'd':
						     system("cls");
							sumadeNumerosPareseImpares();
							printf("\t\t\tPulse cualquier tecla para Salir...");	
							getch();
							goto cc;
						break;
						case 'e':
						    system("cls");
							TablasdeMultiplicar();
							printf("\t\t\tPulse cualquier tecla para Salir...");	
							getch();
							goto cc;
						break;
						case 'f':
							printf("\n\t\t\t   Volviendo al menu principal...");	
							getch();
							goto xx;
						default:
							
						    printf("\n\t\t--->Error al digitar la opcion vuelva a intentarlo");
							getch();
							goto cc;		
						   	}//fin inicio switch programa ciclos for
		
		case '4':
		        dd:
				system("cls");
    	        marco1();
				gotoxy (27,6); printf("-----PROGRAMAS CICLOS WHILE-----\n");
    	        printf("\n\n\t\t\t      a. Factura N productos");
    		    printf("\n\t\t\t      b. Nominas");
    			printf("\n\t\t\t      c. Definitivas Estudiantes");
    			printf("\n\t\t\t      d. Tablas de Multiplicar");
    	        printf("\n\t\t\t      e. Factorial");
    	        printf("\n\t\t\t      f. Salir al menu principal");
    	        printf("\n\n\t\t\t      Seleccione una opcion: ");
    	        scanf("%s",&op4);
				           switch(op4){
				           	case 'a':
							system("cls");
							FacturaNproductos();
							printf("\n\t\t\tPulse cualquier tecla para Salir...");	
							getch();
							goto dd;
						break;
						case 'b':
							system("cls");
							nomina();
							printf("\t\t\tPulse cualquier tecla para Salir...");	
							getch();
							goto dd;
						break;	
						case 'c':
							system("cls");
							DefinitvasEstudiantes();
							printf("\t\t\tPulse cualquier tecla para Salir...");	
							getch();
							goto dd;
						break;
						case 'd':
						     system("cls");
							Tablas();
							printf("\t\t\tPulse cualquier tecla para Salir...");	
							getch();
							goto dd;
						break;
						case 'e':
						    system("cls");
							Factorial();
							printf("\t\t\tPulse cualquier tecla para Salir...");	
							getch();
							goto dd;
						break;
						case 'f':
							
							printf("\n\t\t\t   Volviendo al menu principal...");	
							getch();
							goto xx;
						default:
						    
							printf("\n\t\t--->Error al digitar la opcion vuelva a intentarlo");
							getch();
							goto dd;		
				           	
						   }//fin del switch programa ciclos while
		case'5':
			printf("\n\n\t\t\t\t    ¡ Hasta luego !\n\n");
		break;	
		
		default:
			printf("\n\t\t--->Error al digitar la opcion vuelva a intentarlo");
		    getch();
			goto xx;
		        				   					   		  
	}//fin del switch principal
}//FIN PROGRAMA
    
//==========================INICIO VOID OPERACIONES BASICAS ARITMETICAS / SECUENCIAL=====================================    

void operacionesArimeticas(){ 
	printf("\n\n\n\t\t\t---OPERACIONES BASICAS ARITMETICAS---\n\n");
	float num1,num2,sum,rest,mult,div;	
	/*
	num1 ==> Primer número digitado
	num2 ==> Segundo número digitado
	sum  ==> Suma de ambos números
	rest ==> Resta de ambos números
	mult ==> Multiplicación de ambos números
	div  ==> División de ambos números
	*/												
	printf("\t\tDigite el primer numero: ");       							
	scanf("%f",&num1);
	printf("\t\tDigite el segundo numero: ");
	scanf("%f",&num2);
	
	sum = num1 + num2;																
	rest = num1 - num2;
	mult = num1 * num2;
	div = num1 / num2;
	
	printf("\n\n\t\t--------------------------------------------------");    
	printf("\n\t\t    La SUMA de los dos numeros es: %.0f", sum);
	printf("\n\t\t    La RESTA de los dos numeros es: %.0f",rest);
	printf("\n\t\t    La MULTIPLICACION de los dos numeros es: %.0f", mult);
	printf("\n\t\t    La DIVISION entre los dos numeros es: %.1f",div);
	printf("\n\t\t--------------------------------------------------\n\n\n");
} //CIERRE VOID 1

//===============================INICIO VOID CONVERSOR DE GRADOS / SECUENCIAL==========================================

void conversorFaC(){ 
	printf("\n\n\n\t\t   ---CONVERSOR DE GRADOS FAHRENHEIT A CELCIUS-----");
	float fare, res;
	
    printf("\n\n\n\tDigite el valor a convertir: ");
    scanf("%f",&fare);
    
    res = ((fare-32)*5/9);
    
    printf("\n\n\t\t   ==========================================\n");
	printf("\t\t\t   %.0f grados F = %.2f grados C",fare,res);
	printf("\n\t\t   ==========================================\n\n");
} //CIERRE VOID 2

//==========================INICIO VOID NOTA DEFINITIVA PARA TRES ESTUDIANTES / SECUENCIAL=================================

void notas(){ 
	printf("\n\n\t\t     ---NOTA DEFINITIVA PARA TRES ESTUDIANTES---");
	float nota11, nota21, nota31, nota41;     // =>Notas Primer Estudiante 
	float nota12, nota22, nota32, nota42;     // =>Notas Segundo Estudiante
	float nota13, nota23, nota33, nota43;     // =>Notas Tercer Estudiante
	float defi1, defi2, defi3;                // =>Definitivas de Estudiantes
	float promedio, suma;                     // =>Promedio del grupo, suma de notas
	
//Primer estudiante	
	printf("\n\n\n\t\t\t     Notas del Primer Estudiante\n\n");
	printf("\tDigite la PRIMERA nota del estudiante 1: ");
	scanf("%f", &nota11);
	printf("\tDigite la SEGUNDA nota del estudiante 1: ");
	scanf("%f", &nota21);
	printf("\tDigite la TERCERA nota del estudiante 1: ");
	scanf("%f", &nota31);
	printf("\tDigite la CUARTA nota del estudiante 1: ");
	scanf("%f", &nota41);
	
//Segundo estudiante	
	printf("\n\n\n\t\t\t     Notas del Segundo Estudiante\n\n");
	printf("\tDigite la PRIMERA nota del estudiante 2: ");
	scanf("%f", &nota12);
	printf("\tDigite la SEGUNDA nota del estudiante 2: ");
	scanf("%f", &nota22);
	printf("\tDigite la TERCERA nota del estudiante 2: ");
	scanf("%f", &nota32);
	printf("\tDigite la CUARTA nota del estudiante 2: ");
	scanf("%f", &nota42);
	
//Tercer estudiante	
	printf("\n\n\n\t\t\t     Notas del Tercer Estudiante\n\n");
	printf("\tDigite la PRIMERA nota del estudiante 3: ");
	scanf("%f", &nota13);
	printf("\tDigite la SEGUNDA nota del estudiante 3: ");
	scanf("%f", &nota23);
	printf("\tDigite la TERCERA nota del estudiante 3: ");
	scanf("%f", &nota33);
	printf("\tDigite la CUARTA nota del estudiante 3: ");
	scanf("%f", &nota43);	

	defi1 = (nota11*0.10) + (nota21*0.20) + (nota31*0.30) + (nota41*0.40);
	defi2 = (nota12*0.10) + (nota22*0.20) + (nota32*0.30) + (nota42*0.40);
	defi3 = (nota13*0.10) + (nota23*0.20) + (nota33*0.30) + (nota43*0.40);
	
	suma = defi1 +defi2 + defi3;
	promedio = suma/3;
	
	printf("\n\t\t===============================================");
	printf("\n\t\t La nota definitiva del estudiante 1 es: %.1f",defi1);
	printf("\n\t\t La nota definitva del estudiante 2 es: %.1f",defi2);
	printf("\n\t\t La nota definitva del estudiantes 3 es: %.1f",defi3);
	printf("\n\t\t\t  El promedio del grupo es: %.1f",promedio);
	printf("\n\t\t===============================================\n\n");
	
} //CIERRE VOID 3

//=============================INICIO VOID FACTURA PARA CINCO PRODUCTOS / SECUENCIAL========================================

void cincoproductos(){ 
	printf("\n\n\t\t\t   FACTURA PARA CINCO PRODUCTOS\n\n\n");
	int a, b, c, d, e;          //=>Productos 
	int total, iva, neto;       //=>Totales
	
//Captura de Datos	
	printf("\tDigite el Precio del PRIMER Producto: $");
	scanf("%d", &a);
	printf("\tDigite el Precio del SEGUNDO Producto: $");
	scanf("%d", &b);
    printf("\tDigite el Precio del TERCER Producto: $");
	scanf("%d", &c);
	printf("\tDigite el Precio del CUARTO Producto: $");
	scanf("%d", &d);
	printf("\tDigite el Precio del QUINTO Producto: $");
	scanf("%d", &e);
	
//Proceso	
	total = a+b+c+d+e;
	iva = total*0.19;
	neto = total+iva;
	
//Salida de Información
	printf("\n\n\t------------------------------------------------------------------\n");
	printf("\t\t\t\t---FACTURA---\n\n"); 
	printf("\t\tPrimer Producto: $%d\n",a);
	printf("\t\tSegundo Producto: $%d\t  Total Productos: $%d\n",b,total);
	printf("\t\tTercer Producto:  $%d\t  Importe IVA: $%d\n",c,iva); 
	printf("\t\tCuarto Producto:  $%d\t  Neto a Pagar: $%d\n",d,neto);
	printf("\t\tQuinto Producto:  $%d\n\n",e);
	printf("\t------------------------------------------------------------------\n\n");
	
} //CIERRE VOID 4

//===============================INICIO VOID PRESUPUESTO HOSPITAL / SECUENCIAL========================================

void hospital(){  
	printf("\n\n\t\t\t-----PRESUPUESTO DE UN HOSPITAL-----\n\n");
	int presu,presuonco,presupedia,presuortope,presuginecol; //declaracion de variables
	/*
	presu        ==>variable acumuladora persupuesto
	presuonco    ==>variable presupuesto para oncologia
	presupedia   ==>variable presupuesto para pediatria
	presuortope  ==>variable presupuesto para ortopedia
	presuginecol ==>variable presupuesto para ginecologia
	*/
	printf("\tPor favor digite el valor del presupuesto del hospital: $");             //entrada de adatos
	scanf("%d",&presu);
	
	presuonco    = presu * 0.35;
	presupedia   = presu * 0.15;
	presuortope  = presu * 0.20;                            //procedimiento
	presuginecol = presu * 0.30;
	
	
	printf("\n\n\t\t     ==========================================");
    printf("\n\t\t\t Presupuesto de Oncologia: %d",presuonco);
    printf("\n\t\t\t Presupuesto de Pediatria: %d",presupedia);               //salida
    printf("\n\t\t\t Presupuesto de Ortometria: %d",presuortope);
    printf("\n\t\t\t Presupuesto de Ginecologia: %d",presuginecol);
    printf("\n\t\t     ==========================================\n\n");
}   //CIERRE VOID 5

//INCIO VOID ANIDADOS
//==========================INICIO VOID DEFINITIVA Y PROMEDIO DE NOTAS / CONDICIONAL=====================================

void definitiva3Notas(){ 
	printf("\n\n\t\t\tDEFINITIVA Y PROMEDIO DE 3 NOTAS");
	float st, nd, rd, sum, prom;
	/*
	st   ==> Primera nota
	nd   ==> Segunta nota
	rd   ==> Tercera nota
	sum  ==> Suma de notas
	prom ==> Promedio de notas
	*/
	
	printf("\n\n\n\tDigite la PRIMERA nota: ");
	scanf("%f",&st);
	printf("\n\tDigite la SEGUNDA nota: ");
	scanf("%f",&nd);
	printf("\n\tDigite la TERCERA nota: ");
	scanf("%f",&rd);
	
	sum = st+nd+rd;
	prom = sum/3;
	
	printf("\n\n\t\t     ========================================");
	printf("\n\n\t\t\t     Nota Definitiva: %.1f",prom);

//Inicio if	
if (prom >= 30.0){
	printf("\n\t\t\t\t   --APROBADO--");
	printf("\n\n\t\t     ========================================");
}//Cierre if

//Inicio else
else {
	printf("\n\t\t\t\t   --REPROBADO--");
	printf("\n\n\t\t     ========================================");	
}//Cierre else
}//CIERRE VOID 6

//===============================INICIO VOID DATOS PARA VOTAR / CONDICIONAL==========================================

void votacion(){
     printf("\n\n\t\t ----DATOS PARA PODER VOTAR----\n");
		
	int edad,sex,estC;																		//inicializacion de variables
	char nomb [15];
	
	printf("\n\tNombre: ");																 //entrada de datos
	scanf("%s",nomb);
	printf("\n\tSexo, escriba 1 si es masculino y 2 si es femenino: ");
	scanf("%d",&sex);
	printf("\n\tEdad: ");
	scanf("%d",&edad);
	printf("\n\tEstado civil, escriba 1 si es soltero, 2 si es casado y 3 otro: ");
	scanf("%d",&estC);
	
	//a: Solo si la persona es mayor de edad, el nombre de la persona, de lo contrario,imprima un mensaje que diga : “no puede votar”
	if(edad>=18){ 
	
		printf("\n\n\t\t %s usted es mayor de edad",nomb);
	}else{
		
		printf("\n\n\t\t %s no puede votar",nomb);
	}
	
	//b: si la persona es de sexo masculino y mayor de edad, el nombre de la persona.
	if(sex==1 && edad>=18){
		printf("\n\n\t\tsu nombre es: %s y su sexo es: %s",nomb,sex);
	}else{	
	}
	
	//c: Solo si la persona es un hombre soltero mayor de edad, el nombre de la persona.
	if(sex==1 && edad>=18 && estC==1){
		printf("\n\n\t\t Nombre %s usted es soltero y mayor de edad\n\n\n",nomb);
	}else{	
	}
	
	/*d: Solo si la persona es hombre o mujer menor de edad o es hombre casado de
	cualquier edad, el nombre de la persona y un mensaje que diga “usted no se
	manda”.*/
	if(sex==1 && edad<18 || sex==2 && edad<18 || sex==1 && estC==2){
		printf("\n\n\t\t  %s usted no se manda solo y no puede votar... \n\n\n\n",nomb);
	}else{
	    printf("\n\t\tUsted no pertenece");	
	}
	
} //CIERRE VOID 7

//===============================INICIO VOID NUMERO PAR O IMPAR / CONDICIONAL==========================================

void parOimpar(){ 
	  printf("\n\n\t\t\tDEFINIR SI UN NUMERO ES PAR O IMPAR"); //incio del programa
	int n1, n2,n3,r1,r2,r3;
	/*
	n1 ==>Primer numero
	n2 ==>Segundo numero
	n3 ==>Tercer numero
	*/
	
	printf("\n\n\n\t\tIngrese el PRIMER numero: ");                //entrada de datos
	scanf("%d",&n1);
	printf("\t\tIngrese el SEGUNDO numero: ");
	scanf("%d",&n2);
	printf("\t\tIngrese el TERCER numero: ");
	scanf("%d",&n3);	
	
	r1 = n1%2;   //Símbolo % Representa MOD //Proceso 
	r2 = n2%2;
	r3 = n3%2;	
	
//Inicio Primer If	
	if (r1 == 0 ){
		printf("\n\n\t\t\t====================================");
		printf("\n\t\t\t\t%d Es un numero PAR",n1);
		printf("\n\t\t\t====================================");
}//Cierre If

//Inicio else
	else{
	    printf("\n\n\t\t\t====================================");
		printf("\n\t\t\t\t%d Es un numero IMPAR",n1);
		printf("\n\t\t\t====================================");
}//Fin else

//Inicio Segundo If	
	if (r2 == 0 ){
		printf("\n\n\t\t\t====================================");
		printf("\n\t\t\t\t%d Es un numero PAR",n2);
		printf("\n\t\t\t====================================");
}//Cierre If

//Inicio else
	else{
	    printf("\n\n\t\t\t====================================");
		printf("\n\t\t\t\t%d Es un numero IMPAR",n2);
		printf("\n\t\t\t====================================");
}//Fin else

//Inicio Terecr If	
	if (r3 == 0 ){
		printf("\n\n\t\t\t====================================");
		printf("\n\t\t\t\t%d Es un numero PAR",n3);
		printf("\n\t\t\t====================================");
}//Cierre If

//Inicio else
	else{
	    printf("\n\n\t\t\t====================================");
		printf("\n\t\t\t\t%d Es un numero IMPAR",n3);
		printf("\n\t\t\t====================================");
}//Fin else
}// CIERRE VOID 8

//============================INICIO VOID NUMERO POSITIVO O NEGATIVO / CONDICIONAL==========================================

void positivoOnegativo(){  
	printf("\n\n\t\t\tDEFINIR SI UN NUMERO ES POSITIVO O NEGATIVO"); //incio del programa
	int n1, n2;
	/*
	n1----->variable acumuladora
	n2----->variable acumuladora
	*/
	
	printf("\n\n\n\t\tIngrese el primer numero: ");                //entrada de datos
	scanf("%d",&n1);
	printf("\t\tIngrese el segundo numero: ");
	scanf("%d",&n2);
	
	if(n1 < 0){                                                  //punto de decision
		printf("\n\n\t\t\t====================================");
		printf("\n\t\t\t\t%d es un numero NEGATIVO",n1);
		printf("\n\t\t\t====================================");           
	}
	else{
		printf("\n\n\t\t\t====================================");
		printf("\n\t\t\t\t%d es un numero POSITIVO", n1);
		printf("\n\t\t\t====================================");
		
	}
	if(n2 < 0){
		printf("\n\n\t\t\t====================================");
		printf("\n\t\t\t\t%d es un numero NEGATIVO", n2);
		printf("\n\t\t\t====================================");
	}
   else{
			printf("\n\n\t\t\t====================================");
		printf("\n\t\t\t\t%d es un numero POSITIVO", n2);
		printf("\n\t\t\t====================================");
}                        //fin del programa
}//CIERRE VOID 9

//==========================INICIO VOID SALARIO NETO / CONDICIONAL=====================================

void salarioDelEmpeleado(){  
printf("\n\n\t\t\tSALARIO NETO DE UN TRABAJADOR");
	int sal, net;
	
	printf("\n\n\n\t\tIngrese tu salario inicial: $");
	scanf("%d",&sal);
	
	net = sal + 102854;
	
	if(sal >= 877803 * 2){
		printf("\n\n\t\t Su  salario es de $%d \n\t\tNo recibira subsidio de transporte",sal);
	}
	else{
		printf("\n\n\t\tRecibe subsidio de transporte: $102854\n\t\t\t\t Salario neto: $%d", net);
	}
	
}//CIERRE VOID 10

//==========================INICIO VOID DEFINITIVA Y PROMEDIO N ESTUDIANTES / FOR=====================================

void defintivaEstudiante(){ 
	printf("\n\n\t\t--DEFINITIVA DE N ESTUDIANTES Y PROMEDIO DEL CURSO--\n");
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
	
	printf("\n\n\tDigite la cantidad de estudiantes a evaluar: ");
	scanf("%d",&N);
	
//Incio ciclo FOR	
	for(d=1;d<=N;d++){ 

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
		
		printf("\n\t\t ==================================================");
		printf("\n\t\t\tDefinitiva del estudiante %d: %.1f",d,def);
		printf("\n\t\t ==================================================\n");
		
		prom = prom+def;                                                           
		notaG = prom/N;
		
	}//Fin ciclo FOR
	
	printf("\n\n\t\t     ========================================");
	printf("\n\t\t\t     Promedio del curso: %.1f",notaG);
	printf("\n\t\t     ========================================\n\n");
} //CIERRE VOID 11

//===============================INICIO VOID FACTORIAL DE UN NUMERO / FOR=====================================

void factorial(){ 
	printf("\n------------------------------------------------------------------------------\n\n");
	printf("\t\t\t--FACTORIAL DE UN NUMERO--\n\n");
	int numero, factorial=1,c;  //Asignación Variables
	
	/*
	c         ==> Ciclo Para
	numero    ==> Número ingresado
	factorial ==> Operación para sacar el factorial del número digitado
	*/
	
    printf("\t  Digite un numero: ");
	scanf("%d",&numero);
	printf("\n");
	
	for(c=1;c<=numero;c++){ //Inicio ciclo FOR
		
		factorial = factorial*c;
		printf("\t\t\t\t    %d\n",factorial);
	}  //Cierre ciclo FOR
	
	printf("\n------------------------------------------------------------------------------\n");
    printf("\t\t\tEl factorial de %d es = %d",numero,factorial);
    printf("\n------------------------------------------------------------------------------\n\n");
//Cierre programa
}//CIERRE VOID 12

//===============================INICIO VOID SUMA 10 NUMEROS NATURALES / FOR=====================================

void sumadeNumerosNaturales(){ 
	printf("\n------------------------------------------------------------------------------\n\n");
	printf("\t\t---SUMA DE LOS PRIMEROS 10 NUMEROS NATURALES---\n\n");
	int sum, a=0, c; //Declarar Variables
	
	/*
	c   ==> Ciclo for
	sum ==> Suma de los números
	a   ==> Acumulador del ciclo 
	*/
	
    //Inicio ciclo PARA
	for(c=1;c<=10;c++){
		printf("\t\t%d\n",c);
		getch();
		a = a+c;}
    //Cierre ciclo PARA
	
//Salida de Información	
	printf("\n------------------------------------------------------------------------------\n");
	printf("\t\t\tLa suma de los numeros es: %d\n",a);
	printf("------------------------------------------------------------------------------\n");
//Fin del programa
}// CIERRE VOID 13

//================================INICIO VOID SUMA PARES E IMPARES / FOR=====================================

void sumadeNumerosPareseImpares(){ 
	printf("\n------------------------------------------------------------------------------\n\n");
	printf("\t\t\tSUMA DE NUMEROS PARES E IMPARES\n\n");
	//Declaracion Variables
	int n1,f, r1, sumP=0, sumI=0;		
	
	/*  
	n1   ==> Número digitado 
	r1   ==> Residuo de el número
	sumP ==> Acumulador de los números PARES
	sumI ==> Acumulador de los números IMPARES
	f    ==> Ciclo repetitivo
	if   ==> Condicion dentro del ciclo (en caso que sea par)
	else ==> En caso de que sea impar
	
    */
	
//Ciclo PARA
   for(f=1;f<=6;f++){
        printf("\n");
		printf("\tDigite el %d numero: ",f);
    	scanf("\n%d",&n1);
        
        r1=n1%2;

//Inicio de if   
   if(r1 == 0){ 
   	printf("\tEl numero %d es PAR\n",n1);
   	sumP = sumP+n1;
   	}  //Cierre del if
   	
 //Inicio del else   	
   else{ 
   	printf("\tEl numero %d es IMPAR\n",n1);
   	sumI = sumI+n1;
    }  //Cierre del else

    
} //Cierre Ciclo PARA
		
    printf("\n------------------------------------------------------------------------------\n");
    printf("\t\tLa suma de los numeros PARES es: %d\n",sumP);
	printf("\t\tLa suma de los numeros IMPARES es: %d",sumI);
	printf("\n------------------------------------------------------------------------------\n\n");
//Fin Programa
}//CIERRE VOID 13

//==========================INICIO VOID TABLAS DE MULTIPLICAR / FOR=====================================

void TablasdeMultiplicar(){ 
printf("\n------------------------------------------------------------------------------\n\n");
	printf("\t\t\t---TABLAS DE MULTIPLICAR---\n\n");
    int c,t,mul; //Declarar Variables
	
	/*
	c   ==> Ciclo for
	t   ==> Número de la tabla
	mul ==> Resultado operación
	*/

    printf("\t\tDigite el numero de la tabla que desea ver: ");
    scanf("%d", &t);
    printf("\n\n");

//Ciclo PARA	
	for(c=1;c<=10;c++){
	mul = t*c;
	printf("\t\t\t\t%d x %d = %d\n",t,c,mul);}
//Fin ciclo PARA
    
	printf("\n------------------------------------------------------------------------------\n\n");
//Fin Programa
}//FIN VOID 15

//==========================INICIO VOID FACTURA N PRODUCTOS / WHILE=====================================

void FacturaNproductos(){ 
      printf("\n------------------------------------------------------------------------------\n\n");
	printf("\t\t\t--FACTURA DE N PRODUCTOS--\n\n");  //titulo del programa 
	int p=1,N,valp,canp,totp,subt=0,iva,totf;  //Declaracion Variables
	char nomp[15];	
	
	/*
	p    ==> Contador while
	N    ==> Número de productos a facturar
	valp ==> Valor del producto
	nomp ==> Nombre del Producto
	canp ==> Cantidad del producto 
	totp ==> Total valor de cada producto 
	iva  ==> IVA
	subt ==> Contador
	totf ==> Total de la factura 
	*/	
	
	printf("\tDigite la cantidad de productos a facturar: ");
	scanf("%d", &N);
	
//Inicio ciclo MIENTRAS
	while (p<=N){
	printf("\n\tDigite el nombre del producto %d: ",p);
	scanf("%s", &nomp);
	printf("\tDigite el valor del(la) %s: $",nomp);
	scanf("%d", &valp);
	printf("\tDigite la cantidad del(la) %s: ",nomp);
	scanf("%d", &canp);
	
	totp = valp*canp;  //proceso
	
	printf("\n------------------------------------------------------------------------------\n");
	printf("\t\tValor total del(los) producto(s) %s: $ %d",nomp,totp);
	printf("\n------------------------------------------------------------------------------\n");
	
	subt = subt+totp;
	p++;
	} //Cierre ciclo MIENTRAS
	
	iva = subt*0.19;
	totf = subt+iva;
	
//Salida de información
	printf("\n==============================================================================\n");
	printf("\t\tSUBTOTAL FACTURA: $%d",subt);
	printf("\t   IVA: $%d",iva);
	printf("\n\t\t\tTOTAL FACTURA   : $%d",totf);
	printf("\n==============================================================================\n");
}//CIERRE VOID 16

//==========================INICIO VOID SALARIO N EMPLEADOS Y NOMINA / WHILE=====================================

void nomina(){ 
          printf("\n\n\t\t---SALARIO DE N EMPLEADOS Y DESPRENDIBLE DE NOMINA---\n\n");
	int em, salai1, a=1, sum=0,pen; 
	int salud,fondo, tdev,td1; 
	int salariot1,refuente, ica;

	/*
	em        ==> Cantidad de empleados
	salai1    ==> Salario inicial
	a=1       ==> Incio del ciclo
	sum=0     ==> Acumuladora
	pen       ==> Porcentaje de pension
	salud     ==> Porcentaje de salud
	fondo     ==> Porcentaje de fondo de empleados
	tdev      ==> Total de devengados (Los que se suman)
	td1       ==> Total de Deducidos (Los que se descuentan)
	salariot1 ==> salario neto de cada empleado 
	refuente  ==> descuento deduccion
	ica       ==> descuento deduccion
	a++       ==> de en cuanto en cuanto va el ciclo
	a         ==> nombre variable dentro del ciclo
	*/
	
	printf("\tDigite la cantidad de empleados: ");
	scanf("%d",&em);
	
	//Inicio Ciclo mientras	
	while(a<=em){
		a++;
	    printf("\n\n\tDigite el Salario del Empleado %d: $",a-1);
	    scanf("%d", &salai1);
	
	//Inicio Condición if1
	 if(salai1 <= 2*877803){
	 	
	 	pen = salai1*0.045;
	    salud = salai1*0.04;
    	fondo =salai1*0.02;
	    tdev = salai1+102854;
    	td1 = pen+salud+fondo;
    	salariot1 = salai1-td1+102854;

	printf("\n===============================================================================\n");
    printf("\t\t\t---DESPRENDIBLE DE PAGO NOMINA---\n\n");
    printf("\t\tNomina:\t\t\t\tNOMINA GENERAL\n\t\tEmpleado:\t\t\tEMPLEADO %d\n\t\t",a-1);
    printf("Salario:\t\t\t$%d\n\n\n",salai1);
    printf("\t\t\t\t\t|Devengados|\t|Deducidos |\n");
    printf("\tConceptos Liquidados\t\t   Pagos\t Descuentos\n\n");
    printf("\tSALARIO BASICO\t\t\t  $%d\n",salai1);
    printf("\tAPORTE PENSION\t\t\t\t\t   $%d\n",pen);
    printf("\tAPORTE SALUD\t\t\t\t\t   $%d\n", salud);
    printf("\tFONDO DE EMPLEADOS\t\t\t\t   $%d\n",fondo);
    printf("\tSUBSIDIO DE TRANSPORTE\t\t  $102854\n\n");
    printf("-------------------------------------------------------------------------------\n");
    printf("\t\tTotales\t\t\t| $%d    |    $%d  |\n",tdev,td1);
    printf("-------------------------------------------------------------------------------\n");
    printf("\t\tSalario Neto:\t\t\t  $%d\n",salariot1);
	printf("===============================================================================\n\n");
	
	sum = sum+salariot1;
	printf("\t\t\tPresione <enter> para continuar...\n\n");
	getch();
	system("cls");
	 }//Cierre Condición if1
	 
	 
	 else{ //Inicio condición else1           
	 	
		 //Inicio condicion if2
		 if(salai1 > 2 * 877803 && salai1 <= 3* 877803){
	 	
		pen = salai1*0.045;
	    salud = salai1*0.04;
    	fondo =salai1*0.02;
    	td1 = pen+salud+fondo;
    	salariot1 = salai1-td1;
	 	
	 	printf("\n===============================================================================\n");
    printf("\t\t\t---DESPRENDIBLE DE PAGO NOMINA---\n\n");
    printf("\t\tNomina:\t\t\t\tNOMINA GENERAL\n\t\tEmpleado:\t\t\tEMPLEADO %d\n\t\t",a-1);
    printf("Salario:\t\t\t$%d\n\n\n",salai1);
    printf("\t\t\t\t\t|Devengados|\t|Deducidos |\n");
    printf("\tConceptos Liquidados\t\t   Pagos\t Descuentos\n\n");
    printf("\tSALARIO BASICO\t\t\t  $%d\n",salai1);
    printf("\tAPORTE PENSION\t\t\t\t\t   $%d\n",pen);
    printf("\tAPORTE SALUD\t\t\t\t\t   $%d\n", salud);
    printf("\tFONDO DE EMPLEADOS\t\t\t\t   $%d\n\n",fondo);
    printf("-------------------------------------------------------------------------------\n");
    printf("\t\tTotales\t\t\t| $%d    |    $%d  |\n",salai1,td1);
    printf("-------------------------------------------------------------------------------\n");
    printf("\t\tSalario Neto:\t\t\t  $%d\n",salariot1);
	printf("===============================================================================\n\n");
	
	sum = sum+salariot1;
	printf("\t\t\tPresione <enter> para continuar...\n\n");
	getch();
	system("cls");
		
	} //Cierre if2
			else{   //comienzo de else2
					
				refuente= salai1 * 0.07;
	 			ica= salai1 * 0.015;
	 			td1 = refuente+ica;
    	        salariot1 = salai1-td1;
	 	
	 	printf("\n===============================================================================\n");
    printf("\t\t\t---DESPRENDIBLE DE PAGO NOMINA---\n\n");
    printf("\t\tNomina:\t\t\t\tNOMINA GENERAL\n\t\tEmpleado:\t\t\tEMPLEADO %d\n\t\t",a-1);
    printf("Salario:\t\t\t$%d\n\n\n",salai1);
    printf("\t\t\t\t\t|Devengados|\t|Deducidos |\n");
    printf("\tConceptos Liquidados\t\t   Pagos\t Descuentos\n\n");
    printf("\tSALARIO BASICO\t\t\t  $%d\n",salai1);
    printf("\tIMPUESTO RETEFUENTE\t\t\t\t  $%d\n",refuente);
    printf("\tIMPUESTO ICA\t\t\t\t\t  $%d\n\n",ica);
    printf("-------------------------------------------------------------------------------\n");
    printf("\t\tTotales\t\t\t| $%d   |   $%d  |\n",salai1,td1);
    printf("-------------------------------------------------------------------------------\n");
    printf("\t\tSalario Neto:\t\t\t $%d\n",salariot1);
	printf("===============================================================================\n\n");
	
	sum = sum+salariot1;
	printf("\t\t\tPresione <enter> para continuar...\n\n");
	getch();
	system("cls");
	 			
			} //fin del else2
		 
		         
		 }//fin del else1
	            
	              
} //fin del ciclo para
            
	printf("\n\n\t\t======================================================\n\n");
	printf("\t\t\tTotal de las Nominas a Pagar: $%d\n\n",sum);
    printf("\t\t======================================================\n\n");	
}//CIERRE VOID 17

//==========================INICIO VOID DEFINITIVA N ESTUDIANTES Y PROMEDIO / WHILE=====================================

void DefinitvasEstudiantes(){ 
     printf("\n------------------------------------------------------------------------------\n\n");
	printf("\t\t--DEFINITIVA DE N ESTUDIANTES Y PROMEDIO DEL CURSO--\n");
	//Declaración de variables
	int N,d=1,c=1;
	float n1,n2, n3,n4,sum1, sum2, sum3;
	float sum4, def, prom, notaG;
	
	/*
	n1,n2,n3,n4         ==> Variables para las 4 notas
	N                   ==> Numero de estudiantes
	d                   ==> Declaracion ciclo mientras
	def                 ==> Definitiva del estudiante
	prom                ==> Promediando la nota del curso
	notaG               ==> Promedio del curso
	sum1,sum2,sum3,sum4 ==> Promediando de cada nota
	*/
	
	printf("\n\tDigite la cantidad de estudiantes a evaluar: ");
	scanf("%d",&N);
	
	while(d<=N){ //Incio ciclo WHILE

		printf("\n\n\tDigite la PRIMERA nota del estudiante %d: ",d);              
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
		d++;            
		
	}//Fin ciclo WHILE
	
	printf("\n\t\t\t=====================================");
	printf("\n\t\t\t\tPromedio del curso: %.1f",notaG);
	printf("\n\t\t\t=====================================\n\n");
}//CIERRE VOID 18

//===============================INICIO VOID TABLAS DE MULTIPLICAR / WHILE==================================================

void Tablas(){    
    printf("\n------------------------------------------------------------------------------\n\n");
	printf("\t\t\t---TABLAS DE MULTIPLICAR---\n\n");
	int n,c=1,mul; //Declarar Variables
	/*
	c   ==> contador de while
	n   ==> Número de la tabla
	mul ==> Resultado operación
	*/
	printf("\t\tDigite el numero de la tabla que desea ver: ");
	scanf("%d",&n);
	printf("\n\n");
	
	//Ciclo MIENTRAS
	while(c<=10){
		mul = n*c;
		printf("\t\t\t\t%d x %d = %d\n",n,c,mul);
		c++;}
	//Cierre MIENTRAS
printf("\n------------------------------------------------------------------------------\n\n");	
}//CIERRE VOID 19

//=====================================INICIO VOID FACTORIAL DE UN NUMERO / WHILE=======================================

void Factorial(){ 
	printf("\n------------------------------------------------------------------------------\n\n");
	printf("\t\t\t--FACTORIAL DE UN NUMERO--\n\n");
	int numero, factorial=1,c=1;  //Asignación Variables
	/*
	c         ==> Condición para que inicie el ciclo
	numero    ==> Número ingresado
	factorial ==> Operación para sacar el factorial del número digitado
	*/
	
    printf("\t  Digite un numero: ");
	scanf("%d",&numero);
	printf("\n");
	
	while(c<=numero){ //Inicio ciclo WHILE
		
		factorial = factorial*c;
		printf("\t\t\t\t    %d\n",factorial);
		c++;  //Incrementa el contador en 1 
	}  //Cierre ciclo WHILE
	printf("\n------------------------------------------------------------------------------\n");
    printf("\t\t\tEl factorial de %d es = %d",numero,factorial);
    printf("\n------------------------------------------------------------------------------\n\n");
}//=========================================================================================================================

//==========MARCO===================
void marco1(){                    //
	int x,y;                      //
	for (x=1;x<=81;x++){          //
	gotoxy(x,0); printf("*");     //
	gotoxy(x,24);printf("*");     //
}//Cierre for en X                //
    for (y=1; y<=24;y++){         //
    	gotoxy(1,y);printf("*");  //
    	gotoxy(81,y);printf("*"); //
}//Cierre dor en Y                //
}//======CIERRE MARCO===============

void gotoxy(int x,int y){
	HANDLE hcon;
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
}
