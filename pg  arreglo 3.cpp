#include<stdio.h>
#include<stdlib.h>
#include <stdlib.h> /*En esta librería se encuentra random*/
	//Función para generar números random hasta cierto límite.
	int genRandNumLowerThan(int limite){ 
		return rand() %limite +1;
	}

int main()
{
	
	//Se inicializa la semilla del random
	srand (time(NULL)); 
	int numerosRandom[30];
	int numRandom=0;
	int i=0;
	for(i=0;i<30;i++){
		numRandom=genRandNumLowerThan(30);
		//Si el número generado es 0 lo descartamos hasta tener uno diferente.
		while (numRandom==0)numRandom=genRandNumL…
			numerosRandom[i]=numRandom;
	}
	for(i=0;i<30;i++)
		printf("Pos %d, = %d\n",i,numerosRandom[i]);
	system("PAUSE");
	return 0;
}
