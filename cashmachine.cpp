#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

//prototipo de funciones
void recibo1();
void portada();
void proceso();
void menu();
void marco1();
void marco3();
void gotoxy(int x,int y);
void inicio();

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(){
	
	int opcion1,opcion2,opcion3, opcion4,opcion5,codigo=2080800, codigoV,codigoV1,codigoV2,codigoV3;
	int diaNacimiento, mesNacimiento, anoNacimiento, valid;
	int n_cedula, n_contrasena, n1_contrasena,n2_contrasena,n3_contrasena, nV_contrasena ;
	int monto = 0, deposito = 0, retiro = 0, a_retiro = 0, importe = 0;
	int i_contrasena=1;
	char nombre[10], apellido[10],n_nombre_transferencia[15], n_tipo_transferencia[10];
	char r_transaccion,n_banco_transferencia[15];
	char ciudad[10], d_ochodigitos1,d_ochodigitos2,d_ochodigitos3,d_ochodigitos4,d_ochodigitos5,d_mismo_banco;
	int n_referencia,n_cuenta_transferencia,n_numero_transferencia, v_pagar_gas= 0, v_pagar_telefono= 0, v_pagar_agua= 0;
	int v_pagar_luz= 0,v_pagar_internet= 0;
	int v_transferir;
	int retiro20000= 0,retiro50000= 0,retiro100000= 0,retiro200000= 0,retiro300000= 0,retiro400000= 0,retiro600000= 0,retiroOtro = 0;
	int n;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	marco1();
	portada();	
	d:
	inicio();		
	printf("\n\n\n\n\n\t\t\t\t\t\t    Selecciona una opcion: ");
	scanf("%i", &opcion1);
	system("cls");
	//INICIO SWITCH 1
	switch(opcion1){
		case 1:
			xx:
			proceso();
			marco3();
			Sleep(1000);
	        gotoxy(51,18);printf("Ingrese la clave: "); 
			scanf("%i", &codigoV);
			if(codigo == codigoV){
				system ("cls");
				marco3();marco1();
    			Sleep(3000);gotoxy(58,18);printf("BIENVENID@");
				jj:
    			pp:
    			mm:	
    			ii:
    			Sleep(1000);system("cls");
				menu();
				gotoxy(42,26);printf("Seleccione su transaccion: ");
				scanf("%i", &opcion2);
				switch(opcion2){
					case 1:
						system("cls");
						marco3();marco1();
	                    gotoxy(44,18);printf("Ingrese la cantidad a depositar: ");
						scanf("%i",&deposito);
						monto += deposito;
						deposito = deposito;
						Sleep(1000);gotoxy(58,21);printf("o");
        	            Sleep(1000);gotoxy(61,21);printf("o");
	                    Sleep(1000);gotoxy(64,21);printf("o");
	                    Sleep(1000);gotoxy(67,21);printf("o");
	                    system("cls");
						marco1();marco3();
	                    gotoxy(49,18);printf("SU NUEVO SALDO ES DE: %i", monto);
						fflush(stdin);
						gotoxy(46,30);printf("Realizar otra transaccion: (S)(N)");
						scanf("%c", &r_transaccion);
						switch(r_transaccion){		
							case's':
							case'S':
								goto ii;
							break;			
							case'n':
							case'N':
								system("cls");
								recibo1();
								gotoxy(43,4); printf("-------------------RECIBO-------------------");
	                            gotoxy(43,7); printf("           SOFTWARE OMICRON CORP            "); 
                            	gotoxy(43,11);printf("    FECHA      HORA     CAJERO    NRO.TRAN.");
                             	gotoxy(43,12);printf(" 20/06/2030    01:36   20080800    080802");
	                            gotoxy(43,15);printf(" DIRECCION: TRV. 60 N.32-43");
                               	gotoxy(43,18);printf(" NRO. DE TARJETA: ********2312");
                               	gotoxy(43,21);printf(" EXTRACCION DE CTA.AHORROS");
                              	gotoxy(43,24);printf(" DE CUENTA NRO: 000012398700123");
	                            gotoxy(43,27);printf(" IMPORTE              $        0");
	                            gotoxy(43,28);printf(" SU SALDO             $        %i",monto);
	                            gotoxy(43,29);printf(" DEPOSITO             $        %i",deposito);
                               	gotoxy(43,30);printf(" RETIRO               $        %i",retiro);
	                            gotoxy(43,33);printf("----------------#QuedateEnCasa--------------\n\n\n\n\n\n");
	                            getch();
								system("cls");
				            	marco3();
				                gotoxy(48,18);printf("GRACIAS POR USAR ESTE CAJERO");
	                            exit(0);
							break;
							default:
								gotoxy(46,33);printf("OPCION INCORRECTA");
								goto jj;
							break;	
						}//CIERRE SWITCH TRANSACCION 	
					break;
					case 2:	
						fflush(stdin);
						if(monto == 0){
							system("cls");
							marco3();
							gotoxy(47,18);printf("NO puede retirar, NO tiene saldo\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t");
							system("PAUSE");
							goto ii;
						}else{
							fflush(stdin);
							if(a_retiro < 3 ){	
								
								system("cls");
						        marco1();
								gotoxy(48,11);  printf(" _________________________________\n");
	              			    gotoxy(48,12);  printf("|                                 |\n");
	              		 	    gotoxy(48,13);  printf("|        Valores a Retirar        |\n");
				    			gotoxy(48,14);	printf("|_________________________________|\n");
			    				gotoxy(48,15);  printf("|                                 |\n");
			    				gotoxy(48,16);	printf("| 1. 20.000                       |\n");
			    				gotoxy(48,17);	printf("| 2. 50.000                       |\n");
			    				gotoxy(48,18);	printf("| 3. 100.000                      |\n");
			    				gotoxy(48,19);	printf("| 4. 200.000                      |\n");
			    				gotoxy(48,20);	printf("| 5. 300.000                      |\n");
		    					gotoxy(48,21);	printf("| 6. 400.000                      |\n");
		    					gotoxy(48,22);	printf("| 7. 600.000                      |\n");
		    					gotoxy(48,23);	printf("| 8. Solicitar valor diferente    |\n");
		    					gotoxy(48,24);	printf("|_________________________________|\n\n");
		    					gotoxy(48,25);	printf("Seleccione una opcion: ");
		    					fflush(stdin);
								scanf("%i", &opcion5);
								
								switch(opcion5){
									case 1:
										printf("\n");
										system("cls");
										retiro20000 = monto - 20000;
										monto -= 20000;
										a_retiro += 1;
										marco3();
										Sleep(1000);gotoxy(58,21);printf("o");
        	       					    Sleep(1000);gotoxy(61,21);printf("o");
	               					    Sleep(1000);gotoxy(64,21);printf("o");
	               					    Sleep(1000);gotoxy(67,21);printf("o");
	               					    system("cls");
										marco3();marco1();
	               					    gotoxy(49,18);printf("SU NUEVO SALDO ES DE: %i", monto);
										fflush(stdin);
										gotoxy(46,30);printf("Realizar otra transaccion: (S)(N)");
										scanf("%c", &r_transaccion);
										switch(r_transaccion){		
											case's':
											case'S':
												goto ii;
											break;			
											case'n':
											case'N':
												system("cls");
												recibo1();
												gotoxy(43,4); printf("-------------------RECIBO-------------------");
	                            				gotoxy(43,7); printf("           SOFTWARE OMICRON CORP            "); 
                            					gotoxy(43,11);printf("    FECHA      HORA     CAJERO    NRO.TRAN.");
                             					gotoxy(43,12);printf(" 20/06/2030    01:36   20080800    080802");
	                            				gotoxy(43,15);printf(" DIRECCION: TRV. 60 N.32-43");
                               					gotoxy(43,18);printf(" NRO. DE TARJETA: ********2312");
                               					gotoxy(43,21);printf(" EXTRACCION DE CTA.AHORROS");
                              					gotoxy(43,24);printf(" DE CUENTA NRO: 000012398700123");
	                            				gotoxy(43,27);printf(" IMPORTE              $        0");
	                            				gotoxy(43,28);printf(" SU SALDO             $        %i",monto);
	                            				gotoxy(43,29);printf(" DEPOSITO             $        %i",deposito);
                               					gotoxy(43,30);printf(" RETIRO               $        %i",retiro20000);
	                            				gotoxy(43,33);printf("----------------#QuedateEnCasa--------------\n\n\n\n\n\n");
	                            				getch();
												system("cls");
				                            	marco1();marco3();
				                            	gotoxy(48,18);printf("GRACIAS POR USAR ESTE CAJERO");
	                            				exit(0);
											break;
											default:
												gotoxy(46,33);printf("OPCION INCORRECTA");
												goto ii;
											break;	
										}
									break;
									case 2:
										system("cls");
										printf("\n");
										retiro50000 = monto - 50000;
										monto -= 50000;
										a_retiro += 1;
										marco3();marco1();
										Sleep(1000);gotoxy(58,21);printf("o");
        	       					    Sleep(1000);gotoxy(61,21);printf("o");
	               					    Sleep(1000);gotoxy(64,21);printf("o");
	               					    Sleep(1000);gotoxy(67,21);printf("o");
	               					    system("cls");
										marco3();
	               					    gotoxy(49,18);printf("SU NUEVO SALDO ES DE: %i", monto);
										fflush(stdin);
										gotoxy(46,30);printf("Realizar otra transaccion: (S)(N)");
										scanf("%c", &r_transaccion);
										switch(r_transaccion){		
											case's':
											case'S':
												goto ii;
											break;			
											case'n':
											case'N':
												system("cls");
												recibo1();
												gotoxy(43,4); printf("-------------------RECIBO-------------------");
	                            				gotoxy(43,7); printf("           SOFTWARE OMICRON CORP            "); 
                            					gotoxy(43,11);printf("    FECHA      HORA     CAJERO    NRO.TRAN.");
                             					gotoxy(43,12);printf(" 20/06/2030    01:36   20080800    080802");
	                            				gotoxy(43,15);printf(" DIRECCION: TRV. 60 N.32-43");
                               					gotoxy(43,18);printf(" NRO. DE TARJETA: ********2312");
                               					gotoxy(43,21);printf(" EXTRACCION DE CTA.AHORROS");
                              					gotoxy(43,24);printf(" DE CUENTA NRO: 000012398700123");
	                            				gotoxy(43,27);printf(" IMPORTE              $        0");
	                            				gotoxy(43,28);printf(" SU SALDO             $        %i",monto);
	                            				gotoxy(43,29);printf(" DEPOSITO             $        %i",deposito);
                               					gotoxy(43,30);printf(" RETIRO               $        %i",retiro50000);
	                            				gotoxy(43,33);printf("----------------#QuedateEnCasa--------------\n\n\n\n\n\n");
	                            				getch();
												system("cls");
				                            	marco1();marco3();
				                            	gotoxy(48,18);printf("GRACIAS POR USAR ESTE CAJERO");
	                            				exit(0);
											break;
											default:
												gotoxy(46,33);printf("OPCION INCORRECTA");
												goto jj;
											break;	
										}
									break;
									case 3:
										system("cls");
										printf("\n");
										retiro100000 = monto - 100000;
										monto -= 100000;
										a_retiro += 1;
										marco3();marco1();
										Sleep(1000);gotoxy(58,21);printf("o");
        	       					    Sleep(1000);gotoxy(61,21);printf("o");
	               					    Sleep(1000);gotoxy(64,21);printf("o");
	               					    Sleep(1000);gotoxy(67,21);printf("o");
	               					    system("cls");
										marco3();
	               					    gotoxy(49,18);printf("SU NUEVO SALDO ES DE: %i", monto);
										fflush(stdin);
										gotoxy(46,30);printf("Realizar otra transaccion: (S)(N)");
										scanf("%c", &r_transaccion);
										switch(r_transaccion){		
											case's':
											case'S':
												goto ii;
											break;			
											case'n':
											case'N':
												system("cls");
												recibo1();
												gotoxy(43,4); printf("-------------------RECIBO-------------------");
	                            				gotoxy(43,7); printf("           SOFTWARE OMICRON CORP            "); 
                            					gotoxy(43,11);printf("    FECHA      HORA     CAJERO    NRO.TRAN.");
                             					gotoxy(43,12);printf(" 20/06/2030    01:36   20080800    080802");
	                            				gotoxy(43,15);printf(" DIRECCION: TRV. 60 N.32-43");
                               					gotoxy(43,18);printf(" NRO. DE TARJETA: ********2312");
                               					gotoxy(43,21);printf(" EXTRACCION DE CTA.AHORROS");
                              					gotoxy(43,24);printf(" DE CUENTA NRO: 000012398700123");
	                            				gotoxy(43,27);printf(" IMPORTE              $        0");
	                            				gotoxy(43,28);printf(" SU SALDO             $        %i",monto);
	                            				gotoxy(43,29);printf(" DEPOSITO             $        %i",deposito);
                               					gotoxy(43,30);printf(" RETIRO               $        %i",retiro100000);
	                            				gotoxy(43,33);printf("----------------#QuedateEnCasa--------------\n\n\n\n\n\n");
	                            				getch();
												system("cls");
				                            	marco1();marco3();
				                            	gotoxy(48,18);printf("GRACIAS POR USAR ESTE CAJERO");
	                            				exit(0);
											break;
											default:
												gotoxy(46,33);printf("OPCION INCORRECTA");
												goto d;
											break;	
										}
									break;
									case 4:
										printf("\n");
										system("cls");
										retiro200000 = monto - 200000;
										monto -= 200000;
										a_retiro += 1;
										marco3();marco1();
										Sleep(1000);gotoxy(58,21);printf("o");
        	       					    Sleep(1000);gotoxy(61,21);printf("o");
	               					    Sleep(1000);gotoxy(64,21);printf("o");
	               					    Sleep(1000);gotoxy(67,21);printf("o");
	               					    system("cls");
										marco3();
	               					    gotoxy(49,18);printf("SU NUEVO SALDO ES DE: %i", monto);
										fflush(stdin);
										gotoxy(46,30);printf("Realizar otra transaccion: (S)(N)");
										scanf("%c", &r_transaccion);
										switch(r_transaccion){		
											case's':
											case'S':
												goto ii;
											break;			
											case'n':
											case'N':
												system("cls");
												recibo1();
												gotoxy(43,4); printf("-------------------RECIBO-------------------");
	                            				gotoxy(43,7); printf("           SOFTWARE OMICRON CORP            "); 
                            					gotoxy(43,11);printf("    FECHA      HORA     CAJERO    NRO.TRAN.");
                             					gotoxy(43,12);printf(" 20/06/2030    01:36   20080800    080802");
	                            				gotoxy(43,15);printf(" DIRECCION: TRV. 60 N.32-43");
                               					gotoxy(43,18);printf(" NRO. DE TARJETA: ********2312");
                               					gotoxy(43,21);printf(" EXTRACCION DE CTA.AHORROS");
                              					gotoxy(43,24);printf(" DE CUENTA NRO: 000012398700123");
	                            				gotoxy(43,27);printf(" IMPORTE              $        0");
	                            				gotoxy(43,28);printf(" SU SALDO             $        %i",monto);
	                            				gotoxy(43,29);printf(" DEPOSITO             $        %i",deposito);
                               					gotoxy(43,30);printf(" RETIRO               $        %i",retiro200000);
	                            				gotoxy(43,33);printf("----------------#QuedateEnCasa--------------\n\n\n\n\n\n");
	                            				getch();
												system("cls");
				                            	marco1();marco3();
				                            	gotoxy(48,18);printf("GRACIAS POR USAR ESTE CAJERO");
	                            				exit(0);
											break;
											default:
												gotoxy(46,33);printf("OPCION INCORRECTA");
												goto d;
											break;	
										}
									break;
									case 5:
										printf("\n");
										system("cls");
										retiro300000 = monto - 300000;
										monto -= 300000;
										a_retiro += 1;
										marco3();marco1();
										Sleep(1000);gotoxy(58,21);printf("o");
        	       					    Sleep(1000);gotoxy(61,21);printf("o");
	               					    Sleep(1000);gotoxy(64,21);printf("o");
	               					    Sleep(1000);gotoxy(67,21);printf("o");
	               					    system("cls");
										marco3();
	               					    gotoxy(49,18);printf("SU NUEVO SALDO ES DE: %i", monto);
										fflush(stdin);
										gotoxy(46,30);printf("Realizar otra transaccion: (S)(N)");
										scanf("%c", &r_transaccion);
										switch(r_transaccion){		
											case's':
											case'S':
												goto ii;
											break;			
											case'n':
											case'N':
												system("cls");
												recibo1();
												gotoxy(43,4); printf("-------------------RECIBO-------------------");
	                            				gotoxy(43,7); printf("           SOFTWARE OMICRON CORP            "); 
                            					gotoxy(43,11);printf("    FECHA      HORA     CAJERO    NRO.TRAN.");
                             					gotoxy(43,12);printf(" 20/06/2030    01:36   20080800    080802");
	                            				gotoxy(43,15);printf(" DIRECCION: TRV. 60 N.32-43");
                               					gotoxy(43,18);printf(" NRO. DE TARJETA: ********2312");
                               					gotoxy(43,21);printf(" EXTRACCION DE CTA.AHORROS");
                              					gotoxy(43,24);printf(" DE CUENTA NRO: 000012398700123");
	                            				gotoxy(43,27);printf(" IMPORTE              $        0");
	                            				gotoxy(43,28);printf(" SU SALDO             $        %i",monto);
	                            				gotoxy(43,29);printf(" DEPOSITO             $        %i",deposito);
                               					gotoxy(43,30);printf(" RETIRO               $        %i",retiro300000);
	                            				gotoxy(43,33);printf("----------------#QuedateEnCasa--------------\n\n\n\n\n\n");
	                            				getch();
												system("cls");
				                            	marco1();marco3();
				                            	gotoxy(48,18);printf("GRACIAS POR USAR ESTE CAJERO");
	                            				exit(0);
											break;
											default:
												gotoxy(46,33);printf("OPCION INCORRECTA");
												goto d;
											break;	
										}
									break;
									case 6:
										printf("\n");
										system("cls");
										retiro400000 = monto - 400000;
										monto -= 400000;
										a_retiro += 1;
										marco3();marco1();
										Sleep(1000);gotoxy(58,21);printf("o");
        	       					    Sleep(1000);gotoxy(61,21);printf("o");
	               					    Sleep(1000);gotoxy(64,21);printf("o");
	               					    Sleep(1000);gotoxy(67,21);printf("o");
	               					    system("cls");
										marco3();
	               					    gotoxy(49,18);printf("SU NUEVO SALDO ES DE: %i", monto);
										fflush(stdin);
										gotoxy(46,30);printf("Realizar otra transaccion: (S)(N)");
										scanf("%c", &r_transaccion);
										switch(r_transaccion){		
											case's':
											case'S':
												goto ii;
											break;			
											case'n':
											case'N':
												system("cls");
												recibo1();
												gotoxy(43,4); printf("-------------------RECIBO-------------------");
	                            				gotoxy(43,7); printf("           SOFTWARE OMICRON CORP            "); 
                            					gotoxy(43,11);printf("    FECHA      HORA     CAJERO    NRO.TRAN.");
                             					gotoxy(43,12);printf(" 20/06/2030    01:36   20080800    080802");
	                            				gotoxy(43,15);printf(" DIRECCION: TRV. 60 N.32-43");
                               					gotoxy(43,18);printf(" NRO. DE TARJETA: ********2312");
                               					gotoxy(43,21);printf(" EXTRACCION DE CTA.AHORROS");
                              					gotoxy(43,24);printf(" DE CUENTA NRO: 000012398700123");
	                            				gotoxy(43,27);printf(" IMPORTE              $        0");
	                            				gotoxy(43,28);printf(" SU SALDO             $        %i",monto);
	                            				gotoxy(43,29);printf(" DEPOSITO             $        %i",deposito);
                               					gotoxy(43,30);printf(" RETIRO               $        %i",retiro400000);
	                            				gotoxy(43,33);printf("----------------#QuedateEnCasa--------------\n\n\n\n\n\n");
	                            				getch();
												system("cls");
				                            	marco1();marco3();
				                            	gotoxy(48,18);printf("GRACIAS POR USAR ESTE CAJERO");
	                            				exit(0);
											break;
											default:
												gotoxy(46,33);printf("OPCION INCORRECTA");
												goto jj;
											break;	
										}
									break;
									case 7:
										printf("\n");
										system("cls");
										retiro600000 = monto - 600000;
										monto -= 600000;
										a_retiro += 1;
										marco3();marco1();
										Sleep(1000);gotoxy(58,21);printf("o");
        	       					    Sleep(1000);gotoxy(61,21);printf("o");
	               					    Sleep(1000);gotoxy(64,21);printf("o");
	               					    Sleep(1000);gotoxy(67,21);printf("o");
	               					    system("cls");
										marco3();
	               					    gotoxy(49,18);printf("SU NUEVO SALDO ES DE: %i", monto);
										fflush(stdin);
										gotoxy(46,30);printf("Realizar otra transaccion: (S)(N)");
										scanf("%c", &r_transaccion);
										switch(r_transaccion){		
											case's':
											case'S':
												goto ii;
											break;			
											case'n':
											case'N':
												system("cls");
												recibo1();
												gotoxy(43,4); printf("-------------------RECIBO-------------------");
	                            				gotoxy(43,7); printf("           SOFTWARE OMICRON CORP            "); 
                            					gotoxy(43,11);printf("    FECHA      HORA     CAJERO    NRO.TRAN.");
                             					gotoxy(43,12);printf(" 20/06/2030    01:36   20080800    080802");
	                            				gotoxy(43,15);printf(" DIRECCION: TRV. 60 N.32-43");
                               					gotoxy(43,18);printf(" NRO. DE TARJETA: ********2312");
                               					gotoxy(43,21);printf(" EXTRACCION DE CTA.AHORROS");
                              					gotoxy(43,24);printf(" DE CUENTA NRO: 000012398700123");
	                            				gotoxy(43,27);printf(" IMPORTE              $        0");
	                            				gotoxy(43,28);printf(" SU SALDO             $        %i",monto);
	                            				gotoxy(43,29);printf(" DEPOSITO             $        %i",deposito);
                               					gotoxy(43,30);printf(" RETIRO               $        %i",retiro600000);
	                            				gotoxy(43,33);printf("----------------#QuedateEnCasa--------------\n\n\n\n\n\n");
	                            				getch();
												system("cls");
				                            	marco1();marco3();
				                            	gotoxy(48,18);printf("GRACIAS POR USAR ESTE CAJERO");
	                            				exit(0);
											break;
											default:
												gotoxy(46,33);printf("OPCION INCORRECTA");
												goto d;
											break;	
										}
									break;
									case 8:
										printf("\n");
										system("cls");
										marco3();
										gotoxy(49,18);printf("Ingrese el valor a retirar: ");
										scanf("%i", &n);
										fflush(stdin);
										if(n > 400000){
											system("cls");
											gotoxy(46,33);printf("Se excedio del limite");
											gotoxy(46,36);printf("<<PRESS ENTER>>");
											getch();
											goto d;
										}else if(n== 400000||n==390000||n==380000||n==370000||n==360000||n==350000||n==340000||n==330000||n==320000||n==310000||n==300000){
											system("cls");
											ddd:
											n -= monto;
											monto -= n;	
											a_retiro += 1;
											marco3();marco1();
											Sleep(1000);gotoxy(58,21);printf("o");
        	       						    Sleep(1000);gotoxy(61,21);printf("o");
	               					 	  	Sleep(1000);gotoxy(64,21);printf("o");
	               					 		Sleep(1000);gotoxy(67,21);printf("o");
	               					 	 	system("cls");
											marco3();
	               					 	  	gotoxy(49,18);printf("SU NUEVO SALDO ES DE: %i", monto);
											fflush(stdin);
											gotoxy(46,30);printf("Realizar otra transaccion: (S)(N)");
											scanf("%c", &r_transaccion);
											switch(r_transaccion){		
												case's':
												case'S':
													goto d;
												break;			
												case'n':
												case'N':
													system("cls");
													recibo1();
													gotoxy(43,4); printf("-------------------RECIBO-------------------");
	                            					gotoxy(43,7); printf("           SOFTWARE OMICRON CORP            "); 
                            						gotoxy(43,11);printf("    FECHA      HORA     CAJERO    NRO.TRAN.");
                             						gotoxy(43,12);printf(" 20/06/2030    01:36   20080800    080802");
	                            					gotoxy(43,15);printf(" DIRECCION: TRV. 60 N.32-43");
                               						gotoxy(43,18);printf(" NRO. DE TARJETA: ********2312");
                               						gotoxy(43,21);printf(" EXTRACCION DE CTA.AHORROS");
                              						gotoxy(43,24);printf(" DE CUENTA NRO: 000012398700123");
	                            					gotoxy(43,27);printf(" IMPORTE              $        0");
	                            					gotoxy(43,28);printf(" SU SALDO             $        %i",monto);
	                            					gotoxy(43,29);printf(" DEPOSITO             $        %i",deposito);
                               						gotoxy(43,30);printf(" RETIRO               $        %i",n);
	                            					gotoxy(43,33);printf("----------------#QuedateEnCasa--------------\n\n\n\n\n\n");
	                            					getch();
													system("cls");
				                            		marco3();
				                            		gotoxy(48,18);printf("GRACIAS POR USAR ESTE CAJERO");
	                            					exit(0);
												break;
												default:
													gotoxy(46,33);printf("OPCION INCORRECTA");
													goto d;
												break;	
											}
										}else if(n>=390001 && n<=399999||n>=380001 && n<=389999||n>=370001 && n<=379999||n>=360001 && n<=369999||n>=350001 && n<=359999||n>=340001 && n<=349999||n>=330001 && n<=339999||n>=320001 && n<=329999||n>=310001 && n<=319999||n>=300001 && n<=309999){
									
											system("cls");
											gotoxy(46,34);printf("Imposible retirar. Debe ser en multiplos de diez mil");
											gotoxy(46,36);printf("<<PRESS ENTER>>");
											getch();
											goto jj;
										}else if(n==290000||n==280000||n==270000||n==260000||n==250000||n==240000||n==230000||n==220000||n==210000||n==200000){
											goto ddd;
										}else if(n>=280001 && n<=289999||n>=270001 && n<=279999||n>=260001 && n<=269999||n>=250001 && n<=259999||n>=240001 && n<=249999||n>=230001 && n<=239999||n>=220001 && n<=229999||n>=210001 && n<=219999||n>=200001 && n<=209999){
										
											system("cls");
											gotoxy(46,34);printf("Imposible retirar. Debe ser en multiplos de diez mil");
											gotoxy(46,36);printf("<<PRESS ENTER>>");
											getch();
											goto ii;
										}else if(n==190000||n==180000||n==170000||n==160000||n==150000||n==140000||n==130000||n==120000||n==110000||n==100000){
										
											goto ddd;
										}else if(n>=190001 && n<=199999||n>=180001 && n<=189999||n>=170001 && n<=179999||n>=160001 && n<=169999||n>=150001 && n<=159999||n>=140001 && n<=149999||n>=130001 && n<=139999||n>=120001 && n<=129999||n>=110001 && n<=119999||n>=100001 && n<=109999){
										
											system("cls");
											gotoxy(46,34);printf("Imposible retirar. Debe ser en multiplos de diez mil");
											gotoxy(46,36);printf("<<PRESS ENTER>>");
											getch();
											goto ii;
										}else if(n==90000||n==80000||n==70000||n==60000||n==50000||n==40000||n==30000||n==20000||n==10000){
										
											goto ddd;
										}else if(n>=90001 && n<=99999||n>=80001 && n<=89999||n>=70001 && n<=79999||n>=60001 && n<=69999||n>=50001 && n<=59999||n>=40001 && n<=49999||n>=30001 && n<=39999||n>=20001 && n<=29999||n>=10001 && n<=19999||n<=9999){
											system("cls");
											gotoxy(46,34);printf("Imposible retirar. Debe ser en multiplos de diez mil");
											gotoxy(46,36);printf("<<PRESS ENTER>>");
											getch();
											goto ii;
										}
									break;
									default:
										gotoxy(47,29);printf("OPCION INCORRECTA");
						        		printf("\t<<PRESS ENTER>>");
						        		getch();
										goto ii;		
									break;	
								}	
							}else{
								fflush(stdin);
								system("cls");
							    marco3();
							    gotoxy(46,18);printf("ERROR! Excedio el numero de retiros\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t");	
								system("PAUSE");
								goto ii;
							}
					break;
					case 3:
						system("cls");
				        marco3();marco1();
						Sleep(1000);gotoxy(58,21);printf("o");
        	            Sleep(1000);gotoxy(61,21);printf("o");
	             	    Sleep(1000);gotoxy(64,21);printf("o");
	                    Sleep(1000);gotoxy(67,21);printf("o");
	                    system("cls");
						marco1();marco3();
	                    gotoxy(55,18);printf("SU SALDO ES: %i", monto);
						fflush(stdin);
						gotoxy(46,30);printf("Realizar otra transaccion: (S)(N)");
					    scanf("%c", &r_transaccion);
						switch(r_transaccion){		
							case's':
							case'S':
								goto jj;
							break;		
							case'n':
							case'N':
								system("cls");
			       				recibo1();
			       				gotoxy(43,4); printf("-------------------RECIBO-------------------");
	                       		gotoxy(43,7); printf("           SOFTWARE OMICRON CORP            "); 
                           		gotoxy(43,11);printf("    FECHA      HORA     CAJERO    NRO.TRAN.");
                          		gotoxy(43,12);printf(" 20/06/2030    01:36   20080800    080802");
	                       		gotoxy(43,15);printf(" DIRECCION: TRV. 60 N.32-43");
                           		gotoxy(43,18);printf(" NRO. DE TARJETA: ********2312");
                           		gotoxy(43,21);printf(" EXTRACCION DE CTA.AHORROS");
                           		gotoxy(43,24);printf(" DE CUENTA NRO: 000012398700123");
	                          	gotoxy(43,27);printf(" IMPORTE              $        0");
	                       		gotoxy(43,28);printf(" SU SALDO             $        %i",monto);
	                       		gotoxy(43,29);printf(" DEPOSITO             $        %i",deposito);
                           		gotoxy(43,30);printf(" RETIRO               $        %i",retiro);
	                         	gotoxy(43,33);printf("----------------#QuedateEnCasa--------------\n\n\n\n\n\n");
	                       		getch();
								system("cls");
				                marco3();
				                gotoxy(48,18);printf("GRACIAS POR USAR ESTE CAJERO");
	                            exit(0);
							break;
						}
					break;//ciere de case 3
					case 4: //inicio case 4
						if(monto == 0){
							system("cls");
							marco3();
							gotoxy(51,18);printf("NO puede pagar servicios,"); 
							gotoxy(56,19);printf("NO tiene saldo...\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t");
							system("PAUSE");
							goto ii;
						}else{	
							system("cls");
							marco3();marco1();
	                   		fflush(stdin);
							gotoxy(48,16);printf("Ingrese el nombre de la ciudad: ");
							gotoxy(52,18);printf(" ______________________");
							gotoxy(52,19);printf("|                      |");
							gotoxy(52,20);printf("|                      |");
							gotoxy(52,21);printf("|______________________|");
							gotoxy(59,20);gets(ciudad);
							fflush(stdin);
							t:
							system("cls");
							marco1();
	                   		gotoxy(48,11);  printf(" _________________________________\n");
	                   		gotoxy(48,12);  printf("|                                 |\n");
	                   		gotoxy(48,13);  printf("|        SERVICOS PUBLICOS        |\n");
				    		gotoxy(48,14);	printf("|_________________________________|\n");
			    			gotoxy(48,15);  printf("|                                 |\n");
			    			gotoxy(48,16);	printf("| 1. Pagar servicio de gas        |\n");
			    			gotoxy(48,17);	printf("| 2. Pagar servicio de telefono   |\n");
			    			gotoxy(48,18);	printf("| 3. Pagar servicio de agua       |\n");
			    			gotoxy(48,19);	printf("| 4. Pagar servicio de luz        |\n");
			    			gotoxy(48,20);	printf("| 5. Pagar servicio de internet   |\n");
		    				gotoxy(48,21);	printf("| 6. Salir                        |\n");
		    				gotoxy(48,22);	printf("|_________________________________|\n\n");
		    				gotoxy(48,26);	printf("Seleccione una opcion: ");
							scanf("%i", &opcion4);
							fflush(stdin);
							switch(opcion4){
								case 1: //pagar gas
									y:
									system("cls");
									marco1(); marco3();	
									gotoxy(48,16);printf("Ingrese el numero de referencia: ");
						   		    gotoxy(52,18);printf(" ______________________");
						   		    gotoxy(52,19);printf("|                      |");
						  			gotoxy(52,20);printf("|                      |");
					       			gotoxy(52,21);printf("|______________________|");
									gotoxy(60,20);scanf("%i", &n_referencia);
									fflush(stdin);
							
									if (n_referencia>=99999999){
										system("cls");
										marco3();
										gotoxy(48,18);printf("NUMERO DE REFERENCIA INCORRECTO");
										gotoxy(44,30);printf("Intente de nuevo...<PRESS ENTER>\n\n");
								   		getch(); 
										goto y; 	          
									}else{
										system("cls");
									   	marco3();	
										fflush(stdin);
										gotoxy(48,16);printf("Ingrese el valor a pagar: ");
						               	gotoxy(52,18);printf(" ______________________");
						               	gotoxy(52,19);printf("|                      |");
						               	gotoxy(52,20);printf("|                      |");
					                	gotoxy(52,21);printf("|______________________|");
								       	gotoxy(60,20);scanf("%i", &v_pagar_gas);
										system("cls");
										monto = monto - v_pagar_gas;
										marco3();marco1();
										Sleep(1000);gotoxy(58,21);printf("o");
        	                           	Sleep(1000);gotoxy(61,21);printf("o");
	                                   	Sleep(1000);gotoxy(64,21);printf("o");
	                                   	Sleep(1000);gotoxy(67,21);printf("o");
	                                   	system("cls");
									  	marco3();
										gotoxy(56,17);printf("----------------");
										gotoxy(56,18);printf("|PAGO REALIZADO|");
										gotoxy(56,19);printf("----------------");
										monto -= v_pagar_gas;
										fflush(stdin);
										gotoxy(46,30);printf("Realizar otra transaccion: (S)(N)");
						              	scanf("%c", &r_transaccion);				
										switch(r_transaccion){		
											case's':
											case'S':
												goto jj;
											break;
											case'n':
											case'N':
												system("cls");
												recibo1();
												gotoxy(43,4); printf("-------------------RECIBO-------------------");
				                            	gotoxy(43,7); printf("           SOFTWARE OMICRON CORP            "); 
			                                   	gotoxy(43,11);printf("    FECHA      HORA     CAJERO    NRO.TRAN.");
			                                    gotoxy(43,12);printf(" 20/06/2030    01:36   20080800    080802");
			                                    gotoxy(43,15);printf(" DIRECCION: TRV. 60 N.32-43");
			                                    gotoxy(43,17);printf(" CIUDAD: %s",ciudad);
			                                    gotoxy(43,19);printf(" NRO. DE TARJETA: ********2312");
			                                    gotoxy(43,21);printf(" EXTRACCION DE CTA.AHORROS");
			                                    gotoxy(43,23);printf(" DE CUENTA NRO: 000012398700123");
		                                        gotoxy(43,26);printf("             TRANSACCION EXITOSA");
		                                        gotoxy(43,28);printf(" PAGO DE FACTURAS");
		                                        gotoxy(43,29);printf(" CONVENIO: GAS COLOMBIA");
		                                        gotoxy(43,30);printf(" No. Ref: %i",n_referencia);
		                                        gotoxy(43,31);printf(" VALOR:              $            %i",v_pagar_gas);
		                                        gotoxy(43,33);printf("----------------#QuedateEnCasa--------------\n\n\n\n\n\n");
		                                        getch();
												system("cls");
						                        marco1();marco3();
						                        gotoxy(48,18);printf("GRACIAS POR USAR ESTE CAJERO");
												exit(0);
											break;	
										}//Cierre switch
									}//Cierre else
								break; //cierre caso 1
								case 2: // pagar telefono
								    lll:
								    system("cls");	
									marco1(); marco3();	
									gotoxy(48,16);printf("Ingrese el numero de referencia: ");
								    gotoxy(52,18);printf(" ______________________");
								    gotoxy(52,19);printf("|                      |");
								    gotoxy(52,20);printf("|                      |");
							        gotoxy(52,21);printf("|______________________|");
									gotoxy(60,20);scanf("%i", &n_referencia);
									fflush(stdin);
									if (n_referencia>=99999999){
										system("cls");
										marco1(); marco3();	
										printf("\n");
										gotoxy(48,18);printf("NUMERO DE REFERENCIA INCORRECTO");
										gotoxy(44,30);printf("Intente de nuevo...<PRESS ENTER>\n\n");
									    getch(); 
										goto lll;      
									}else {
										system("cls");
										marco3();	
										fflush(stdin);
										gotoxy(48,16);printf("Ingrese el valor a pagar: ");
							            gotoxy(52,18);printf(" ______________________");
							            gotoxy(52,19);printf("|                      |");
							            gotoxy(52,20);printf("|                      |");
						                gotoxy(52,21);printf("|______________________|");
									    gotoxy(60,20);scanf("%i", &v_pagar_telefono);
									    monto = monto - v_pagar_telefono;
										system("cls");
										marco3();marco1();
										Sleep(1000);gotoxy(58,21);printf("o");
	        	                        Sleep(1000);gotoxy(61,21);printf("o");
		                                Sleep(1000);gotoxy(64,21);printf("o");
		                                Sleep(1000);gotoxy(67,21);printf("o");
		                                system("cls");
										marco1(); marco3();
										gotoxy(56,17);printf("----------------");
										gotoxy(56,18);printf("|PAGO REALIZADO|");
										gotoxy(56,19);printf("----------------");
										monto -= v_pagar_telefono;
										fflush(stdin);
										gotoxy(46,30);printf("Realizar otra transaccion: (S)(N)");
							            scanf("%c", &r_transaccion);				
										switch(r_transaccion){		
											case's':
											case'S':
												goto jj;
											break;
											case'n':
											case'N':
												system("cls");
												recibo1();
												gotoxy(43,4); printf("-------------------RECIBO-------------------");
			                                    gotoxy(43,7); printf("           SOFTWARE OMICRON CORP            "); 
		                                       	gotoxy(43,11);printf("    FECHA      HORA     CAJERO    NRO.TRAN.");
			                                    gotoxy(43,12);printf(" 20/06/2030    01:36   20080800    080802");
			                                    gotoxy(43,15);printf(" DIRECCION: TRV. 60 N.32-43");
			                                    gotoxy(43,17);printf(" CIUDAD: %s",ciudad);
			                                    gotoxy(43,19);printf(" NRO. DE TARJETA: ********2312");
			                                    gotoxy(43,21);printf(" EXTRACCION DE CTA.AHORROS");
			                                    gotoxy(43,23);printf(" DE CUENTA NRO: 000012398700123");
		                                        gotoxy(43,26);printf("             TRANSACCION EXITOSA");
		                                        gotoxy(43,28);printf(" PAGO DE FACTURAS");
		                                        gotoxy(43,29);printf(" CONVENIO: TELECOLOMBIA");
		                                        gotoxy(43,30);printf(" No. Ref: %i",n_referencia);
		                                        gotoxy(43,31);printf(" VALOR:              $            %i",v_pagar_telefono);
		                                        gotoxy(43,33);printf("----------------#QuedateEnCasa--------------\n\n\n\n\n\n");
		                                        getch();
												system("cls");
					                           	marco3();
					                           	gotoxy(48,18);printf("GRACIAS POR USAR ESTE CAJERO");
							                	exit(0);
							                break;    
										}//Cierre switch
									}//Cierre else
								break; //cierre caso 2	
								case 3: // pagar agua
							  	 	kkk:
							  	  	system("cls");
									marco3();	
									gotoxy(48,16);printf("Ingrese el numero de referencia: ");
							        gotoxy(52,18);printf(" ______________________");
							        gotoxy(52,19);printf("|                      |");
							        gotoxy(52,20);printf("|                      |");
						        	gotoxy(52,21);printf("|______________________|");
									gotoxy(60,20);scanf("%i", &n_referencia);
									fflush(stdin);
									if (n_referencia>=99999999){
									    system("cls");
									    marco1(); marco3();	
										printf("\n");
										gotoxy(48,18);printf("NUMERO DE REFERENCIA INCORRECTO");
										gotoxy(44,30);printf("Intente de nuevo...<PRESS ENTER>\n\n");
								        getch(); 
										goto kkk; 	          
									}else{
									    system("cls");
									    marco3();	
										fflush(stdin);
										gotoxy(48,16);printf("Ingrese el valor a pagar: ");
						                gotoxy(52,18);printf(" ______________________");
						                gotoxy(52,19);printf("|                      |");
						                gotoxy(52,20);printf("|                      |");
					                	gotoxy(52,21);printf("|______________________|");
								        gotoxy(60,20);scanf("%i", &v_pagar_agua);
								        monto = monto - v_pagar_agua;
										system("cls");
										marco3();marco1();
										Sleep(1000);gotoxy(58,21);printf("o");
        	                            Sleep(1000);gotoxy(61,21);printf("o");
	                                    Sleep(1000);gotoxy(64,21);printf("o");
	                                    Sleep(1000);gotoxy(67,21);printf("o");
	                                    system("cls");
									    marco1(); marco3();
										gotoxy(56,17);printf("----------------");
										gotoxy(56,18);printf("|PAGO REALIZADO|");
										gotoxy(56,19);printf("----------------");
										monto -= v_pagar_agua;
										fflush(stdin);
										gotoxy(46,30);printf("Realizar otra transaccion: (S)(N)");
						                scanf("%c", &r_transaccion);				
										switch(r_transaccion){		
											case's':
											case'S':
												goto jj;
											break;
											case'n':
											case'N':
												system("cls");
												recibo1();
												gotoxy(43,4); printf("-------------------RECIBO-------------------");
		                                        gotoxy(43,7); printf("           SOFTWARE OMICRON CORP            "); 
	                                        	gotoxy(43,11);printf("    FECHA      HORA     CAJERO    NRO.TRAN.");
		                                        gotoxy(43,12);printf(" 20/06/2030    01:36   20080800    080802");
		                                        gotoxy(43,15);printf(" DIRECCION: TRV. 60 N.32-43");
		                                        gotoxy(43,17);printf(" CIUDAD: %s",ciudad);
		                                        gotoxy(43,19);printf(" NRO. DE TARJETA: ********2312");
		                                        gotoxy(43,21);printf(" EXTRACCION DE CTA.AHORROS");
		                                        gotoxy(43,23);printf(" DE CUENTA NRO: 000012398700123");
	                                        	gotoxy(43,26);printf("             TRANSACCION EXITOSA");
	                                           	gotoxy(43,28);printf(" PAGO DE FACTURAS");
	                                           	gotoxy(43,29);printf(" CONVENIO: AGUA COLOMBIA");
	                                          	gotoxy(43,30);printf(" No. Ref: %i",n_referencia);
	                                        	gotoxy(43,31);printf(" VALOR:              $            %i",v_pagar_agua);
	                                         	gotoxy(43,33);printf("----------------#QuedateEnCasa--------------\n\n\n\n\n\n");
	                                         	getch();
												system("cls");
				                            	marco3();
				                          		gotoxy(48,18);printf("GRACIAS POR USAR ESTE CAJERO");
						              		    exit(0);
						                    default:
						                    	gotoxy(46,33);printf("OPCION INCORRECTA");
												goto jj;
											break;
										}//Cierre switch
									}//Cierre else
								break; //cierre caso 3
								case 4:// pagar luz case 4
									hhh:
									system("cls");
									marco3();	
									gotoxy(48,16);printf("Ingrese el numero de referencia: ");
							        gotoxy(52,18);printf(" ______________________");
							        gotoxy(52,19);printf("|                      |");
							        gotoxy(52,20);printf("|                      |");
						        	gotoxy(52,21);printf("|______________________|");
									gotoxy(60,20);scanf("%i", &n_referencia);
									fflush(stdin);
									
									if (n_referencia>=99999999){
									    system("cls");
									    marco3();	
										printf("\n");
										gotoxy(48,18);printf("NUMERO DE REFERENCIA INCORRECTO");
										gotoxy(44,30);printf("Intente de nuevo...<PRESS ENTER>\n\n");
								        getch(); 
										goto hhh; 	          
									}else{
									    system("cls");
									    marco3();	
										fflush(stdin);
										gotoxy(48,16);printf("Ingrese el valor a pagar: ");
						                gotoxy(52,18);printf(" ______________________");
						                gotoxy(52,19);printf("|                      |");
						                gotoxy(52,20);printf("|                      |");
					                	gotoxy(52,21);printf("|______________________|");
								        gotoxy(60,20);scanf("%i", &v_pagar_luz);
								        monto = monto - v_pagar_luz;
										system("cls");
										marco3();marco1();
										Sleep(1000);gotoxy(58,21);printf("o");
        	                            Sleep(1000);gotoxy(61,21);printf("o");
	                                    Sleep(1000);gotoxy(64,21);printf("o");
	                                    Sleep(1000);gotoxy(67,21);printf("o");
	                                    system("cls");
									    marco1(); marco3();
										gotoxy(56,17);printf("----------------");
										gotoxy(56,18);printf("|PAGO REALIZADO|");
										gotoxy(56,19);printf("----------------");
										monto -= v_pagar_luz;
										fflush(stdin);
										gotoxy(46,30);printf("Realizar otra transaccion: (S)(N)");
						                scanf("%c", &r_transaccion);				
										switch(r_transaccion){		
											case's':
											case'S':
												goto jj;
											break;
											case'n':
											case'N':
												system("cls");
												recibo1();
												gotoxy(43,4); printf("-------------------RECIBO-------------------");
		                                        gotoxy(43,7); printf("           SOFTWARE OMICRON CORP            "); 
	                                        	gotoxy(43,11);printf("    FECHA      HORA     CAJERO    NRO.TRAN.");
		                                        gotoxy(43,12);printf(" 20/06/2030    01:36   20080800    080802");
		                                        gotoxy(43,15);printf(" DIRECCION: TRV. 60 N.32-43");
		                                        gotoxy(43,17);printf(" CIUDAD: %s",ciudad);
		                                        gotoxy(43,19);printf(" NRO. DE TARJETA: ********2312");
		                                        gotoxy(43,21);printf(" EXTRACCION DE CTA.AHORROS");
		                                        gotoxy(43,23);printf(" DE CUENTA NRO: 000012398700123");
	                                        	gotoxy(43,26);printf("             TRANSACCION EXITOSA");
	                                           	gotoxy(43,28);printf(" PAGO DE FACTURAS");
	                                           	gotoxy(43,29);printf(" CONVENIO: ENERGIA COLOMBIA");
	                                          	gotoxy(43,30);printf(" No. Ref: %i",n_referencia);
	                                        	gotoxy(43,31);printf(" VALOR:              $            %i",v_pagar_luz);
	                                         	gotoxy(43,33);printf("----------------#QuedateEnCasa--------------\n\n\n\n\n\n");
	                                         	getch();
												 system("cls");
					                            marco1();marco3();
					                            gotoxy(48,18);printf("GRACIAS POR USAR ESTE CAJERO\n\n\n\n\n\n");
							                    exit(0);
							                break;
						                    default: 
						                    	gotoxy(46,33);printf("OPCION INCORRECTA");
												goto jj;
						                    break;
										}//Cierre switch
									}//Cierre else
								break; //cierre caso 4
								case 5:// pagar internet
								    ggg:
								    system("cls");	
									marco3();	
									gotoxy(48,16);printf("Ingrese el numero de referencia: ");
							        gotoxy(52,18);printf(" ______________________");
							        gotoxy(52,19);printf("|                      |");
							        gotoxy(52,20);printf("|                      |");
						        	gotoxy(52,21);printf("|______________________|");
									gotoxy(60,20);scanf("%i", &n_referencia);
									fflush(stdin);
									
									if (n_referencia>=99999999){
									    system("cls");
									    marco3();
										gotoxy(48,18);printf("NUMERO DE REFERENCIA INCORRECTO");
										gotoxy(44,30);printf("Intente de nuevo...<PRESS ENTER>\n\n");
								        getch(); 
										goto ggg; 	          
									}
									else {
									    system("cls");
									    marco3();	
										fflush(stdin);
										gotoxy(48,16);printf("Ingrese el valor a pagar: ");
						                gotoxy(52,18);printf(" ______________________");
						                gotoxy(52,19);printf("|                      |");
						                gotoxy(52,20);printf("|                      |");
					                	gotoxy(52,21);printf("|______________________|");
								        gotoxy(60,20);scanf("%i", &v_pagar_internet);
								        monto = monto - v_pagar_internet;
										system("cls");
										marco3();marco1();
										Sleep(1000);gotoxy(58,21);printf("o");
        	                            Sleep(1000);gotoxy(61,21);printf("o");
	                                    Sleep(1000);gotoxy(64,21);printf("o");
	                                    Sleep(1000);gotoxy(67,21);printf("o");
	                                    system("cls");
									    marco3();
										gotoxy(56,17);printf("----------------");
										gotoxy(56,18);printf("|PAGO REALIZADO|");
										gotoxy(56,19);printf("----------------");
										monto -= v_pagar_internet;
										fflush(stdin);
										gotoxy(46,30);printf("Realizar otra transaccion: (S)(N)");
						                scanf("%c", &r_transaccion);				
										switch(r_transaccion){		
											case's':
											case'S':
												goto jj;
											break;
											case'n':
											case'N':
												system("cls");
												recibo1();
												gotoxy(43,4); printf("-------------------RECIBO-------------------");
		                                        gotoxy(43,7); printf("           SOFTWARE OMICRON CORP            "); 
	                                        	gotoxy(43,11);printf("    FECHA      HORA     CAJERO    NRO.TRAN.");
		                                        gotoxy(43,12);printf(" 20/06/2030    01:36   20080800    080802");
		                                        gotoxy(43,15);printf(" DIRECCION: TRV. 60 N.32-43");
		                                        gotoxy(43,17);printf(" CIUDAD: %s",ciudad);
		                                        gotoxy(43,19);printf(" NRO. DE TARJETA: ********2312");
		                                        gotoxy(43,21);printf(" EXTRACCION DE CTA.AHORROS");
		                                        gotoxy(43,23);printf(" DE CUENTA NRO: 000012398700123");
	                                        	gotoxy(43,26);printf("             TRANSACCION EXITOSA");
	                                           	gotoxy(43,28);printf(" PAGO DE FACTURAS");
	                                           	gotoxy(43,29);printf(" CONVENIO: COLOMBIA NET");
	                                          	gotoxy(43,30);printf(" No. Ref: %i",n_referencia);
	                                        	gotoxy(43,31);printf(" VALOR:              $            %i",v_pagar_internet);
	                                         	gotoxy(43,33);printf("----------------#QuedateEnCasa--------------\n\n\n\n\n\n");
	                                         	getch();
												 system("cls");
					                            marco1();marco3();
					                            gotoxy(48,18);printf("GRACIAS POR USAR ESTE CAJERO\n\n\n\n\n\n");
							                    exit(0);
							                break;    
										}//Cierre switch
									}//Cierre else
								break; //cierre caso 5
								case 6://SALIR AL MENÚ
									printf("\n\t\t\t\t\t\t<<PRESS ENTER>>");
									getch();
									goto jj;
								break;//cierre case 6
								default:
									gotoxy(47,29);printf("OPCION INCORRECTA");
						     	   	printf("\t<<PRESS ENTER>>");
						       		getch();
									goto t;
								break;
							}///CIERRE SWITCH SERVIVIOS
						}	///CIERRE ELSE
					break;//cierre de caso 4
					case 5://transferir a otra cuenta
						if(monto == 0){
							system("cls");
							marco1();marco3();
							gotoxy(51,18);printf("NO puede transferir dinero,");
							gotoxy(56,19);printf("NO tiene saldo...\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t");
							system("PAUSE");
							goto ii;
						}else{
							fflush(stdin);
							system("cls");
							marco3();
							gotoxy(47,18);printf("Transferir al mismo banco? (S)(N)");
							scanf("%c",&d_mismo_banco);
							switch(d_mismo_banco){
								case 's':
								case 'S':
									a:
									system("cls");
									marco3();	
								    fflush(stdin);
									gotoxy(49,15);printf("Ingrese el numero de la cuenta");
									gotoxy(56,16);printf("a transferir");
						            gotoxy(52,18);printf(" ______________________");
						            gotoxy(52,19);printf("|                      |");
						            gotoxy(52,20);printf("|                      |");
					                gotoxy(52,21);printf("|______________________|");
					                gotoxy(55,20);scanf("%i", &n_cuenta_transferencia);
					                	
					                system("cls");
									marco3();
									fflush(stdin);	
					                gotoxy(50,16);printf("Ingrese el nombre del titular");
									gotoxy(53,17);printf("o compania a transferir");
						            gotoxy(52,18);printf(" ______________________");
						            gotoxy(52,19);printf("|                      |");
						            gotoxy(52,20);printf("|                      |");
					               	gotoxy(52,21);printf("|______________________|");
					                gotoxy(55,20);gets(n_nombre_transferencia);
					                	
					               	system("cls");
									marco3();	
									fflush(stdin);
					                gotoxy(50,16);printf("Ingrese el tipo de documento");
								    gotoxy(52,18);printf(" ______________________");
					                gotoxy(52,19);printf("|                      |");
						            gotoxy(52,20);printf("|                      |");
					              	gotoxy(52,21);printf("|______________________|");
					               	gotoxy(55,20);scanf("%s", &n_tipo_transferencia);
					             	
					                system("cls");
								    marco3();	
									fflush(stdin);
					               	gotoxy(50,16);printf("Ingrese el numero de documento");
									gotoxy(52,18);printf(" ______________________");
						            gotoxy(52,19);printf("|                      |");
						            gotoxy(52,20);printf("|                      |");
					               	gotoxy(52,21);printf("|______________________|");
					                gotoxy(55,20);scanf("%i", &n_numero_transferencia);
					                	
					                system ("cls");
					               	marco3();	
									fflush(stdin);
									gotoxy(48,16);printf("Ingrese el valor a transferir: ");
						            gotoxy(52,18);printf(" ______________________");
						            gotoxy(52,19);printf("|                      |");
						            gotoxy(52,20);printf("|                      |");
					               	gotoxy(52,21);printf("|______________________|");
								    gotoxy(60,20);scanf("%i",&v_transferir);
								        
							        system("cls");
									recibo1();
                                   	gotoxy(43,4); printf("------------VERIFICAR INFORMACION-----------");
                                 	gotoxy(43,7); printf("            SOFTWARE OMICRON CORP           ");
                                 	gotoxy(43,13);printf(" TIPO DE CUENTA:           Ahorros ");
                                 	gotoxy(43,15);printf(" NRO. DE CUENTA:           %i",n_cuenta_transferencia);
                                 	gotoxy(43,18);printf(" NOMBRE DE LA CUENTA:      %s",n_nombre_transferencia);
                                 	gotoxy(43,20);printf(" TIPO DE DOCUMENTO:        %s",n_tipo_transferencia);
                                 	gotoxy(43,22);printf(" NUMERO DE DOCUMENTO:      %i",n_numero_transferencia);
                                 	gotoxy(43,25);printf(" VALOR A TRANSFERIR:       $ %i",v_transferir);
                                 	gotoxy(43,27);printf(" COSTO DE LA TRANSACCION:  $ 0 ");
                                	gotoxy(43,33);printf("---------------ACEPTAR <ENTER> -------------");
                               		getch();
									monto -=v_transferir;
							       	system("cls");
							       	marco3();marco1();
									Sleep(1000);gotoxy(58,21);printf("o");
        	                        Sleep(1000);gotoxy(61,21);printf("o");
	                                Sleep(1000);gotoxy(64,21);printf("o");
	                                Sleep(1000);gotoxy(67,21);printf("o");
	                                system("cls");
									marco3();
									gotoxy(52,17);printf("------------------------");
									gotoxy(52,18);printf("-TRANSFERENCIA COMPLETA");
									gotoxy(52,19);printf("------------------------");
									fflush(stdin);
									gotoxy(46,30);printf("Realizar otra transaccion: (S)(N)");
						            scanf("%c", &r_transaccion);				
									switch(r_transaccion){		
										case's':
										case'S':
											goto jj;
										break;
										case'n':
										case'N':
											system("cls");
											recibo1();
											gotoxy(43,4); printf("-------------------RECIBO-------------------");
											gotoxy(43,7); printf("           SOFTWARE OMICRON CORP            "); 
											gotoxy(43,11);printf("    FECHA      HORA     CAJERO    NRO.TRAN.");
											gotoxy(43,12);printf(" 20/06/2030    01:36   20080800    080802");
											gotoxy(43,15);printf(" DIRECCION: TRV. 60 N.32-43");
											gotoxy(43,18);printf(" NRO. DE TARJETA: ********2312");
											gotoxy(43,21);printf(" EXTRACCION DE CTA.AHORROS");
											gotoxy(43,24);printf(" DE CUENTA NRO: 000012398700123");
											gotoxy(43,27);printf(" IMPORTE              $        0");
											gotoxy(43,28);printf(" SU SALDO             $        %i",monto);
											gotoxy(43,29);printf(" DEPOSITO             $        %i",deposito);
											gotoxy(43,30);printf(" RETIRO               $        %i",retiro);
											gotoxy(43,33);printf("----------------#QuedateEnCasa--------------\n\n\n\n\n\n");
											getch();
											system("cls");
				                            marco1();marco3();
				                            gotoxy(48,18);printf("GRACIAS POR USAR ESTE CAJERO\n\n\n\n\n\n");
						                    exit(0);
						                break;  
						        	}
						       	case 'n':
								case 'N':
						  			system("cls");
									marco3();	
									fflush(stdin);
									gotoxy(49,15);printf("Ingrese el nombre del banco al");
									gotoxy(47,16);printf("que va a realizar la transferencia");
						            gotoxy(52,18);printf(" ______________________");
						            gotoxy(52,19);printf("|                      |");
						           	gotoxy(52,20);printf("|                      |");
					                gotoxy(52,21);printf("|______________________|");
								    gotoxy(55,20);gets(n_banco_transferencia);
								   	system("cls");
									marco3();	
									fflush(stdin);
									gotoxy(49,15);printf("Ingrese el numero de la cuenta");
									gotoxy(56,16);printf("a transferir");
							        gotoxy(52,18);printf(" ______________________");
							        gotoxy(52,19);printf("|                      |");
							        gotoxy(52,20);printf("|                      |");
						            gotoxy(52,21);printf("|______________________|");
						            gotoxy(55,20);scanf("%i", &n_cuenta_transferencia);
						                	
						            system("cls");
									marco3();
									fflush(stdin);	
						            gotoxy(50,16);printf("Ingrese el nombre del titular");
									gotoxy(53,17);printf("o compania a transferir");
							        gotoxy(52,18);printf(" ______________________");
							        gotoxy(52,19);printf("|                      |");
							        gotoxy(52,20);printf("|                      |");
						            gotoxy(52,21);printf("|______________________|");
						            gotoxy(55,20);gets(n_nombre_transferencia);
						                	
						        	system("cls");
									marco3();	
									fflush(stdin);
						            gotoxy(50,16);printf("Ingrese el tipo de documento");
									gotoxy(52,18);printf(" ______________________");
							        gotoxy(52,19);printf("|                      |");
							        gotoxy(52,20);printf("|                      |");
						            gotoxy(52,21);printf("|______________________|");
						            gotoxy(55,20);scanf("%s", &n_tipo_transferencia);
						                	
							        system("cls");
									marco3();	
									fflush(stdin);
						            gotoxy(50,16);printf("Ingrese el numero de documento");
									gotoxy(52,18);printf(" ______________________");
							        gotoxy(52,19);printf("|                      |");
							        gotoxy(52,20);printf("|                      |");
						            gotoxy(52,21);printf("|______________________|");
						            gotoxy(55,20);scanf("%i", &n_numero_transferencia);
						                	
						            system ("cls");
						            marco3();	
									fflush(stdin);
									gotoxy(48,16);printf("Ingrese el valor a transferir: ");
							        gotoxy(52,18);printf(" ______________________");
							        gotoxy(52,19);printf("|                      |");
							        gotoxy(52,20);printf("|                      |");
						            gotoxy(52,21);printf("|______________________|");
									gotoxy(60,20);scanf("%i",&v_transferir);
								    system("cls");
								    fflush(stdin);
									recibo1();
	                                gotoxy(43,4); printf("------------VERIFICAR INFORMACION-----------");
	                                gotoxy(43,7); printf("            SOFTWARE OMICRON CORP           "); 
	                                gotoxy(43,11);printf(" BANCO:                    %s",n_banco_transferencia);
	                                gotoxy(43,14);printf(" TIPO DE CUENTA:           Ahorros ");
	                                gotoxy(43,16);printf(" NRO. DE CUENTA:           %i",n_cuenta_transferencia);
	                                gotoxy(43,19);printf(" NOMBRE DE LA CUENTA:      %s",n_nombre_transferencia);
	                                gotoxy(43,21);printf(" TIPO DE DOCUMENTO:        %s",n_tipo_transferencia);
	                                gotoxy(43,23);printf(" NUMERO DE DOCUMENTO:      %i",n_numero_transferencia);
	                                gotoxy(43,26);printf(" VALOR A TRANSFERIR:       $ %i",v_transferir);
	                                gotoxy(43,28);printf(" COSTO DE LA TRANSACCION:  $ 7000 ");
	                                gotoxy(43,33);printf("---------------ACEPTAR <ENTER> -------------");
	                                getch();
									monto -=v_transferir;
								    monto -=7000;
								    importe =7000;
								   	system("cls");
								   	marco3();marco1();
									Sleep(1000);gotoxy(58,21);printf("o");
	        	                    Sleep(1000);gotoxy(61,21);printf("o");
		                            Sleep(1000);gotoxy(64,21);printf("o");
		                            Sleep(1000);gotoxy(67,21);printf("o");
		                            system("cls");
									marco1(); marco3();
									gotoxy(52,17);printf("------------------------");
									gotoxy(52,18);printf("-TRANSFERENCIA COMPLETA");
									gotoxy(52,19);printf("------------------------");
									fflush(stdin);
									gotoxy(46,30);printf("Realizar otra transaccion: (S)(N)");
							        scanf("%c", &r_transaccion);				
									switch(r_transaccion){		
										case's':
										case'S':
											goto jj;
										break;
										case'n':
										case'N':
											system("cls");
											recibo1();
											gotoxy(43,4); printf("-------------------RECIBO-------------------");
											gotoxy(43,7); printf("           SOFTWARE OMICRON CORP            "); 
											gotoxy(43,11);printf("    FECHA      HORA     CAJERO    NRO.TRAN.");
											gotoxy(43,12);printf(" 20/06/2030    01:36   20080800    080802");
											gotoxy(43,15);printf(" DIRECCION: TRV. 60 N.32-43");
											gotoxy(43,18);printf(" NRO. DE TARJETA: ********2312");
											gotoxy(43,21);printf(" EXTRACCION DE CTA.AHORROS");
											gotoxy(43,24);printf(" DE CUENTA NRO: 000012398700123");
											gotoxy(43,27);printf(" IMPORTE              $        7000");
											gotoxy(43,28);printf(" SU SALDO             $        %i",monto);
											gotoxy(43,29);printf(" DEPOSITO             $        %i",deposito);
											gotoxy(43,30);printf(" RETIRO               $        %i",retiro);
											gotoxy(43,33);printf("----------------#QuedateEnCasa--------------\n\n\n\n\n\n");
											getch();
											system("cls");
					                   		marco3();
					                   	  	gotoxy(48,18);printf("GRACIAS POR USAR ESTE CAJERO\n\n\n\n\n\n");
							           	    exit(0);
										break;
										default:
											gotoxy(47,29);printf("OPCION INCORRECTA");
						     			   	printf("\t<<PRESS ENTER>>");
						       				getch();
											goto t;
										break;
								   }
								break;
							}
						}	
					break;	
				}//cierre switch del case 5
			break;//cierre case 5
			case 6://SALIR PROGRAMA
				system("cls");
				recibo1();
				gotoxy(43,4); printf("-------------------RECIBO-------------------");
				gotoxy(43,7); printf("           SOFTWARE OMICRON CORP            "); 
				gotoxy(43,11);printf("    FECHA      HORA     CAJERO    NRO.TRAN.");
						gotoxy(43,12);printf(" 20/06/2030    01:36   20080800    080802");
						gotoxy(43,15);printf(" DIRECCION: TRV. 60 N.32-43");
						gotoxy(43,18);printf(" NRO. DE TARJETA: ********2312");
						gotoxy(43,21);printf(" EXTRACCION DE CTA.AHORROS");
						gotoxy(43,24);printf(" DE CUENTA NRO: 000012398700123");
						gotoxy(43,27);printf(" IMPORTE              $        %i",importe);
						gotoxy(43,28);printf(" SU SALDO             $        %i",monto);
						gotoxy(43,29);printf(" DEPOSITO             $        %i",deposito);
						gotoxy(43,30);printf(" RETIRO               $        %i",retiro);
						gotoxy(43,33);printf("----------------#QuedateEnCasa--------------\n\n\n\n\n\n");
						getch();
						system("cls");
				        marco1();marco3();
						gotoxy(48,18);printf("GRACIAS POR USAR ESTE CAJERO\n\n\n\n\n\n");
	                    exit(0);
					break;//cierre case 6
					default:
						gotoxy(47,29);printf("OPCION INCORRECTA");
						printf("\t<<PRESS ENTER>>");
						getch();
						goto jj;
					break;//cierre default
				}////CIERRE SWITCH OPCION 2
			}else{
				system("cls");
				marco3();
	            gotoxy(54,16);printf("CLAVE INCORRECTA");
				gotoxy(50,19);printf("Digite su clave (3): ");
				scanf("%i", &codigoV1);
				if(codigo == codigoV1){	
					goto ii;		
				}
				system("cls");
				marco3();
				gotoxy(54,16);printf("CLAVE INCORRECTA");
				gotoxy(50,19);printf("Digite su clave (2): ");
				scanf("%i", &codigoV2);
							
				if(codigo == codigoV2){	
					goto ii;		
				}
				system("cls");
			    marco3();
				gotoxy(54,16);printf("CLAVE INCORRECTA");
				gotoxy(50,19);printf("Digite su clave (1): ");
				scanf("%i", &codigoV3);
				if(codigo == codigoV3){	
					goto ii;		
				}
			    system("cls");
				marco3();
				gotoxy(55,18);printf("-ACCESO BLOQUEADO-");
				gotoxy(45,28);printf("Comuniquese con su entidad financiera...\n\n\n\n\n\n\n\n");
				exit(0); 
			}
		break;
		case 2:
			system("cls");
			marco3();	
			fflush(stdin);
			gotoxy(47,16);printf("Ingrese su nombre: ");
			gotoxy(52,18);printf(" ______________________");
			gotoxy(52,19);printf("|                      |");
			gotoxy(52,20);printf("|                      |");
			gotoxy(52,21);printf("|______________________|");
			gotoxy(55,20);gets(nombre);
			fflush(stdin);
			system("cls");
			marco3();	
			fflush(stdin);
			gotoxy(47,16);printf("Ingrese su apellido:");
			gotoxy(52,18);printf(" ______________________");
			gotoxy(52,19);printf("|                      |");
			gotoxy(52,20);printf("|                      |");
			gotoxy(52,21);printf("|______________________|");
			gotoxy(55,20);gets(apellido);
			fflush(stdin);
			system("cls");
			marco3();	
			fflush(stdin);
			gotoxy(48,16);printf("Ingrese dia de nacimiento:");
			gotoxy(52,18);printf(" ______________________");
			gotoxy(52,19);printf("|                      |");
			gotoxy(52,20);printf("|                      |");
			gotoxy(52,21);printf("|______________________|");
			gotoxy(55,20);scanf("%i", &diaNacimiento);
			system("cls");
			marco3();	
			fflush(stdin);
			gotoxy(48,16);printf("Ingrese mes de nacimiento:");
			gotoxy(52,18);printf(" ______________________");
			gotoxy(52,19);printf("|                      |");
			gotoxy(52,20);printf("|                      |");
			gotoxy(52,21);printf("|______________________|");
			gotoxy(55,20);scanf("%i",&mesNacimiento);
			system("cls");
			marco3();	
			fflush(stdin);
			gotoxy(48,16);printf("Ingrese ano de nacimiento:");
			gotoxy(52,18);printf(" ______________________");
			gotoxy(52,19);printf("|                      |");
			gotoxy(52,20);printf("|                      |");
			gotoxy(52,21);printf("|______________________|");
			gotoxy(55,20);scanf("%d",&anoNacimiento);
			
			valid = 2020-anoNacimiento;
			fflush(stdin);
			if(valid>=18){
				
				system("cls");
			    marco3();	
			    fflush(stdin);
			    gotoxy(47,16);printf("Ingrese su numero de cedula:");
			    gotoxy(52,18);printf(" ______________________");
			    gotoxy(52,19);printf("|                      |");
		    	gotoxy(52,20);printf("|                      |");
			    gotoxy(52,21);printf("|______________________|");
			    gotoxy(55,20);scanf("%i", &n_cedula);
			    
			    system("cls");
			    marco3();	
			    fflush(stdin);
			    gotoxy(47,16);printf("Crear clave:");
			    gotoxy(52,18);printf(" ______________________");
			    gotoxy(52,19);printf("|                      |");
		    	gotoxy(52,20);printf("|                      |");
			    gotoxy(52,21);printf("|______________________|");
			    gotoxy(55,20);scanf("%i",&n_contrasena);
			    
			    system("cls");
			    marco3();	
			    fflush(stdin);
			    gotoxy(47,16);printf("Repetir clave:");
			    gotoxy(52,18);printf(" ______________________");
			    gotoxy(52,19);printf("|                      |");
		    	gotoxy(52,20);printf("|                      |");
			    gotoxy(52,21);printf("|______________________|");
			    gotoxy(55,20);scanf("%i",&n1_contrasena);
			    if(n_contrasena == n1_contrasena){
					cc:		
					system("cls");
			        marco3();	
			        fflush(stdin);
			        gotoxy(51,16);printf("CUENTA CREADA CON EXITO!");
			        gotoxy(51,17);printf("Nombre: %s ",nombre);
			        gotoxy(51,18);printf("Apellido: %s",apellido);
		    	    gotoxy(51,19);printf("Cedula: %i ",n_cedula);
					gotoxy(51,20);printf("Ingresar monto a consignar: ");	
					gotoxy(60,21);scanf("%i", &monto);
					system("cls");
					marco3();marco1();
					Sleep(1000);gotoxy(58,21);printf("o");
        	        Sleep(1000);gotoxy(61,21);printf("o");
	                Sleep(1000);gotoxy(64,21);printf("o");
	                Sleep(1000);gotoxy(67,21);printf("o");
	                system("cls");
					marco3();
					fflush(stdin);
					gotoxy(51,17);printf("------------------------");
					gotoxy(51,18);printf("-CONSIGNACION COMPLETA!-");
					gotoxy(51,19);printf("------------------------");
					gotoxy(46,30);printf("Ir al menu de opciones...");
					getch();
					fflush(stdin);
					system("cls");
				    marco1();marco3();
				    gotoxy(50,18);printf("Digite su clave: ");
					scanf("%i", &nV_contrasena);
					if(n_contrasena == nV_contrasena){
						system ("cls");
				        marco3();
    			        Sleep(3000);gotoxy(58,18);printf("BIENVENID@");
						Sleep(500);goto jj;
					}
					else{
						system("cls");
				        marco3();
	                    gotoxy(54,16);printf("CLAVE INCORRECTA (3)");
				        gotoxy(50,19);printf("Digite su clave: ");
						scanf("%i", &nV_contrasena);
						if(n_contrasena == nV_contrasena){	
							goto mm;		
						}
						system("cls");
				        marco3();
						gotoxy(54,16);printf("LAS CLAVES NO COINCIDEN");
						fflush(stdin);
						gotoxy(50,19);printf("Digite su clave(2): ");
						scanf("%i", &nV_contrasena);
						if(n_contrasena == nV_contrasena){	
							goto jj;		
						}
						system("cls");
				        marco3();
						gotoxy(54,16);printf("LAS CLAVES NO COINCIDEN");
						fflush(stdin);
						gotoxy(50,19);printf("Digite su clave(1): ");
						scanf("%i", &nV_contrasena);
						if(n_contrasena == nV_contrasena){	
							goto pp;		
						}
						system("cls");
				        marco3();
					    gotoxy(54,16);printf("LAS CLAVES NO COINCIDEN");
					    gotoxy(50,19);printf("-ACCESO BLOQUEDO-");
					    gotoxy(50,28);printf("Comuniquese con su entidad financiera...");
						exit(0); 
					}
				}else{
					
					system("cls");
				    marco3();
					gotoxy(54,16);printf("LAS CLAVES NO COINCIDEN");
					fflush(stdin);
					gotoxy(50,19);printf("Digite su clave(3): ");
					scanf("%i", &n1_contrasena);
					if(n1_contrasena == n_contrasena){
						goto cc;
					}/////CIERRE IF CONTRASEÑA CORRECTA 0
					system("cls");
				    marco3();
					gotoxy(54,16);printf("LAS CLAVES NO COINCIDEN");
					fflush(stdin);
					gotoxy(50,19);printf("Digite su clave(2): ");
					scanf("%i", &n2_contrasena);
					if(n2_contrasena == n_contrasena){
						goto cc;
					}/////CIERRE IF CONTRASEÑA CORRECTA 1
					system("cls");
				    marco3();
					gotoxy(54,16);printf("LAS CLAVES NO COINCIDEN");
					fflush(stdin);
					gotoxy(50,19);printf("Digite su clave(1): ");
					scanf("%i", &n3_contrasena);
					if(n3_contrasena == n_contrasena){
						goto cc;
					}/////CIERRE IF CONTRASEÑA CORRECTA 2
					system("cls");
				    marco3();
					gotoxy(54,16);printf("LAS CLAVES NO COINCIDEN");
					gotoxy(50,19);printf("-ACCESO BLOQUEDO-");
					gotoxy(50,28);printf("Comuniquese con su entidad financiera...");
					exit(0); 
				}/////CIERRE ELSE CONTRASEÑAS
			}/////CIERRE IF NACIMIENTO 
			else{
				system("cls");
				marco3();
				gotoxy(48,18);printf("ERROR, debe ser mayor de edad");
				gotoxy(48,19);printf("para crear una cuenta bancaria");
				gotoxy(57,30);printf("<<PRESS ENTER>>");
				getch();
				goto d;
			}//ELSE
		break;
	}//CIERRE SWITCH 1
}//FIN PROGRAMA

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void portada(){
	
	system("color 70");
	gotoxy(43,6);  printf("----SERVICIO NACIONAL DE APRENIZAJE | SENA----");
	gotoxy(34,10); printf("TECNOLOGO EN ANALISIS Y DESARROLLO DE SISTEMAS DE INFORMACION");
    gotoxy(57,15); printf("---EQUIPO ALFA---");
    gotoxy(54,17); printf("Jean Paul Canon Cadena");
    gotoxy(54,18); printf("Marinela Garzon Rojas");
    gotoxy(53,21); printf("Paula Alejandra Pineda");
    gotoxy(57,19); printf("Juan David Pava");
    gotoxy(55,20); printf("Harol Esneider Melo");
    gotoxy(62,23); printf("FICHA");
    gotoxy(61,24); printf("2080800");
    gotoxy(60,28); printf("INSTRUCTOR");
    gotoxy(53,29); printf("Alexander Mendoza Monaga");
    gotoxy(58,32); printf("-----2020-----");
	getch();
	system("cls");
	system("color 71");
	marco3();
	gotoxy(48,18);printf("SIMULADOR DE CAJERO AUTOMATICO");
	getch();
	system("cls");
	marco3();
	Sleep(1000);gotoxy(58,18);printf("o");
	Sleep(1000);gotoxy(61,18);printf("o");
	Sleep(1000);gotoxy(64,18);printf("o");
	Sleep(1000);gotoxy(67,18);printf("o");
	system("cls");
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void proceso(){
	marco3();marco1();
	gotoxy(55,18);printf("Ingrese tarjeta...\n ");
	getch();
	system("cls");
	marco3();		
	Sleep(1000);gotoxy(47,16);printf("Por favor no retirar la tarjeta...\n");
	Sleep(800);gotoxy(58,20);printf("o");
	Sleep(800);gotoxy(61,20);printf("o");
	Sleep(800);gotoxy(64,20);printf("o");
	Sleep(800);gotoxy(67,20);printf("o");
    system("cls");
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void inicio(){
	system("cls");
	Sleep(500);marco1();
	gotoxy(48,6);printf(" _______________________________\n");
	printf("\t\t\t\t\t\t|                               |\n");
	printf("\t\t\t\t\t\t|     SOFTWARE OMICRON CORP     |\n");  
	printf("\t\t\t\t\t\t|_______________________________|\n");  
	
	printf("\n\n\n\n\n\n\n\t\t\t _______________________________                 _______________________________\n");
	printf("\t\t\t|                               |               |                               |\n");
	printf("\t\t\t|    Ingresar a su cuenta   (1) |               |       Crear una cuenta    (2) |\n");
	printf("\t\t\t|_______________________________|               |_______________________________|\n");
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void menu(){
	Sleep(500);marco1();
    	gotoxy(42,11);printf(" ___________________________________________");
    	gotoxy(42,12);printf("|                                           |");
		gotoxy(42,13);printf("|              -MENU PRINCIPAL              |");
		gotoxy(42,14);printf("|___________________________________________|");
		gotoxy(42,15);printf(" ___________________________________________");
    	gotoxy(42,16);printf("|                                           |");
		gotoxy(42,17);printf("|->(1) Depositar Dinero                     |");
		gotoxy(42,18);printf("|->(2) Retirar Dinero                       |");
		gotoxy(42,19);printf("|->(3) Consultar saldo                      |");
		gotoxy(42,20);printf("|->(4) Pagar servicios                      |");
		gotoxy(42,21);printf("|->(5) Transferir dinero a otra cuenta      |");
		gotoxy(42,22);printf("|->(6) Salir                                |");
		gotoxy(42,23);printf("|___________________________________________|");
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void recibo1(){
	int x,y;
	for (x=43;x<=86;x++){
	gotoxy(x,2);printf("=");
	gotoxy(x,35);printf("=");
}//Cierre for en X
    for (y=3; y<=34;y++){
    	gotoxy(42,y);printf("|");
    	gotoxy(87,y);printf("|");
}//Cierre dor en Y
}//Cierre Marco		
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////					
		
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void marco1(){                    
	int x,y;                      
	for (x=4;x<=122;x++){          
	gotoxy(x,4); printf("*");     
	gotoxy(x,35);printf("*");     
}//Cierre for en X                
    for (y=4; y<=36;y++){         
    	gotoxy(4,y);printf("*");  
    	gotoxy(120,y);printf("*"); 
}//Cierre for en Y                
}//Cierre for en X 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void marco3(){                    
	int x,y;                      
	for (x=45;x<=81;x++){
	gotoxy(x,12); printf("/");     
	gotoxy(x,24);printf("/");
}//Cierre for en X                
    for (y=13; y<=23;y++){    
    	gotoxy(45,y);printf("/");  
    	gotoxy(81,y);printf("/");
}//Cierre for en Y                
}//Cierre for en X  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void gotoxy(int x,int y){
	HANDLE hcon;
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
