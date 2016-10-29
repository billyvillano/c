#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 50

void insertar3 (int *X, int N);
void imprimir (int a, char car);
void imprimir2 (int n, int *X, int a, char car);

int main (){
	int *A;
	int *B;
	int *C;
	int *D;
	int *E;
	
	A=(int *)malloc (sizeof(int)*50);
	B=(int *)malloc (sizeof(int)*50);
	C=(int *)malloc (sizeof(int)*50);
	D=(int *)malloc (sizeof(int)*50);
	E=(int *)malloc (sizeof(int)*50);
	
	insertar3(A, 50);
	insertar3(B, 50);
	insertar3(C, 50);
	insertar3(D, 50);
	insertar3(E, 50);
	
	int meta = 50;
	int avanceA = 0;
	int aleatorioA = 0;
	int avanceB = 0;
	int aleatorioB = 0;
	int avanceC = 0;
	int aleatorioC = 0;
	int avanceD = 0;
	int aleatorioD = 0;
	int avanceE = 0;
	int aleatorioE = 0;
	int vez = 0;
	
	srand(time(NULL));
	
	do{
		aleatorioA = ran()%10 + 1;
			avanceA = avanceA + aleatorioA;
		aleatorioB = ran()%10 + 1;
			avanceB = avanceB + aleatorioB;
		aleatorioC = ran()%10 + 1;
			avanceC = avanceC + aleatorioC;
		aleatorioD = ran()%10 + 1;
			avanceD = avanceD + aleatorioD;
		aleatorioE = ran()%10 + 1;
			avanceE = avanceE + aleatorioE;
		
		vez++;
		
		printf("%d vez\n", vez);
		printf("Kilometros avanzados por A: %d\n", aleatorioA);
		printf("Kilometros avanzados por B: %d\n", aleatorioB);
		printf("Kilometros avanzados por C: %d\n", aleatorioC);
		printf("Kilometros avanzados por D: %d\n", aleatorioD);
		printf("Kilometros avanzados por E: %d\n", aleatorioE);
		
		imprimir2(1, A, avanceA, 'A');
		imprimir2(2, B, avanceB, 'B');
		imprimir2(3, C, avanceC, 'C');
		imprimir2(4, D, avanceD, 'D');
		imprimir2(5, E, avanceE, 'E');
		
		printf("\n\n");
		getche();
		
	}while (avanceA<50 && avanceB<50 && avanceC<50 && avanceD<50 && avanceE<50);
	
	/*if (avanceA > avanceB){
		if (avanceA > avanceC){
			if (avanceA > avanceD){
				if (avanceA > avanceE){
					printf ("\nEl jugador A ha ganado.\n");
				}
				else if (avanceA = avanceE){
					printf ("\nLos jugadores A y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
			else if (avanceA = avanceD){
				if (avanceA > avanceE){
					printf ("\nLos jugadores A y D han ganado.\n");
				}
				else if (avanceA = avanceE){
					printf ("\nLos jugadores A, D y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
			else{
				if (avanceD > avanceE){
					printf ("\El jugador D ha ganado.\n");
				}
				else if (avanceD = avanceE){
					printf ("\nLos jugadores D y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
		}
		else if (avanceA = avanceC){
			if (avanceA > avanceD){
				if (avanceA > avanceE){
					printf ("\nLos jugadores A y C han ganado.\n");
				}
				else if (avanceA = avanceE){
					printf ("\nLos jugadores A, C y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
			else if (avanceA = avanceD){
				if (avanceA > avanceE){
					printf ("\nLos jugadores A, C y D han ganado.\n");
				}
				else if (avanceA = avanceE){
					printf ("\nLos jugadores A, C, D y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
			else{
				if (avanceD > avanceE){
					printf ("\El jugador D ha ganado.\n");
				}
				else if (avanceD = avanceE){
					printf ("\nLos jugadores D y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
		}
		else{
			if (avanceC > avanceD){
				if (avanceC > avanceE){
					printf ("\nEl jugador C ha ganado.\n");
				}
				else if (avanceC = avanceE){
					printf ("\nLos jugadores C y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
			else if (avanceC = avanceD){
				if (avanceC > avanceE){
					printf ("\nLos jugadores C y D han ganado.\n");
				}
				else if (avanceC = avanceE){
					printf ("\nLos jugadores C, D y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
			else{
				if (avanceD > avanceE){
					printf ("\El jugador D ha ganado.\n");
				}
				else if (avanceD = avanceE){
					printf ("\nLos jugadores D y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
		}
	}
	else if (avanceA = avanceB){
		if (avanceA > avanceC){
			if (avanceA > avanceD){
				if (avanceA > avanceE){
					printf ("\nLos jugadores A y B han ganado.\n");
				}
				else if (avanceA = avanceE){
					printf ("\nLos jugadores A, B y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
			else if (avanceA = avanceD){
				if (avanceA > avanceE){
					printf ("\nLos jugadores A, B y D han ganado.\n");
				}
				else if (avanceA = avanceE){
					printf ("\nLos jugadores A, B, D y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
			else{
				if (avanceD > avanceE){
					printf ("\El jugador D ha ganado.\n");
				}
				else if (avanceD = avanceE){
					printf ("\nLos jugadores D y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
		}
		else if (avanceA = avanceC){
			if (avanceA > avanceD){
				if (avanceA > avanceE){
					printf ("\nLos jugadores A, B y C han ganado.\n");
				}
				else if (avanceA = avanceE){
					printf ("\nLos jugadores A, B, C y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
			else if (avanceA = avanceD){
				if (avanceA > avanceE){
					printf ("\nLos jugadores A, B, C y D han ganado.\n");
				}
				else if (avanceA = avanceE){
					printf ("\nLos jugadores A, B, C, D y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
			else{
				if (avanceD > avanceE){
					printf ("\El jugador D ha ganado.\n");
				}
				else if (avanceD = avanceE){
					printf ("\nLos jugadores D y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
		}
		else{
			if (avanceC > avanceD){
				if (avanceC > avanceE){
					printf ("\nEl jugador C ha ganado.\n");
				}
				else if (avanceC = avanceE){
					printf ("\nLos jugadores C y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
			else if (avanceC = avanceD){
				if (avanceC > avanceE){
					printf ("\nLos jugadores C y D han ganado.\n");
				}
				else if (avanceC = avanceE){
					printf ("\nLos jugadores C, D y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
			else{
				if (avanceD > avanceE){
					printf ("\El jugador D ha ganado.\n");
				}
				else if (avanceD = avanceE){
					printf ("\nLos jugadores D y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
		}
	}
	else{
		if (avanceB > avanceC){
			if (avanceB > avanceD){
				if (avanceB > avanceE){
					printf ("\nEl jugador B ha ganado.\n");
				}
				else if (avanceB = avanceE){
					printf ("\nLos jugadores B y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
			else if (avanceB = avanceD){
				if (avanceB > avanceE){
					printf ("\nLos jugadores B y D han ganado.\n");
				}
				else if (avanceB = avanceE){
					printf ("\nLos jugadores B, D y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
			else{
				if (avanceD > avanceE){
					printf ("\El jugador D ha ganado.\n");
				}
				else if (avanceD = avanceE){
					printf ("\nLos jugadores D y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
		}
		else if (avanceB = avanceC){
			if (avanceB > avanceD){
				if (avanceB > avanceE){
					printf ("\nLos jugadores B y C han ganado.\n");
				}
				else if (avanceB = avanceE){
					printf ("\nLos jugadores B, C y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
			else if (avanceB = avanceD){
				if (avanceB > avanceE){
					printf ("\nLos jugadores B, C y D han ganado.\n");
				}
				else if (avanceB = avanceE){
					printf ("\nLos jugadores B, C, D y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
			else{
				if (avanceD > avanceE){
					printf ("\El jugador D ha ganado.\n");
				}
				else if (avanceD = avanceE){
					printf ("\nLos jugadores D y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
		}
		else{
			if (avanceC > avanceD){
				if (avanceC > avanceE){
					printf ("\nEl jugador C ha ganado.\n");
				}
				else if (avanceC = avanceE){
					printf ("\nLos jugadores C y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
			else if (avanceC = avanceD){
				if (avanceC > avanceE){
					printf ("\nLos jugadores C y D han ganado.\n");
				}
				else if (avanceC = avanceE){
					printf ("\nLos jugadores C, D y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
			else{
				if (avanceD > avanceE){
					printf ("\El jugador D ha ganado.\n");
				}
				else if (avanceD = avanceE){
					printf ("\nLos jugadores D y E han ganado.\n");
				}
				else{
					printf ("\El jugador E ha ganado.\n");
				}
			}
		}
	}*/
	
	// La parte de azul me devolvía más de un ganador a comparación de esta
	
	if (avanceA >= avanceB){
		mayor1 = avanceA;
	}
	else{
		mayor1 = avanceB;
	}
	
	if (avanceC >= avanceD){
		mayor2 = avanceC;
	}
	else{
		mayor2 = avanceD;
	}
	
	if (mayor1 >= mayor2){
		mayor3 = mayor1;
	}
	else{
		mayor3 = mayor2;
	}
	
	if (mayor3 >= avanceE){
		mayorT = avance3;
	}
	else{
		mayorT = avanceE;
	}
	
	if (mayorT == avanceE){
		printf ("\El jugador E ha ganado.\n");
	}
	else if (mayorT == avanceD){
		printf ("\El jugador D ha ganado.\n");
	}
	else if (mayorT == avanceC){
		printf ("\El jugador C ha ganado.\n");
	}
	else if (mayorT == avanceB){
		printf ("\El jugador B ha ganado.\n");
	}
	else{
		printf ("\El jugador A ha ganado.\n");
	}
	
	free(A);
	free(B);
	free(C);
	free(D);
	free(E);
	return 0;
}

void insertar3(int *X, int N){
	int i=0;
	for (i=0; i<N; i++){
		*(X+i) = i+1;
	}
}

void insertar4(int *X, int N){
	int i=0;
	for (i=0; i<N; i++){
		X[i]=i+1;
	}
}

void imprimir (int a, char car){
	int i=0;
	for (i=0; i<=a; i++){
		if(i<a){
			printf(" ");
		} 
		else{
			printf("%c", car);
		}
	}
	printf("\n");
}

void imprimir2(int n, int *X, int a, char car){
	int i=0;
	printf("%d)", n);
	for (i=0; i<a; i++){
		if (*(X+i)<a){
			printf(" ");
		}
		else if (i==(a-1)){
			printf ("%c", car);
		}
		printf ("\n");
	}
}
